#!/usr/bin/python3
"""Calculate the perimeter of an island grid"""


def island_perimeter(grid):
    """Calculate the perimeter of the island described in grid.

    Args:
        grid (list): The grid representation of the island.
    """
    rows, cols = len(grid), len(grid[0])
    land_cells,neighboring_land = 0, 0
    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                land_cells += 1
                if r < rows - 1 and grid[r+1][c] == 1:
                    neighboring_land += 1
                if c < cols - 1 and grid[r][c + 1] == 1:
                    neighboring_land += 1
    return land_cells * 4 - 2 *neighboring_land
