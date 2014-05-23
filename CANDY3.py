candy = []
T = int(input())
while T > 0:
    print()
    N = int(input())
    for i in range(N):
        candy.append(int(input()))
    if (sum(candy) % N) == 0:
        print("YES")
    else:
        print("NO")
    T = T - 1
