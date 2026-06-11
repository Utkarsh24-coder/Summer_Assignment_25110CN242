n=(int(input("Enter a number:")))
sum=0
while n>0:
    sum=sum+(n%10)
    n=n//10
print("Sum of digits of a number is:",sum)