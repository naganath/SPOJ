area = []
T = int(input())
while T > 0:
    piece_1 = input().split()
    piece_2 = input().split()
    piece_1 = list(map(int,piece_1))
    piece_2 = list(map(int,piece_2))
    if ((piece_2[0] > piece_1[-1]) and (piece_2[-1] != piece_1[-1])):
        area.append((piece_1[2]-piece_1[0]) * (piece_1[3]-piece_1[1]))
        area.append((piece_2[2]-piece_2[0]) * (piece_2[3]-piece_2[1]))
    elif ((piece_2[0] < piece_1[-1]) and (piece_2[-1] != piece_1[-1])):
        area.append((piece_1[2]-piece_1[0]) * (piece_1[3]-piece_1[1]))
        area.append(area[0]-(piece_1[-2]-piece_2[0])*(piece_1[-1]-piece_2[1]))
    else:
        area.append((piece_1[2]-piece_1[0]) * (piece_1[3]-piece_1[1]))
        area.append((piece_2[2]-piece_2[0]) * (piece_2[3]-piece_2[1]))
    print(sum(area))
    area = []
    piece_1 = []
    piece_2 = []
    T = T - 1
