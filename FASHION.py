sum_hot = []
T = int(input())
while T > 0:
    N = int(input())
    temp_A = input().split()
    temp_B = input().split()
    hot_pair = temp_A + temp_B
    #hot_pair = list(map(int,hot_pair))
    for i in range(len(hot_pair)//2):
        sum_hot.append((int(hot_pair[i]))*(int(hot_pair[i+N])))
    print(sum(sum_hot))
    sum_hot = []
    hot_pair = []
    T = T - 1
        
