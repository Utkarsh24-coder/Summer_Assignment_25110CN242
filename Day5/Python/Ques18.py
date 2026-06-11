a=int(input("Enter a number:"))
temp=a
sum=0
while temp>0:
    fact=1
    b=temp%10
    for i in range(1,b+1):
        fact = fact*i
    sum+= fact
    temp=temp//10
if sum==a:
    print(a," is a Strong Number.")
else:
    print(a,"is not a Strong Number.")
    