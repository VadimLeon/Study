# calass Continuous Variate to simulate the dropout the random value
import scipy.integrate as spint
import math
import random
# from decimal import * # for long double value

class ContinuousVariate:
#    valueX       = 0.0
#    probabilityX = 0.0

    def __init__(self):
        self.valueX       = 0.0
        self.probabilityX = 0.0
        self.lambla_x     = 0.0
        self.x_max        = 1.0
        self.x_min        = -1.0
        self.eps          = 1e-7

    def setX_max(self):
        self.x_max = (math.fabs(math.log(self.eps))) / self.lambla_x
    
    def setX_min(self):
        if math.fabs(self.x_max - 1.0) > self.eps: 
            self.x_max = (math.fabs(math.log(self.eps))) / self.lambla_x
        self.x_min = 2.0 * (1.0 - spint.quad(lambda x: math.exp(-self.lambla_x * x), 0.0, self.x_max))

    def set_eps(self, eps_val):
        self.eps = eps_val

    def set_lambda(self, lambd):
        self.lambla_x = lambd

    def list_value(self, Nexperiments):
        values = []
        for i in range(Nexperiments):
            values.append(random.expovariate(self.lambla_x))
        sorted(values)
        return values

