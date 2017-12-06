def nozeros (n):
    a = [0]*n # i th element the array 'a' contains the number of elements of i bytes which start with 1
    b = [0]*n # i th element the array 'b' contains the number of elements of i bytes which start with 0
    a[0] = 1
    b[0] = 1
    for i in range (1 , n):
        a[i] = a[i-1] + b[i-1]
        b[i] = a[i-1]
        if a[i] > 1000000007:
            a[i] %= 1000000007
        if b[i] > 1000000007:
            b[i] %= 1000000007

    return ( a[n-1] + b[n-1] ) % 1000000007

t = int ( input( ) )
for _ in range ( t ):
    n = int ( input( ) )
    print ( nozeros( n ))
