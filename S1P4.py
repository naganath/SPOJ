import math
n,k = input().split()
x = math.floor(float(n))
A = x * 7
B = pow(int(k),2)
if (((x+1)%2)==0) and ((A+B)<=100):
    print(1)
else:
    print(0)
