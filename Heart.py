#Daniel Oliveira
#Feb 24th, 2022
#Description: This code draws a heart on the screen.

import pygame
pygame.init()
import math
PI=math.pi

#size of screen - how wide, how high?...
size=(700,500)
screen=pygame.display.set_mode(size)

#title of window...
pygame.display.set_caption("Daniel Oliveira's Popup window...")

#define some colours...
BLACK = (0,0,0)
WHITE = (255,255,255)
PINK = (255,170,203)
RED = (255,0,0)
GREEN = (0,255,0)
BLUE = (0,0,255)

#loop this game until this variable is true to end the game...
done=False

#refresh rate or clock tick...
clock=pygame.time.Clock()

while not done:
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            print("User asked to quit")
            done=True

        elif event.type==pygame.KEYUP:
            print("User let go of a key")

        elif event.type==pygame.KEYDOWN:
            print("User pressed a key")

        elif event.type==pygame.MOUSEBUTTONDOWN:
            print("User pressed mouse button")

    #game logic would go here...


    #clear the screen to white before add objects in...
    screen.fill(PINK)

    #drawing of objects goes here...
    pygame.draw.line(screen,RED,[100,200],[350,475],2)
    pygame.draw.line(screen,RED,[600,200],[350,475],2)

    pygame.draw.arc(screen,RED,[350,100,250,200], PI/2, PI,2)
    pygame.draw.arc(screen,RED,[100,100,250,200], 0, PI/2,2)
    pygame.draw.arc(screen,RED,[100,100,250,200], PI/2, PI,2)
    pygame.draw.arc(screen,RED,[350,100,250,200], 0, PI/2,2)

    #turn on the screen by using a method called flip...
    pygame.display.flip()

    #screen refresh rate - how often???
    clock.tick(60)

#close the game
pygame.quit()
