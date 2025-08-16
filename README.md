# 🟨 Jeu de la Vie (Conway's Game of Life)

Une implémentation du **Jeu de la Vie** de John Conway, réalisée en **C++ avec Raylib** en une journée.  

## 🎮 Fonctionnalités

- Grille interactive où chaque cellule peut être **vivante** (jaune) ou **morte** (gris foncé).  
- Les règles classiques du jeu de la vie sont implémentées :  
  - Une cellule vivante avec moins de 2 ou plus de 3 voisines vivantes meurt.  
  - Une cellule morte avec exactement 3 voisines vivantes devient vivante.  
- Grille torique (*les bords se rejoignent*).
- Contrôles simples pour interagir et manipuler la simulation.  

## ⌨️ Contrôles

- **Clic gauche** : inverser l’état d’une cellule.  
- **Entrée** : démarrer la simulation.  
- **Espace** : arrêter la simulation.  
- **J** : accélérer la simulation (+2 FPS).  
- **K** : ralentir la simulation (-2 FPS, minimum 5 FPS).  
- **R** : remplir la grille aléatoirement.  
- **T** : vider complètement la grille.  

## 📸 Aperçu

![Aperçu du jeu](ConwayGameOfLifeRaylib.gif)

## 🛠️ Structure du projet

- `main.cpp` → Point d’entrée, gestion des événements et de la boucle principale.  
- `simulation.hpp / simulation.cpp` → Gestion des règles du jeu et de l’évolution de la grille.  
- `grid.hpp / grid.cpp` → Gestion de la grille (affichage, interactions, cellules).  

---

Projet développé rapidement pour expérimenter **Raylib** et s’amuser avec un classique intemporel de la programmation !

---
---

# 🟨 Game of Life (Conway's Game of Life)

An implementation of **Conway's Game of Life**, developed in **C++ with Raylib** in a single day.  

## 🎮 Features

- Interactive grid where each cell can be **alive** (yellow) or **dead** (dark gray).  
- Classic Game of Life rules are implemented:  
  - A live cell with fewer than 2 or more than 3 live neighbors dies.  
  - A dead cell with exactly 3 live neighbors becomes alive.  
- Toroidal grid (*edges wrap around*).  
- Simple controls to interact with and manipulate the simulation.  

## ⌨️ Controls

- **Left click**: toggle the state of a cell.  
- **Enter**: start the simulation.  
- **Space**: stop the simulation.  
- **J**: speed up the simulation (+2 FPS).  
- **K**: slow down the simulation (-2 FPS, minimum 5 FPS).  
- **R**: fill the grid randomly.  
- **T**: completely clear the grid.  

## 📸 Preview

![Game Preview](ConwayGameOfLifeRaylib.gif)

## 🛠️ Project Structure

- `main.cpp` → Entry point, event handling and main loop.  
- `simulation.hpp / simulation.cpp` → Handles the rules of the game and grid evolution.  
- `grid.hpp / grid.cpp` → Manages the grid (rendering, interactions, cell states).  

---

Project quickly developed to experiment with **Raylib** and have fun with a timeless programming classic!

