num = 2
for i in xrange(1, 1000):
    num = num * 2
print num
str =  str(num)
ans = 0
for c in str:
    ans = ans + int(c)
print ans
