/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v03.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrudowic <lrudowic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/17 15:34:54 by lrudowic          #+#    #+#             */
/*   Updated: 2020/08/17 17:27:06 by lrudowic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "v03.h"

void printblock(const char *b, int size)
{
    //This function loops through the Block, printing each Character.
    //It Creates a linebreak according to the size of the block
    int i;
    for (i = 0; i < (size * size); i++)
    {
        if ((i % size) == 0)
            printf("\n");
        printf(" %d ", b[i]);
    }
    printf("\n");
}

int get_neighbours(const char *block, int px, int py, int size)
{
    int r, c, a = 0;
    //Check Surroundings on X
    for (r = px - 1; r <= (px + 1); r++)
    {
        //Check Surroundings on Y
        for (c = py - 1; c <= (py + 1); c++)
        {
            if ((r == px) && (c == py))
                continue;
            if ((c < size) && (r < size) && (r >= 0) && (c >= 0))
                a += block[size * r + c];
        }
    }
    return a;
}

void gen_heatmap(const char *block, char *res_block, int size)
{
    int r, c;
    for (r = 0; r < size; r++)
    {
        for (c = 0; c < size; c++)
        {
            res_block[size * r + c] = get_neighbours(block, r, c, size);
        }
    }
}

void gen_nextgen(const char *block, char *res_block, int size)
{
    int r, c, heat;
    for (r = 0; r < size; r++)
    {
        for (c = 0; c < size; c++)
        {
            heat = get_neighbours(block, r, c, size);
            //Check if the cell is currently alive
            if (block[size * r + c] == 1)
            {
                if (heat == 2 || heat == 3) //Stays alive
                {
                    res_block[size * r + c] = 1;
                }
                else //Dies
                {
                    res_block[size * r + c] = 0;
                }
            }
            else //Cell currently dead
            {
                if (heat == 3) //Gets born
                {
                    res_block[size * r + c] = 1;
                }
                else //Stays dead
                {
                    res_block[size * r + c] = 0;
                }
            }
        }
    }
}

int main(int ac, char **av)
{
    char block[] = {
        0, 1, 0, 0,
        0, 1, 0, 0,
        0, 1, 0, 0,
        0, 0, 0, 0};

    //Get the Dimensions of the Initial Array
    int blocksize = (int)sqrt(sizeof(block));
    //Create Result array
    char res_block[blocksize * blocksize];

    printblock(block, blocksize);
    gen_nextgen(block, res_block, blocksize);
    printblock(res_block, blocksize);
}