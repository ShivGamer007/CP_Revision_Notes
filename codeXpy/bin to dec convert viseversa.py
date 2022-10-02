def decimaltobinary(val):
    return bin(val).replace("0b","")
print(decimaltobinary(2))

def bintodec(val):
    return int(val,2)
print(bintodec('10'))