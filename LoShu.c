#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int SQUARE_SIZE = 3;

// Returns 1 if it's a Lo Shu Square, else returns 0
int isLoShu(int square[SQUARE_SIZE][SQUARE_SIZE])
{
    int containsNumber[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int currentNum;
    int r1 = 0, r2 = 0, r3 = 0, c1 = 0, c2 = 0, c3 = 0, d1 = 0, d2 = 0;

    for(int i = 0; i < SQUARE_SIZE; i++)
    {
        for(int j = 0; j < SQUARE_SIZE; j++)
        {
            currentNum = square[i][j];

            // Check if number is not in the range [1, 9]
            if(currentNum < 1 || currentNum > 9)
                return 0;
            
            // Check if the number is a duplicate
            if(containsNumber[currentNum - 1] == 1)
                return 0;
            else
                containsNumber[currentNum - 1] = 1;
        }
    }

    r1 = square[0][0] + square[0][1] + square[0][2];
    r2 = square[1][0] + square[1][1] + square[1][2];
    r3 = square[2][0] + square[2][1] + square[2][2];
    c1 = square[0][0] + square[1][0] + square[2][0];
    c2 = square[0][1] + square[1][1] + square[2][1];
    c3 = square[0][2] + square[1][2] + square[2][2];
    d1 = square[0][0] + square[1][1] + square[2][2];
    d2 = square[2][0] + square[1][1] + square[0][2];
    
    if(!((r1 == r2) && (r1 == r3) && (r1 == c1) && (r1 == c2) && (r1 == c3) && (r1 = d1) && (r1 == d2)))
        return 0;
    
    return 1;
}

int main()
{
    int square[3][3] = {{1, 1, 1}, 
                        {1, 1, 1}, 
                        {1, 1, 1}};
    printf("%d\n", isLoShu(square));
    return 0;
}