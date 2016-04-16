ans = 0
max_path = 0
for i in xrange(1000000):
    num = i
    path_length = 0
    while num != 1:
        if num % 2 == 0 and num > 0:
            num = num / 2
        else:
            num = 3 * num + 1
        path_length = path_length + 1
    if path_length > max_path:
        max_path = path_length
        ans = i
print (ans)