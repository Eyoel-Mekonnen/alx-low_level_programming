#!/usr/bin/python3

def island_perimeter(grid):
    """method that calculates the perimeter of island"""
    perimeter = 0

    for row in range(0, len(grid)):
        for col in range (len(grid[row])):
            if (grid[row][col] == 1):
                p_s = 4
                if (grid[row][col - 1] == 1):
                    p_s = p_s - 1
                if (grid[row][col + 1] == 1):
                    p_s = p_s - 1
                if (grid[row -1][col] == 1):
                    p_s = p_s - 1
                if (grid[row + 1][col] == 1):
                    p_s = p_s - 1
                perimeter = perimeter + p_s
                
    return (perimeter)
