#include <raylib.h>
#include "grid.hpp"

void Grid::Draw()
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns; col++)
        {
            Color color = cells[row][col] ? Color{255,255,0,255} : Color{55,55,55,255};
            DrawRectangle(col*cellSize,row*cellSize,cellSize-1,cellSize-1,color);
        }
    }
}

void Grid::FillRandom()
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns; col++)
        {
            int randomValue = GetRandomValue(0,4);
            cells[row][col]= (randomValue == 4 ? 1:0);
        }
    }
}

void Grid::Clear()
{
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < columns; col++)
        {
            cells[row][col]= 0;
        }
    }
}

void Grid::SetValue(int p_row, int p_col, int p_value)
{
    if(isWithinBounds(p_row, p_col)){
        cells[p_row][p_col] = p_value;
    }
}

void Grid::ToggleCell(int p_row, int p_col)
{
    if(isWithinBounds(p_row,p_col)){ cells[p_row][p_col] = !cells[p_row][p_col]; }
}

int Grid::GetValue(int p_row, int p_col)
{
    if(isWithinBounds(p_row,p_col)){
        return cells[p_row][p_col];
    }
    return 0;
}

int Grid::GetRows()
{
    return rows;
}

int Grid::GetCols()
{
    return columns;
}

bool Grid::isWithinBounds(int p_row, int p_col)
{
    if(p_row>= 0 && p_row < rows && p_col>=0 && p_col < columns){ return true; }
    return false;
}
