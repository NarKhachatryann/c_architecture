#include <stdio.h>
#include <stddef.h>

#define B 1
#define F 0

int field[8][8] = {
    {F, F, F, F, B, F, F, F},
    {F, B, F, F, F, F, F, F},
    {F, B, B, F, F, F, B, B},
    {F, B, F, F, F, B, F, F},
    {F, F, B, B, F, F, F, F},
    {F, F, B, F, F, B, F, F},
    {F, B, F, F, B, F, F, F},
    {F, F, F, F, B, F, F, F},
};

void printfield(size_t rows, size_t cols, int field[cols][rows]) {
    for (size_t y = 0; y < rows; ++y) {
        for (size_t x = 0; x < cols; ++x) {
            if (field[y][x] == B) {
                putchar('*');
                continue;
            }
            
            int count = 0;
            
            // "can look" flags
            const int cl_above = (y != 0);
            const int cl_below = (y != rows - 1);
            const int cl_leftward = (x != 0);
            const int cl_rightward = (x != cols - 1);
            
            if (cl_above)
                count += field[y - 1][x];
            
            if (cl_above && cl_leftward)
                count += field[y - 1][x - 1];
            
            if (cl_above && cl_rightward)
                count += field[y - 1][x + 1];
            
            if (cl_leftward)
                count += field[y][x - 1];
            
            if (cl_rightward)
                count += field[y][x + 1];
            
            if (cl_below)
                count += field[y + 1][x];
            
            if (cl_below && cl_leftward)
                count += field[y + 1][x - 1];
            
            if (cl_below && cl_rightward)
                count += field[y + 1][x + 1];
            
            putchar(count + '0');
        }
        putchar('\n');
    }
}

int main(void) {
    printfield(8, 8, field);
    return 0;
}