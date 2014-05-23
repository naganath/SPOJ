GPA = 0
GPA_num = 0
GPA_den = 0
grades = []
credit = {'S':10,'A':9,'B':8,'C':7,'D':6,'E':5}
T = int(input())
while T > 0:
    sub_num = int(input())
    for i in range(sub_num):
        grades.append(input())
    for j in range(len(grades)):
        GPA_num = GPA_num + (int(grades[j][0]) * credit[grades[j][-1]])
        GPA_den = GPA_den + int(grades[j][0])
    GPA = GPA_num / GPA_den
    GPA = round(GPA, 2)
    print(GPA)
    GPA = 0
    GPA_num = 0
    GPA_den = 0
    grades = []
    T = T - 1
