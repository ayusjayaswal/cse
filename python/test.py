n = int(input())
def seg(x):
    if (x < 0):
        x = -1 * x
    return x
def lts(s):
    str1 = ""
    for ele in s:
        str1 += ele
    return str1

for i in range((2*n + 1)):
    if (((n-i) != 0) and (i != (n+1))):
        p= seg((n-i))
        l=(str(p)*(2*n-1))
        for x in range(len(l)):
            m = []
            m[x] = int(l[x]) + i
            print(m)
