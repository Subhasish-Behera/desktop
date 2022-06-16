t=int(input())
for i in range(t):
    a,b,c = map(int,input().split())
    h=a*4+b*4
    if a>b*2:
        c=(a-b*2)*4+b*4
    else:
        l=b*4
    if c>=1 and c<=h and c%4==0:
        print('yes')
    else:
        print('N0')