#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """
        Returns the perimeter of the island surrounded by water and described
        in grid. The Land is represented by 1 and the water is by 0.
        Aguments:
            - grid: A matrix filled with 0, 1 representing a map.
    """
    water = 0
    land = 1
    perimeter = 0

    for y, lev in enumerate(grid):
        for x, par in enumerate(lev):
            if par == land:
                if x == 0 or grid[y][x - 1] == water:
                    perimeter += 1
                if x + 1 == len(lev) or grid[y][x + 1] == water:
                    perimeter += 1
                if y == 0 or grid[y - 1][x] == water:
                    perimeter += 1
                if y + 1 == len(grid) or grid[y + 1][x] == water:
                    perimeter += 1

    return perimeter
