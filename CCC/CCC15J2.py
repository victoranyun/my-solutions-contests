a = str(input())


if a.count(':-)') > a.count(':-('):
    print('happy')
elif a.count(':-)') < a.count(':-('):
    print('sad')
elif a.count(':-)') == 0 and a.count(':-(') == 0:
    print('none')
else:
    print('unsure')