#!/usr/bin/python3
#Code that reads the number from the file and calls the factorize function
def factorize(number):
    last_num = number % 10
    if (last_num % 2 == 0):
        for i in range(2, number, 2):
            if (number % i == 0):
                multiplier = number / i
                print("{}={}*{}".format(number, int(multiplier), i))
                return
    else:
        for i in range(3, number, 2):
            if (number % i == 0):
                multiplier = number / i
                print("{}={}*{}".format(number, int(multiplier), i))
                return
        
