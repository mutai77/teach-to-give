#Write a program that takes an integer as input and returns an integer with reversed digit ordering.

revnum = 0
base_pos = 1;
 
def reverse(num):
    global revnum
    global base_pos
    if(num > 0):
        reverse((int)(num / 10))
        revnum += (num % 10) * base_pos
        base_pos *= 10
    return revnum
 
num = -34
print(reverse(num))