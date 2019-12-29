sl = int(input())
s = int(input())
a = s - sl
if a <= 0:
    print('Congratulations, you are within the speed limit!')
elif 1 <= a <= 20:
    print('You are speeding and your fine is $100.')
elif 21 <= a <= 30:
    print('You are speeding and your fine is $270.')
elif a > 30:
    print('You are speeding and your fine is $500.')