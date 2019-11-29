import math
import random
import copy
from numpy import float64
from formForMSL import Ui_MainWindow
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5 import QtWidgets, QtGui, QtCore
import numpy
from scipy.misc import factorial
import matplotlib.pyplot as plt

def numInegrateFunc(x, r):
    return x ** (r/2) / (2 ** (r/2) * math.gamma(r/2) * x * math.exp(x/2)) if x > 0 else 0


class mathPart(Ui_MainWindow):
    
    
    def calc(t,lyambda, n, self):
       #лаба 1
        arr = []
        arrEtta = []
        parameter = lyambda * t
             
        arr.append((numpy.exp(-parameter) * float64(parameter ** 0)) / float64(factorial(0))) 
        #arr.append((numpy.exp(-parameter) * float64(parameter ** 1)) / float64(factorial(1)))
        i = 1
        while i < n:    
            arr.append(arr[i-1]*parameter/ i)
            i += 1  

        #print(arr)
        iter = 0
        #random.seed(22) 
        for iter in range(0, n):
            
            u = random.random()
            #print(u)
            pj = 0.0
            j = 0
            etta = 0
            
            while j < n:
                pj = pj + arr[j]
                if u < pj:            
                    break
                elif u == pj:
                    etta += 1
                    arrEtta.append(etta)
                    break
                else:
                    j += 1 
                    etta += 1
            arrEtta.append(etta)
        
        #print(arrEtta)
        arrEtta.sort()
        print("Значения случайной величины:", arrEtta)

        self.tableWidget.setRowCount(n)
        l = 0
        tmp = 0
        minArr = min(arrEtta)
        maxArr = max(arrEtta)
        selectValuePlot = []
        selectProbPlot = []
        maxErrorProb = 0
        valueExp = []
        for l in range(0, maxArr+1):
            ni = arrEtta.count(l)
            if ni !=0:
                valueExp.append(l)
                selectValuePlot.append(l)
                periodicity = ni/n
                selectProbPlot.append(periodicity)
                
                self.tableWidget.setItem(tmp, 0, QtWidgets.QTableWidgetItem(str(l)))
                self.tableWidget.setItem(tmp, 1, QtWidgets.QTableWidgetItem(str(ni)))
                self.tableWidget.setItem(tmp, 2, QtWidgets.QTableWidgetItem(str(periodicity)))
                if l != 0:
                    theoryProb = arr[l-1]*parameter/ l
                    self.tableWidget.setItem(tmp, 3, QtWidgets.QTableWidgetItem(str(theoryProb)))
                else:
                    theoryProb = (numpy.exp(-parameter) * float64(parameter ** l)) / float64(factorial(l))
                    self.tableWidget.setItem(tmp, 3, QtWidgets.QTableWidgetItem(str(theoryProb)))
                
                diff = abs(periodicity - theoryProb)
                if(diff > maxErrorProb):
                    maxErrorProb = diff
            
                tmp += 1
            
            else:
                selectValuePlot.append(l)
                periodicity = ni/n
                selectProbPlot.append(periodicity)
            
        selectValuePlot.append(max(selectValuePlot)+1)
        
        #print("выборочные значения",selectValuePlot)
        #print("выборочные частоты",selectProbPlot)
        self.label_5.setText(QtCore.QCoreApplication.translate("MainWindow", 
            "MAX отклонение вероятности: " + str(maxErrorProb)))
        
        
        
        
        # лаба 2
        xEtta = 0
        for k in range(n):
            xEtta += arrEtta[k]
        xEtta /= n

        sEtta = 0
        for k in range(n):
            sEtta += ((arrEtta[k] - xEtta)**2)
        sEtta /= n

        R = arrEtta[n-1] - arrEtta[0]

        meEtta = 0

        if n%2 == 1:
            meEtta = arrEtta[n//2]
        else:
            meEtta = (arrEtta[n//2 - 1] + arrEtta[n//2]) / 2



        self.tableWidget2.setRowCount(1)
        self.tableWidget2.setItem(0, 0, QtWidgets.QTableWidgetItem(str(parameter)))
        self.tableWidget2.setItem(0, 1, QtWidgets.QTableWidgetItem(str(xEtta)))
        self.tableWidget2.setItem(0, 2, QtWidgets.QTableWidgetItem(str(math.fabs(parameter - xEtta))))
        self.tableWidget2.setItem(0, 3, QtWidgets.QTableWidgetItem(str(parameter)))
        self.tableWidget2.setItem(0, 4, QtWidgets.QTableWidgetItem(str(sEtta)))
        self.tableWidget2.setItem(0, 5, QtWidgets.QTableWidgetItem(str(math.fabs(parameter - sEtta))))
        self.tableWidget2.setItem(0, 6, QtWidgets.QTableWidgetItem(str(meEtta)))
        self.tableWidget2.setItem(0, 7, QtWidgets.QTableWidgetItem(str(R)))

        arrProbPlot = []
        arrProbPlot.append((numpy.exp(-parameter) * float64(parameter ** 0)) / float64(factorial(0))) 
        j = 1
        probSum = arrProbPlot[0]

        while probSum < 0.999999999:    
            arrProbPlot.append(arrProbPlot[j-1]*parameter/ j)
            probSum = probSum + (arrProbPlot[j-1]*parameter/ j)
            j += 1
        thProb = []
        thProb = copy.deepcopy(arrProbPlot)
        arrProbPlot.insert(0,0)
        #print(arrProbPlot)

        jj = 1
        probSumPlot = arrProbPlot[0]

        while jj < len(arrProbPlot):
            probSumPlot = probSumPlot + arrProbPlot[jj] 
            arrProbPlot[jj] = probSumPlot
            jj += 1

        #print(arrProbPlot)
        
        sumSelectProbPlot = []
        sumSelectProbPlot.append(selectProbPlot[0])
        selectProbSum = sumSelectProbPlot[0]
        jjj = 1
        while jjj < len(selectProbPlot):
            selectProbSum = selectProbSum + selectProbPlot[jjj]
            sumSelectProbPlot.append(selectProbSum)
            jjj += 1
        
        
        sumSelectProbPlot.insert(0,0)

        #print("selectvalue",selectValuePlot)
        #print("sumselect", sumSelectProbPlot)
        #print("arrprob", arrProbPlot)
        #print(list(range(j+1)))
        #print(len(sumSelectProbPlot))
        #print(len(arrProbPlot))
        errF = 0
        for jjjj in range(len(sumSelectProbPlot)):
            tmp = abs(arrProbPlot[jjjj] - sumSelectProbPlot[jjjj])
            if(tmp > errF):
                errF = tmp

        self.label_6.setText(QtCore.QCoreApplication.translate("MainWindow", 
            "MAX разница ф.р. и выборочной ф.р. : " + str(errF)))

        plt.subplot(111)
        plt.step(list(range(j+1)), arrProbPlot)
        plt.step(selectValuePlot, sumSelectProbPlot)
        plt.legend(("Истинная функция распределения", "Выборочная функция распределения"))
        plt.show()

        
        
        # лаба 3

        #print(thProb)
        #print(len(thProb))
        #print("Уникальные значения с.в: ",valueExp)
        countIntervals = int(input("Введите число интервалов:"))
        R = 0
        qProbs = []
        if (countIntervals > 1):

            zEdges = []
            for i in range(countIntervals-1):
                zEdges.append(float(input("Введите границу интервала " + str(len(zEdges)+1) + " ")))
            print("Интервалы и соответствующие им теоретические вероятности")
            print("(-oo", zEdges[0], sep = ' ; ', end = ')\t')
            for i in range(len(zEdges)-1):
                print(zEdges[i], zEdges[i+1], sep = ' ; ', end = ')\t')
            print(zEdges[-1], '+oo', sep = ' ; ', end = ')\t')
            sumProb = 0
            j = 0
            while j < (zEdges[0]):
                sumProb += thProb[j]
                j+= 1
            print()
            
            qProbs.append(sumProb)
            for i in range(0, len(zEdges)-1):
                sumProb = 0
                j = math.ceil(zEdges[i])
                while j < math.ceil(zEdges[i+1]):
                    sumProb += thProb[j]
                    j += 1
                qProbs.append(sumProb)
            sumProb = 0
            
            for i in range(math.ceil(zEdges[-1]), len(thProb)):
                sumProb += thProb[i]
            qProbs.append(sumProb)
            
            for prob in qProbs:
                print('{:06.6f}'.format(prob), end = '\t')
            print()


            R = 0
            nj = 0
            j = 0
            while arrEtta[j] < zEdges[0]:
                nj+=1
                j+= 1
            tmpNj = nj
            R += (nj - n * qProbs[0]) ** 2 / (n * qProbs[0])
            print("(-oo ; ", zEdges[0], ")" ,nj, "c.в.")
            
            
            for i in range(0, len(zEdges) - 1):
                nj = 0
                #j = arrEtta.index(int(zEdges[i]))
                j = 0
                while j < n:
                    if(arrEtta[j] < zEdges[i+1]) & (arrEtta[j] >= zEdges[i]):
                        nj+=1
                    j+= 1
                    
                print("[", zEdges[i], ";",zEdges[i+1], ")", nj, "с.в.")
                tmpNj += nj
                R += (nj - n * qProbs[i]) ** 2 / (n * qProbs[i])
            #print(tmpNj)
            if(n - tmpNj != 0):
                nj = 0
                j = tmpNj
                while j < n:
                    nj+=1
                    j+= 1
                print("[", zEdges[-1], ";","+oo)" ,nj, "c.в.")
                R += (nj - n * qProbs[-1]) ** 2 / (n * qProbs[-1])
            else:
                print("[", zEdges[-1], ";", "+oo)", (n - tmpNj), "c.в.")
            
            #print(R)
            alpha = float(input("Введите уровень значимости альфа: \n"))
            

        else:
            print("(-oo", '+oo', sep = ' ; ', end = ')\t')
            
            sumProb = 0
            j = 0
            while j < (len(thProb)):
                sumProb += thProb[j]
                j+= 1
            print()
            
            qProbs.append(sumProb)
            
        
            for prob in qProbs:
                print('{:06.6f}'.format(prob), end = '\t')
            print()
            
            
            R = 0
            nj = 0
            j = 0
            """
            while j <= max(valueExp):
                try:
                    nj += odAnswers[j]
                except KeyError:
                    nj += 0
                j+= 1
            """
            nj = n
            print("(-oo ; +oo)", nj, "c.в.")
            R += (nj - n * qProbs[0]) ** 2 / (n * qProbs[0])
            #print(R)
            alpha = float(input("Введите уровень значимости альфа: \n"))


        nInt = int(R * 10000)
        intChiSquare = 0
        for i in range(1, nInt+1):
            intChiSquare += ((numInegrateFunc(R * (i - 1) / nInt, countIntervals - 1)) + 
                (numInegrateFunc(R * i / nInt, countIntervals - 1))) * R / (2*nInt)
        print("R0 = ",R)
        print("F(R0) = ", intChiSquare)
        if (1 - intChiSquare) > alpha:
            print("Гипотеза принята")
        else:
            print("Гипотеза не принята")
        