a = []
s = []
t = int(input())
while t > 0:
    a.append(int(input()))
    t = t-1
for i in range(len(a)):
    n=1
    while n < a[i] and a[i] % n == 0:
        s.append(n)
        n = n + 1
    print(sum(s))
    s = []
