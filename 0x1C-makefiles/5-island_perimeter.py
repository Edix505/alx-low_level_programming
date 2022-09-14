"""Module to define a function island_perimeter"""


def island_perimeter(grid):
    """Return the perimiter of an island.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for L in range(height):
        for W in range(width):
            if grid[L][W] == 1:
                size += 1
                if (W > 0 and grid[L][W - 1] == 1):
                    edges += 1
                if (L > 0 and grid[L - 1][W] == 1):
                    edges += 1
    return size * 4 - edges * 2
