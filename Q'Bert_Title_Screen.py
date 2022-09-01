#Daniel Oliveira
#Feb 16th, 2022
#Description: This is a drawing of the retro game Q*bert.

#import pygame & math,pi
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
DARKGREEN = (69,139,0)
BLUE = (0,55,225)
LIGHTBLUE = (0,238,238)
VERYLIGHTBLUE = (0,255,255)
DARKBLUE = (16,78,139)
ORANGE = (255,97,3)
PURPLE = (72,61,139)
YELLOW = (255,211,0)

#loop this variable until this varibale turns true to end the game
done=False

#refresh rate
clock=pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            done=True

    #fills the screen black
    screen.fill(BLACK)

#drawings
    #text
    font=pygame.font.SysFont("ITC Zapf Dingbats",75,True,False)
    text=font.render("Q*bert",True,GREEN)
    screen.blit(text,[40,40])

    font=pygame.font.SysFont("Cooper Black",28,True,False)
    text=font.render("CHANGE TO:",True,ORANGE)
    screen.blit(text,[35,105])

    font=pygame.font.SysFont("Cooper Black",40,True,False)
    text=font.render("CREDITS",True,PURPLE)
    screen.blit(text,[600,50])

    font=pygame.font.SysFont("Cooper Black",40,True,False)
    text=font.render("0",True,ORANGE)
    screen.blit(text,[720,80])

    #drawing of cubes
        #function for drawing the cube
    def cube(x,y):
        pygame.draw.polygon(screen,BLUE,[[x+155,y+487],[x+115,y+517],[x+155,y+547],[x+195,y+517]],0)
        pygame.draw.polygon(screen,LIGHTBLUE,[[x+115,y+517],[x+115,y+574],[x+155,y+597],[x+155,y+547]],0)
        pygame.draw.polygon(screen,DARKBLUE,[[x+155,y+547],[x+155,y+597],[x+195,y+574],[x+195,y+517]],0)

    #top row
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
    #bottom row
    for x in range(7):
        cube(0+x*80,0)

    #drawing of the green tops of the cubes
        #function for drawing the green tops
    def green_top(x,y):
        pygame.draw.polygon(screen,LIMEGREEN,[[x+155,y+487],[x+115,y+517],[x+155,y+547],[x+195,y+517]],0)

    for x in range(7):
        green_top(40*x,-75*x)

    for x in range(4):
        green_top(160+40*x,-150-75*x)

    for x in range(2):
        green_top(200+40*x,-75-75*x)

    green_top(280,-75)

    #drawing of Q*bert
    pygame.draw.circle(screen,ORANGE,[398,35],18)
    pygame.draw.circle(screen,WHITE,[388,30],7)
    pygame.draw.circle(screen,WHITE,[401,30],7)
    pygame.draw.circle(screen,BLACK,[387,33],5)
    pygame.draw.circle(screen,BLACK,[400,33],5)
    pygame.draw.line(screen,ORANGE,[390,50],[390,72],3)
    pygame.draw.line(screen,ORANGE,[404,50],[404,72],3)
    pygame.draw.line(screen,ORANGE,[390,72],[383,75],3)
    pygame.draw.line(screen,ORANGE,[404,72],[397,75],3)
    pygame.draw.rect(screen,ORANGE,[370,37,20,12],0)
    pygame.draw.circle(screen,BLACK,[374,44],6)

    #drawing of purple ball
    pygame.draw.circle(screen,PURPLE,[350,120],20)
    pygame.draw.circle(screen,WHITE,[343,113],5)

    #drawing of the small cube under "CHANGE TO:"
    y=35 #variables used to change the height and width of the cube
    x=10
    pygame.draw.polygon(screen,LIMEGREEN,[[105,137+x],[65+x,167],[105,197-x],[145-x,167]],0)
    pygame.draw.polygon(screen,LIGHTBLUE,[[65+x,167],[65+x,224-y],[105,247-y-x/2],[105,197-x]],0)
    pygame.draw.polygon(screen,DARKBLUE,[[105,197-x],[105,247-y-x/2],[145-x,224-y],[145-x,167]],0)

    #drawing of colourful circle on the right side of the screen
    pygame.draw.circle(screen,LIGHTBLUE,[600,310],18)
    pygame.draw.polygon(screen,BLUE,[[600,310],[600,290],[620,310]],0)
    pygame.draw.polygon(screen,YELLOW,[[600,310],[600,330],[620,310]],0)
    pygame.draw.polygon(screen,DARKGREEN,[[600,310],[600,330],[580,310]],0)
    pygame.draw.polygon(screen,RED,[[600,310],[600,290],[580,310]],0)


    #displays all objects
    pygame.display.flip()

    #refresh rate
    clock.tick(60)
#close the game 
pygame.quit()
