if __name__ == '__main__':
    students=[]
    scores=[]
    
    for N in range(int(input())):
        name = input()
        score = float(input())
        scores.append(score)
        students.append([name, score])
    count = scores.count(min(scores))
    for i in range (count):
        scores.remove(min(scores))
        
    SH=min(scores)
    students.sort()
    R=[z for z in students if z[1]==SH]
    for i in R:
        print (i[0])
    
