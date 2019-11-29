import sys
import mathPart
import math
# Импортируем наш интерфейс из файла
from formForMSL import *
from PyQt5.QtWidgets import QApplication, QMainWindow
from PyQt5 import QtWidgets, QtGui, QtCore





class MyWin(QMainWindow, Ui_MainWindow):

     def __init__(self, parent=None, *args, **kwargs):
        QMainWindow.__init__(self, parent)
        self.setupUi(self)
        self.pushButton.clicked.connect(self.MyFunction)

     def MyFunction(self):
        self.tableWidget.clear()
        t = float(self.textEdit.toPlainText())
        lyambda = float(self.textEdit_2.toPlainText())
        n = int(self.textEdit_3.toPlainText())
        mathPart.mathPart.calc(t, lyambda, n, self)
        
        
        
        
    


if __name__=="__main__":
    app = QtWidgets.QApplication(sys.argv)
    myapp = MyWin()
    myapp.show()
    try:
        sys.exit(app.exec_())
    except SystemExit:
        pass