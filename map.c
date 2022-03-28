syntax of map: map(fun,iterble)
we can pass one or more iterable to the map()function

#add two lists using map and lambda
numbers1=[1,2,3,4]
numbers2=[5,6,7,8]
result = map(lambda x, y: x + y, numbers1,numbers2)
print(list(result))
o/p[6, 8, 10, 12]

#list of strings
l =['sat','bat','cat','mat']
#map()can listify the list of strings individually
test= list(map(list,l))
print(test)
o/p[['s', 'a', 't'], ['b', 'a', 't'], ['c', 'a', 't'], ['m', 'a', 't']]

