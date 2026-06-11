import math
l=int(input("Enter positive lower range:"))
u=int(input("Enter positive upper range:"))
print("Armstrong Number in range",l,"-","u")
for i in range (l,u+1):
    a=b=temp=i
    count=s=0
    while temp>0 :
        temp=temp//10
        count += 1
    while a>0:
        s=s+ math.pow(a%10,count)
        a=a//10
    if s==b:
        print(i,end=" ")


