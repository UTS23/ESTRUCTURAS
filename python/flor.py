from turtle import *
 
trazador (Falso) 
 
pensize(5)
 
begin_fill()
color("yellow")
 dot (100) 
(begin_fill ()),
right(90)
 
 fd (50) 
color("red")
circle(25,231)   
for i in range(6):
    right(180)
    circle(25,231)
 end_fill () 
 
 
color("black")
right(180)
 círculo (500,10) 
 
begin_fill()
color("green")
right(180)
circle(50,90)
left(90)
circle(50,90)
 end_fill () 
 
right(90)
color("black")
 círculo (500,10) 
 
begin_fill()
color("green")
left(90)
circle(50,90)
left(90)
circle(50,90)
 end_fill () 
 
 tracer (True) 
 
 
color("black")
 círculo (500,10) 
 
 hideturtle () 
 
penup()
goto(0,150)
 pendown () 
 
color("purple")
 s = input ("Introduzca el nombre de la persona que lo envió:")
 t = "Una flor para ti:" + s 
 write (t, align = "center", font = ("Times", 50, "bold")) 
 
 
mainloop()
