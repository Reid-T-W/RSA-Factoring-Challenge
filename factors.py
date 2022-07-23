#!/usr/bin/python3
#Code that reads the number from the file and calls the factorize function
def factorize(number):
    for i in range(2, number):
        if (number % i == 0):
            multiplier = number / i
            print("{}={}*{}".format(number, int(multiplier), i))
            return
            
        
