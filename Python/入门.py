print(44496,end=" ")#数字可以不加引号
print("测试")#输出文字要加引号
print('不分行',end="")#不分行
print(r"输出原字符\n\n")#用r保持原字符不变

a, b, c, d = 20, 5.5, "inter", 4+3#同时定义多种不同的数据
print(type(a),type(b),type(c),type(d))#可以输出类型

x=19%3#求余数
print (x)

list1 = ['bcc',123,45.6]
list2=['text',999]
print(list1+list2)#同时合并输出两个列表

a=[1,2,3,4,5,6,7,8,9]#输入一个数组
print (a[0])#输出数组的第一个数值
print(a[2:])#输出数组从第三个数开始到最后一个数
print(a[2:6])#输出第三到第七个数


a[1:3]=[9,8,7]#更改数组的2-4位
print (a)#输出数组

