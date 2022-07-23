#!/usr/bin/python3
#Code that reads the number from the file and calls the factorize function
def factorize(number, i):
    last_num = number % 10
    if (number % i == 0):
        multiplier = number / i
        print("{}={}*{}".format(number, int(multiplier), i))
        return
    factorize(number, i + 1)
