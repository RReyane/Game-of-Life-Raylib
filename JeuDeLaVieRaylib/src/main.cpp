#include <raylib.h>
#include "simulation.hpp"

int main() 
{
    const Color darkGreen = {11, 44, 4, 255};
    
    const int WINDOW_WIDTH = 800;
    const int WINDOW_HEIGHT = 800;
    const int CELL_SIZE = 10;
    int FPS = 15;
    
    
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Le jeu de la vie");
    SetTargetFPS(FPS);

    Simulation sim{WINDOW_WIDTH, WINDOW_HEIGHT, CELL_SIZE};
    
    while (!WindowShouldClose())
    {
        //Events
        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT))
        {
            Vector2 mousePosition = GetMousePosition();
            int row = mousePosition.y / CELL_SIZE;
            int col = mousePosition.x / CELL_SIZE;

            sim.ToggleCell(row,col);
        }
        

        if(IsKeyPressed(KEY_ENTER)){
            sim.Start();
            SetWindowTitle("Le jeu de la vie fait sa vie ...");
        }
        else if (IsKeyPressed(KEY_SPACE))
        {
            sim.Stop();
            SetWindowTitle("Le jeu de la vie a fini sa vie ...");
        }
        else if (IsKeyPressed(KEY_J)){
            FPS += 2;
            SetTargetFPS(FPS);
        }
        else if(IsKeyPressed(KEY_K))
        {
            if(FPS > 5){
                FPS -= 2;
                SetTargetFPS(FPS);
            }
        }
        else if(IsKeyPressed(KEY_R)){ sim.CreateRandomState(); }
        else if(IsKeyPressed(KEY_T)){ sim.ClearGrid(); }

        //Updates
        sim.Update();

        //Drawings
        BeginDrawing();
        ClearBackground(darkGreen);
        
        sim.Draw();

        EndDrawing();
    }
    
    CloseWindow();
}