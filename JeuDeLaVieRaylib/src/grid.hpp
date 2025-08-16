#pragma once
#include <vector>

class Grid
{
private:
    int rows;
    int columns;
    int cellSize;
    std::vector<std::vector<int>> cells;
public:
    Grid(int p_width, int p_height, int p_cellSize)
        :rows(p_height/p_cellSize), columns(p_width/p_cellSize), cellSize(p_cellSize), cells(rows, std::vector<int>(columns,0)){};
    
    void Draw();
    void FillRandom();
    void Clear();
    
    void SetValue(int p_row,int p_column, int p_value);
    void ToggleCell(int p_row, int p_col);
    
    int GetValue(int p_row, int p_col);
    int GetRows();
    int GetCols();

    bool isWithinBounds(int p_row, int p_col);
};
