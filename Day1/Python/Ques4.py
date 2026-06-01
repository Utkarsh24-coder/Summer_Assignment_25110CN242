n=int(input("Enter a number:"))
count=0
a=n
while n>0:
    count +=1
    n=n//10
print("Counting of digits of",a,"is",count)
