T = int(input())
print()
while T > 0:
    note = input().split()
    note.remove('+')
    note.remove('=')
    if not(note[0].isnumeric()):
        print((int(note[2])-int(note[1])), ' + ', note[1], ' = ', note[2])
    if not(note[1].isnumeric()):
        print(note[0], ' + ', (int(note[2])-int(note[0])), ' = ', note[2])
    if not(note[2].isnumeric()):
        print(note[0], ' + ', note[1], ' = ', (int(note[0])+int(note[1])))
    print()
    T = T - 1
    
