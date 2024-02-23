#!/usr/bin/python3

def island_perimeter(grid):
    result = 0
    row = len(grid)
    col = len(grid[0])
    if row > 100 or col > 100:
        return ("{}".format(result))
    for i in range(row):
        for j in range(col):
            cell = 4
            if grid[i][j] == 1:
                result += cell
                if grid[i - 1][j] == 1:
                    result -= 2
                if grid[i][j - 1] == 1:
                    result -= 2
    return ("{}".format(result))
