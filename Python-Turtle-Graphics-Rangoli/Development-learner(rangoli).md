#My first Python Turtle Project
#Development-learner
#Rangoli Theme

#/*Code Start*/

import turtle
t=turtle.Turtle()
wn=turtle.Screen()
wn.bgcolor('black')
col=('violet','gold','red','cyan')
t.speed(0)
for i in range(60):
    t.pencolor(col[i%4])
    t.width(2)
    t.forward(i)
    t.circle(90,steps=5)
    t.forward(i)
    t.right(45)
t.hideturtle()
turtle.done()

#/*Code End*/


Final Result :- 

![Screenshot](https://user-images.githubusercontent.com/116277328/197392253-38de8e1e-f4cc-47a8-b5b4-233d9efa24d8.png)


