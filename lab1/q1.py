

def islower(ch):
    return ch>='a' and ch<='z'

def incrept(y):
    r=""
    for ch in y:
        if(islower(ch)):
            shifted = chr(((ord(ch) - ord('a') + 6) % 26) + ord('a'))
            r+=shifted
        else:
            shifted = chr(((ord(ch) - ord('A') + 6) % 26) + ord('A'))
            r+=shifted
    return r


s=input("enter string : ")

print(incrept(s))



