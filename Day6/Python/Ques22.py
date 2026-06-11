import math
n=int(input("Enter a binary number:"))
dec=0
i=t=0
while n>0:
    t=n%10 * math.pow(2,i)
    dec += t
    i +=1
    n=n//10
print("The binary to decimal conversion of the given number is:",dec)
