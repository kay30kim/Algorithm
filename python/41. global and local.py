param = 10
strdata = '전역변수'

def func1():
    strdata = '지역변수'
    print(strdata)

def func2(param):
    param = 1

def func3():
    global param
    param = 50

func1()
print(strdata)
print(param)
func2(param)
print(param)
func3()
print(param)
print()

def reverse(x,y,z):
    return z,y,x

ret = reverse (1,2,3)
print(ret)

r1,r2,r3 = reverse('a','b','c')
print(r1);print(r2);print(r3)

import time
print('1초간 프로그램을 정지합니다.')
time.sleep(1)
print('1초가 지나갔습니다.')
print()

import mypackage.mylib
ret1 = mypackage.mylib.add_txt('대한민국','1등')
ret2 = mypackage.mylib.reverse(1,2,3)
print(ret1)
print(ret2)

import time
#import mylib
import mypackage.mylib

time.sleep(1)
#mylib.add_txt('나는','파이썬이다')
mypackage.mylib.reverse(1,2,3)


