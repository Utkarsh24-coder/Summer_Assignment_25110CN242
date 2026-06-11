n=(int(input("Enter a decimal number:")))
bin=[]
a=c=0
while n>0:
    rem=n%2
    bin.append(rem)
    n=n//2
    a +=1
for i in bin:
    if i==1:
        c+=1
print("The set bit of the number is:",c)