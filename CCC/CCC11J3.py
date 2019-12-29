t1 = int(input())
t2 = int(input())
count = 2
while t1 >= t2 and t1 >=0 and t2 >=0:
    count = count + 1
    tn = t1 - t2
    t1 = t2
    t2 = tn
    
print(count)