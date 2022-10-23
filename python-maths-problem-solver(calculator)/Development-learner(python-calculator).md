# Calculater In Python 
# Development-learner
# maths

#:-Program Start

# Addition
def add(x, y):
    return x + y

# Subtraction
def subtract(x, y):
    return x - y

# Multiplication
def multiply(x, y):
    return x * y

# Division
def divide(x, y):
    return x / y


print("Which Problem You Want To Get Slove.")
print("1.Addition")
print("2.Subtraction")
print("3.Multiplication")
print("4.Division")

while True:
    # take input from the clint
    choice = input("Enter Your Problem Type. (1/2/3/4): ")

    # select any one option
    if choice in ('1', '2', '3', '4'):
        num1 = float(input("Enter First number: "))
        num2 = float(input("Enter Second number: "))

        if choice == '1':
            print(num1, "+", num2, "=", add(num1, num2))

        elif choice == '2':
            print(num1, "-", num2, "=", subtract(num1, num2))

        elif choice == '3':
            print(num1, "*", num2, "=", multiply(num1, num2))

        elif choice == '4':
            print(num1, "/", num2, "=", divide(num1, num2))
        
        #Multiple time using calculator
        
        next_calculation = input("Do You Want To Slove More Problems (y/n): ")
        if next_calculation == "n":
          break
    
    else:
        print("Your Input is Worng pls select option between 1-4")

#:-Program End

Work Output:-

![output](https://user-images.githubusercontent.com/116277328/197393203-d37d7579-7869-42f4-9b45-4b38ac1e65c2.png)

