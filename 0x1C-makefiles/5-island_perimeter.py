#!/usr/bin/python3
"""
Function to calculate the perimeter of an island.
"""


def island_perimeter(grid):
    """Calculate the perimeter of an island.
    The grid represents water using 0 and land using 1.
    Args:
        grid (list): A list of lists of integers representing the island 
    Returns:
        The perimeter of the island defined in the grid.
    """

    width = len(grid[0])
    height = len(grid)
    boundary_edges = 0
    island_size  = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                island_size  += 1
                # checking for boundery or a lake
                if (j > 0 and grid[i][j - 1] == 1):
                    boundary_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    boundary_edges += 1
    return island_size  * 4 - boundary_edges * 2

