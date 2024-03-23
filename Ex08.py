def Guessing():
    n=int(input())
    if n==6:
        print("Your Guess Is Correct!")
    elif n>6:
        print("Your guess is higher")
    else:
        print("Your guess is almost there")

Guessing()