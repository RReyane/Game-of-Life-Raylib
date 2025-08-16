#pragma once
#include "grid.hpp"

class Simulation
{
private:
    Grid grid;
    Grid tempGrid;
    bool run;
public:
    Simulation(int p_width, int p_height, int p_cellSize)
    :grid(p_width,p_height,p_cellSize), tempGrid(p_width,p_height,p_cellSize), run(false) {grid.FillRandom();};
    void Draw();
    void SetCellValue(int p_row, int p_col, int p_value);
    int CountLiveNeighbors(int p_row, int p_col);
    void Update();
    bool IsRunning() {return run;}
    void Start() {run = true;}
    void Stop() {run = false;}
    void ClearGrid();
    void CreateRandomState();
    void ToggleCell(int p_row, int p_col);
};