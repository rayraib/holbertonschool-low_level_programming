#!/usr/bin/python3
'''
    return perimeter of an island
'''


def island_perimeter(grid):
    '''
        Return the perimeter of the island described in grid
    '''
    perimeter = 0
    p_list = []
    for row in grid:
        c_list = []
        for idx, el in enumerate(row):
            if el == 1:
                if perimeter == 0:
                    perimeter = 4
                else:
                    perimeter += 4
                    if compare_idx == idx:
                        perimeter -= 2
                    if idx in p_list:
                        perimeter -= 2
                c_list.append(idx)
                compare_idx = idx + 1
        p_list = c_list
    return perimeter
