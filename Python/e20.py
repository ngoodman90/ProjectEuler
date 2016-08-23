fact = lambda x: x if x == 1 else x*fact(x - 1)

sumOfDigits = lambda num, ans:  ans if num == 0 else sumOfDigits(num / 10, ans + (num % 10))

print sumOfDigits(fact(100), 0)

