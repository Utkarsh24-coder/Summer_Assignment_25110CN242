import math
n=(int(input("Enter a number:")))
a=b=n
count=t=0
while n>0:
    n=n//10
    count +=1
while a>0:
    t=t+ math.pow(a%10,count)
    a=a//10
if t==b:
    print("Given number is Armstrong No")
else:
    print("Given number is not a Armstrong No")
    

