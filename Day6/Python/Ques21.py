n=(int(input("Enter a decimal number:")))
bin=[]
a=0
# print(bin(n)[2:])
while n>0:
    rem=n%2
    bin.append(str(rem))
    n=n//2
    a +=1
print("".join(bin[::-1]))