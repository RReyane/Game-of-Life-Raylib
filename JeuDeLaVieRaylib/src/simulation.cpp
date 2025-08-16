#include "simulation.hpp"

void Simulation::Draw(){
    grid.Draw();
}

void Simulation::SetCellValue(int p_row, int p_col, int p_value){
 grid.SetValue(p_row,p_col,p_value);
}

int Simulation::CountLiveNeighbors(int p_row, int p_col){
    int liveNeighbors = 0;
    std::vector<std::pair<int,int>> neighborOffsets = {
        {-1, 0}, // above
        {1, 0},  // below
        {0, -1}, // left
        {0, 1},  // right
        {-1, -1},// upper left
        {-1, 1}, // upper right
        {1, -1}, // lower left
        {1, 1}   // lower right
    };

    for (const auto& offset: neighborOffsets){
        int neighborRow = (p_row + offset.first + grid.GetRows()) % grid.GetRows();
        int neighborColumn = (p_col + offset.second + grid.GetCols()) % grid.GetCols();
        liveNeighbors += grid.GetValue(neighborRow, neighborColumn);
    }
    return liveNeighbors;
    
    
}

void Simulation::Update(){
    if(!IsRunning()) return;
    for (int row = 0; row < grid.GetRows(); row++)
    {
        for (int col = 0; col < grid.GetCols(); col++)
        {
            int liveNeighbors = CountLiveNeighbors(row,col);
            int cellValue = grid.GetValue(row,col);

            if(cellValue == 1){
                if(liveNeighbors > 3 || liveNeighbors < 2){ tempGrid.SetValue(row,col,0); }
                else { tempGrid.SetValue(row,col,1); }
            }
            else{
                if(liveNeighbors == 3){ tempGrid.SetValue(row,col,1);}
                else {tempGrid.SetValue(row,col,0);}
            }
        }
    }
    grid = tempGrid;
}

void Simulation::ClearGrid()
{
    if (!IsRunning()) { grid.Clear(); }
}

void Simulation::CreateRandomState()
{
    if(!IsRunning()){
        grid.FillRandom();
    }
}

void Simulation::ToggleCell(int p_row, int p_col){
    if(!IsRunning()){ grid.ToggleCell(p_row,p_col); }
}
