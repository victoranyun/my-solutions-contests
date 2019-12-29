a = int(input())
b = int(input())
c = int(input())

if a < b < c:
    print(b)
elif b < c < a:
    print(c)
elif c < a < b:
    print(a)
elif c < b < a:
    print(b)
elif a < c < b:
    print(c)
elif b < a < c:
    print(a)