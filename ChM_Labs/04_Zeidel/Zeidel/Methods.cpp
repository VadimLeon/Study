#include "stdafx.h"


Task::Task(int _n, int _m, double _a, double _b, double _c, double _d,
    double _eps, int _N,
    double(*_mu1)(double), double(*_mu2)(double),
    double(*_mu3)(double), double(*_mu4)(double), double(*_f)(double, double)) {
    n = _n +1;
    m = _m +1;
    a = _a;
    b = _b;
    c = _c;
    d = _d;
    epsM = _eps;
    eps = 0;
    N = _N;
    res = 0;

    h = (b - a) / _n;
    k = (d - c) / _m;
    mu1 = _mu1;
    mu2 = _mu2;
    mu3 = _mu3;
    mu4 = _mu4;
    f = _f;

    V = new double*[m];
    for (int j = 0; j < m; j++) {
        V[j] = new double[n];
        for (int i = 0; i < n; i++) {
            V[j][i] = 0;
            if (j == 0)
                V[j][i] = mu3(a + i * h);
            if (j == m - 1)
                V[j][i] = mu4(a + i * h);
        }
        V[j][0] = mu1(c + j * k);
        V[j][n - 1] = mu2(c + j * k);
    }

}

Task::~Task() {
    for (int i = 0; i < m; i++)
        delete[] V[i];
    delete[] V;
}
void Task::Zeidel() {
    double h2 = 1 / (h*h);
    double k2 = 1 / (k*k);
    double A = 2*(h2+k2);
    double vOld = 0;
    double currEps = epsM, epsMax = epsM;
    int S = 0;
    while(epsMax >= epsM && S < N) {
        epsMax = 0;
        for (int j = 1; j < m - 1; j++) {
            for (int i = 1; i < n - 1; i++) {
                vOld = V[j][i];
                V[j][i] = 1/A * (f(a + i * h, c + j * k) + h2 * (V[j][i-1] + V[j][i+1]) 
                                                         + k2 * (V[j-1][i] + V[j+1][i]));
                currEps = abs(vOld - V[j][i]);
                if (currEps > epsMax)
                    epsMax = currEps;
            }
        }
        S++;
    }
    N = S;
    epsM = epsMax;
}

void Task::Residual() {
    double h2 = 1 / (h*h);
    double k2 = 1 / (k*k);
    double A = 2 * (h2 + k2);
    for (int j = 1; j < m-1; j++)
    {
        for (int i = 1; i < n-1; i++)
        {
            double rCur = A * V[j][i] - (V[j + 1][i] + V[j - 1][i]) * k2 - 
                (V[j][i + 1] + V[j][i - 1]) * h2 - f(a + i * h, c + j * k);
            if (abs(rCur) > res)
            {
                res = abs(rCur);
            }
        }
    }
}

double u(double x, double y) {
    return exp(1-x*x-y*y);
}

double mu1_test(double y) {
    return exp(- y * y);
}

double mu2_test(double y) {
    return exp(- y * y);
}

double mu3_test(double x) {
    return exp(- x * x );
}
double mu4_test(double x) {
    return exp(-x * x);;
}


double f_test(double x, double y) {
    return -4 * exp(1 - x * x - y * y)*(x*x + y * y - 1);
}


double f(double x, double y) {
    return abs(x*x-y*y);
}

double mu1(double y) {
    return 1-y*y;
}

double mu2(double y) {
    return (1-y*y)*exp(y);
}
double mu3(double x) {
    return 1-x*x;
}

double mu4(double x) {
    return 1-x*x;
}
