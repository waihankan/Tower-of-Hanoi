#!usr/bin/env python

import numpy as np
import sys

class Stack():
    def __init__(self, num):
        self.num = num    
        self.stack0 = np.arange(1, num+1, dtype = int)
        self.stack1 = np.array([])
        self.stack2 = np.array([])

    def __str__(self):
        return "stack[0] = %s \nstack[1] = %s \nstack[2] = %s \n"%(self.stack0, self.stack1, self.stack2)

    def remove_top(self, index):
        if index == 0:
            last_element = self.stack0[-1]
            self.stack0 = self.stack0[:-1]
            return self.stack0, last_element
        else:
            pass
def main():
    stack = Stack(5)
    print(stack)
    stack.remove_top(0)
    print(stack)

def move_cube(index1, index2):
    index2 = np.append(index2, index1[-1])
    index1 = index1[:-1]
    return index1, index2


if __name__ == "__main__":
    main()

