a = []
s1 = []
s2 = []
s3 = []
t = int(input())
while t > 0:
    a.append(int(input()))
    t = t - 1
for i in range(len(a)):
    n = 1
    while n < (a[i] // 2):
        s1.append(n * 3)
        s2.append(n * 5)
        n = n + 1
    for j in range(len(s1)) and range(len(s2)):
        if s1[j] < a[i]:
            s3.append(s1[j])
        if s2[j] < a[i]:
            s3.append(s2[j])
    print(sum(s3))
    s1 = []
    s2 = []
    s3 = []
