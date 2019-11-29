#pragma once

class Task {

  public:
    double a, b, c, d;
    int n, m, N;
    double h, k;
    double epsM;
    double eps;
    double (*mu1)(double);
    double (*mu2)(double);
    double (*mu3)(double);
    double (*mu4)(double);
    double(*f)(double, double);
    double** V;
    double res;

    Task(int _n, int _m, double _a, double _b, double _c, double _d,
        double _eps, int _N,
        double (*_mu1)(double), double(*_mu2)(double),
        double(*_mu3)(double), double(*_mu4)(double), double(*_f)(double, double));
    
    ~Task();
    void Residual();
    void Zeidel();

};

double mu1(double y);
double mu2(double y);
double mu3(double x);
double mu4(double x);

double mu1_test(double y);
double mu2_test(double y);
double mu3_test(double x);
double mu4_test(double x);

double f(double x, double y);
double u(double x, double y);
double f_test(double x, double y);

System::Void showData(System::Windows::Forms::DataGridView^ table1,
    System::Windows::Forms::DataGridView^ table2, System::String^ name, Task& t);