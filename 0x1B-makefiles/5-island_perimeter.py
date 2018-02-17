#!/usr/bin/python3
'''
    return perimeter of an island
'''


def island_perimeter(grid):
    '''
        Return the perimeter of the island described in grid
    '''
    first_flag = 0
    perimeter = 0
    p_list = []
    c_list = []
    for row in grid:
        for idx, el in enumerate(row):
            if el == 1:
                if first_flag == 0:
                    perimeter = 4
                    first_flag = 1
                else:
                    if compare_idx == idx:
                        perimeter += 2
                    if idx in p_list:
                        perimeter += 2
                c_list.append(idx)
                compare_idx = idx + 1
        p_list = c_list
        c_list = []
    return perimeter
