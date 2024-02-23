#!/usr/bin/python3

def island_perimeter(grid):
    result = 0
    cell = 4
    for i in range(len(grid)):
        for j in range(len(grid)):
            if grid[i][j] == 1:
                result += cell
    return ("{}".format(result))
