G_res = []
MG_res = []
T = int(input())
while T > 0:
    print()
    num_mon = input().split()
    num_mon = [int(x) for x in num_mon]
    G_str = input().split()
    G_str = [int(y) for y in G_str]
    MG_str = input().split()
    MG_str = [int(z) for z in MG_str]
    if (num_mon[0] == num_mon[-1]) and (G_str == MG_str):
        print("Godzilla")
    if (num_mon[0] > num_mon[-1]):
        temp = num_mon[-1] - 1
        while temp >= 0:
            for i in range(num_mon[0]):
                if (MG_str[temp] > G_str[i]):
                    MG_res.append(1)
                elif (MG_str[temp] == G_str[i]):
                    G_res.append(1)
                else:
                    G_res.append(1)
            temp = temp - 1
    if (num_mon[-1] > num_mon[0]):
        temp = num_mon[0] - 1
        while temp >= 0:
            for j in range(num_mon[-1]):
                if (G_str[temp] > MG_str[j]):
                    G_res.append(1)
                elif (G_str[temp] == MG_str[j]):
                    G_res.append(1)
                else:
                    MG_res.append(1)
            temp = temp - 1
    if (G_res.count(1) > MG_res.count(1)):
        print("Godzilla")
    elif (G_res.count(1) < MG_res.count(1)):
        print("MechaGodzilla")
    elif (G_res.count(1) and MG_res.count(1) == 0):
        print("uncertain")
    G_res = []
    MG_res = []
    T = T - 1
