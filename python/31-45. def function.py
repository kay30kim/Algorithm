dict1 = {'a':1, 'b':2, 'c':3}
print(dict1['a'])
dict1['d']=4
print(dict1)
dict1['b'] = 7
print(dict1)
print(len(dict1))

def add_number(n1,n2):
    ret = n1+n2
    return ret

def add_txt(t1,t2):
    print(t1+t2)

ans = add_number(10,15)
print(ans)
text1 = '대한민국~'
text2 = '만세!!'
add_txt(text1,text2)

def add_txt1(t1,t2='파이썬'):
    print(t1+':'+t2)

add_txt1('베스트')
add_txt1(t2='대한민국',t1='1등')

def func1(*args):
    print(args)

def func2(width, height, **kwargs):
    print(kwargs)


func1()
func1(3,5,1,5)
func2(10,20)
func2(10,20,lis=90)
