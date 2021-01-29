#!/usr/bin/env python
import numpy as np
import sys

def main():
    
    # the array integers refer to the length of cubes in initial state
    
    stack1 = range(1, int(sys.argv[1]) + 1)
    stack2 = []
    stack3 = []
    global Game
    Game = np.array([stack1, stack2, stack3])
    print("Initial Game State: \n")
    print("Stack1: %s \nStack2: %s \nStack3: %s \n" %
          (Game[0], Game[1], Game[2]))
    
    solve(Game)

def moveCube(source, target):
    target.append(source[-1])
    del source[-1]
    print("Stack1: %s \nStack2: %s \nStack3: %s \n" %
          (Game[0], Game[1], Game[2]))

    
def move (n, source, target, auxiliary):
    if n == 1:
        moveCube(source, target)
    else:
        # print(n) # print out recursion depth
        move(n-1, source, auxiliary, target)
        moveCube(source, target)
        move(n-1, auxiliary, target, source)
        

def solve(Game):
    move(len(Game[0]), Game[0], Game[2], Game[1])
    print("Initial Game State: \n")
    print("Stack1: %s \nStack2: %s \nStack3: %s \n" %
          (Game[0], Game[1], Game[2]))

    
if __name__ == "__main__":
    main()
