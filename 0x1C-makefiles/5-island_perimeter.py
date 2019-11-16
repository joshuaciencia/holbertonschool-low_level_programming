#!/usr/bin/python3
"""
Module that contains island perimeter fun
"""


def island_perimeter(grid):
    """ returns the perimeter of the function
    """
    if not len(grid):
        return 0
    per = 0
    for r in range(len(grid)):
        for c in range(len(grid[r])):
            if grid[r][c] == 1:
                try:
                    if not grid[r][c - 1]:
                        per += 1
                    if not grid[r][c + 1]:
                        per += 1
                    if not grid[r - 1][c]:
                        per += 1
                    if not grid[r + 1][c]:
                        per += 1
                except IndexError:
                    pass 
    return per
