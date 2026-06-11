n=(int(input("Enter a number:")))
pdt=1
while n>0:
    pdt=pdt*(n%10)
    n=n//10
print("Product of digits of a number is:",pdt)