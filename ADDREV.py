T = int(input())
while T > 0:
    num = input().split()
    if (num[0][-1] == 0) or (num[-1][-1] == 0):
        num[0].rstrip('0')
        num[-1].rstrip('0')
    num[0] = num[0][::-1]
    num[-1] = num[-1][::-1]
    num = [int(x) for x in num]
    res = str(sum(num))
    res = res[::-1]
    print(int(res))
    T = T - 1
