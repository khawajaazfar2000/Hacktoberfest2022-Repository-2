num = 12345
reversed_num = 0

while num != 0:
    r = num % 10

    reversed_num = (reversed_num * 10) + r
    num = num // 10
    print ("Reversed Number of 12345 is:" , str(reversed_num))