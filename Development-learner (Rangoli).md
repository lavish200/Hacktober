#python-Programming
#Development-Learner
#Rangoli

import turtle
turtle.speed(0)
turtle.bgcolor("black")
Alfred = turtle.Turtle()
Alfred.color("Gold")

Alfred.penup()
Alfred.goto(-75,-75)
Alfred.pendown()

#Picking up speed
for i in range(50):
    Alfred.speed(i+1)
    Alfred.forward(150)
    Alfred.left(85)

Alfred.penup()
Alfred.goto(-25,-25)
Alfred.pendown()
Alfred.setheading(0)

#Slowing down
for i in range(30):
    Alfred.speed(30-i)
    Alfred.forward(50)
    Alfred.left(85)

turtle.exitonclick()

![Screenshot ](https://user-images.githubusercontent.com/116277328/197396065-c583762f-9cba-4b11-aea1-915ddc6e16dc.png)

