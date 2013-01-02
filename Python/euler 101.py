import math
def toBin(number):
    BNum = bin(number)
    BNum = BNum.lstrip('0b')
    return BNum

for i in range (16):
    print (toBin(i))
    
