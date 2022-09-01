#print("Hello")
#myname=input("Who are you? ")
#print("Hello",myname)
#price=float(input("Price of can of pop? "))
#quantity=int(input("How much you want you? "))
#print("$",price*quantity)
# print("welcome to my pizzaria, what would you ike today?")
# print("Menu:")
# print("Cola: $1.75")
# print("Pizza slice: $5.00")
# print("Whole pizza: $250.00")
# choice=input(" ")
# if(choice=='Cola'):
#     quantity=int(input("How much you want you? "))
#     print("Your total is: $",quantity*1.75)
# elif(choice=='Cola'):
#     quantity=int(input("How much you want you? "))
#     print("Your total is: $",quantity*1.75)
# elif(choice=='Cola'):
#     quantity=int(input("How much you want you? "))
#     print("Your total is: $",quantity*1.75)

#Daniel Oliveira
#Feb 16th, 2022
#Description:
import pygame
pygame.init()
import math
PI=math.pi

#screen size
size=(800,600)
screen=pygame.display.set_mode(size)

#title of screen
pygame.display.set_caption("Daniel Oliveira's Q'Bert Title Screen")

#colours
BLACK = (0,0,0)
WHITE = (255,255,255)
PINK = (255,100,150)
RED = (255,0,0)
GREEN = (0,255,0)
LIMEGREEN = (0,245,0)
BLUE = (0,55,225)
LIGHTBLUE = (0,238,238)
VERYLIGHTBLUE = (0,255,255)
DARKBLUE = (16,78,139)
ORANGE = (255,97,3)
PURPLE = (72,61,139)

#loop this variable until this varibale turns true to end the game
done=False

#refresh rate
clock=pygame.time.Clock()

#X/Y change
x1=40
y1=75

#X coordinates
Xa=155
Xb=115
Xc=195

#Y coordinates
Yd=487
Ye=517
Yg=547
Yh=574
Yi=597

while not done:
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            done=True

    #fills the screen black
    screen.fill(BLACK)

    def cube(x,y):
        pygame.draw.polygon(screen,BLUE,[[x+155,y+487],[x+115,y+517],[x+155,y+547],[x+195,y+517]],0)
        pygame.draw.polygon(screen,LIGHTBLUE,[[x+115,y+517],[x+115,y+574],[x+155,y+597],[x+155,y+547]],0)
        pygame.draw.polygon(screen,DARKBLUE,[[x+155,y+547],[x+155,y+597],[x+195,y+574],[x+195,y+517]],0)

    for x in range(1):
        cube(240+x*80,-450)

    for x in range(2):
        cube(200+x*80,-375)

    for x in range(3):
        cube(160+x*80,-300)

    for x in range(4):
        cube(120+x*80,-225)

    for x in range(5):
        cube(80+x*80,-150)

    for x in range(6):
        cube(40+x*80,-75)

    for x in range(7):
        cube(0+x*80,0)

    pygame.display.flip()

    #refresh rate
    clock.tick(60)
#close the game
pygame.quit()


