import pygame
import sys
import random


class snake(object):
    def __init__(self) -> None:
        pass
    
    def turn(self):
        pass
    
    def move(self):
        pass
    
    def reset(self):
        pass
    
    def draw(self):
        pass
    
    def get_head_position(self):
        pass
    
    def handel_keys(self):
        pass
    
class fruit(object):
    def __init__(self):
        pass
    
    def random_location(self):
        pass

    def draw(self,surface):
        pass


SCREEN_WIDTH=480
SCREEN_HEIGHT=480

GRID_SIZE=20
GRID_WIDTH=SCREEN_WIDTH/GRID_SIZE
GRID_HEIGHT=SCREEN_HEIGHT/GRID_SIZE

UP=(0,-1)
DOWN=(0,1)
LEFT=(-1,0)
RIGHT=(1,0)

def draw_grid(surface):
    for i in range(0,int(GRID_HEIGHT)):
        for j in range(0,int(GRID_WIDTH)):
            if (i+j)%2==0 :
                r=pygmae.rect(r, phi)
def main():
    
    pygame.__init__()
    clock=pygame.time.clock()
    screen=pygame.display.setmode((SCREEN_HEIGHT,SCREEN_WIDTH),0,32)
    
    surface=pygame.Surface(screen.get_size())
    surface=surface.convert()

main()
