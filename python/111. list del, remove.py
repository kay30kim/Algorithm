solarsys = ['태양', '수성', '금성', '지구', '화성', '목성', '토성','천왕성','해왕성']
del solarsys[0]
print(solarsys)
solarsys.remove('수성')
print(solarsys)
del solarsys[1:3]
print(solarsys)
listdata = [2,2,1,3,8, 5,7,6,3,6,2,3,9,4,4]
listsize = len(listdata)
print(listsize)
c1 = listdata.count(2)
c2 = listdata.count(7)
print(c1)
print(c2)
#del listdata
#print(listdata)
print()
namelist = ['Marry', 'Sams', 'Aimy','Tom','Michale','Bob','Kelly']
#namelist.sort()
print(namelist)
ret1 = sorted(namelist)
ret2 = sorted(namelist, reverse = True)
print(ret1)
print(ret2)
print()

from random import shuffle
listdata = list(range(1,11))
for i in range(3):
    shuffle(listdata)
    print(listdata)
ret = list(enumerate(solarsys))
print(ret)
for i, body in enumerate(solarsys):
    print('태양계의 %d번째 천체 : %s' %(i,body))
