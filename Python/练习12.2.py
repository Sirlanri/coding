print("fuck C!")
print("Python is No.1！")

print('----------------------')
age=int(input('你喜欢女孩子的年龄是？\n'))
if age < 18:
    if age<14:
        print('三年起刑，最高死刑！')
    else:
        print("是个未成年的萝莉！")
elif age>30:
    print('看来是个人妻控呐~')
else:
    print('成年了哟~\n合法萝莉',age,'岁的~')   #age在后面输出


print('-----小明-----')
high=int(input('身高是'))
weight=int(input('体重'))

bmi=high/(weight*weight)

if bmi<18.5:
    print('太轻了')
if 18.5<=bmi<=25:
    print('刚刚好')
if 25<bmi<=28:
    print('过重')
if 28<bmi<=32:
    print('肥胖')
if bmi>32:
    print('超级肥胖啦！！！！！')