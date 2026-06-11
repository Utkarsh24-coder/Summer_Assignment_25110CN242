l=int(input("Enter lower limit:"))
u=int(input("Enter upper limit:"))
print("Prime Numbers in range (",l,",",u,")")
for i in range(l,u+1):
    if i>1:
        is_Prime=True
        for j in range (2,i):
            if i%j==0:
                is_Prime=False
                break
        if(is_Prime):
            print(i)