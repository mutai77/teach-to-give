#Write a program that prints the numbers from 1 to 100. For multiples of 3, print "Fizz"; for 
#multiples of 5, print "Buzz"; and for numbers that are multiples of both 3 and 5, print "FizzBuzz".

#for-in loop that range from numbers  1 to 100
for num in range(1,101):
  #check if number is divisible by both 3 and 5
  if(num%3==0 and num%5==0):
    print("FizzBuzz")
  #check if number is divisible by 3
  elif(num%3 == 0):
    print("Fizz")
  #checking that number is divisible by 5
  elif(num%5 == 0):
    print("Buzz")
  #And if not divisible by either of them print num as it is
  else:
    print(num)
