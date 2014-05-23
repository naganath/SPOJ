mag_plate = []
words = []
t = int(input())
while t > 0:
    n = int(input())
    while n > 0:
        s = input()
        words.append(s)
        n = n - 1
    for i in range((len(words)-1),-1,-1):
        if words[i][0] == words[i-1][-1]:
            mag_plate.append(1)
        else:
            mag_plate.append(0)
    if all(x == mag_plate[0] for x in mag_plate):
        print('Ordering is possible.')
    else:
        print('The door cannot be opened.')
    words = []
    mag_plate = []
    t = t - 1
    
