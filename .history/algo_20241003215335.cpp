#include <bits/stdc++.h>

using namespace std;

struct cell {
    int walls = 0; // north wall=>1, south wall=>4, east wall=>2, west wall=>8
    int fc = -1;   // Flood fill count, initialized to -1
    int xc = -1;   // X-coordinate
    int yc = -1;   // Y-coordinate
};
//God grace CHATGPT -- Brilliant use of Bitwise Operators

vector<vector<int>> adjacent_cell(cell (&maze)[8][8], int i, int j) {
    vector<vector<int>> adj_data;
    int x = maze[i][j].walls;

    if (i > 0 && !(x & 1)) adj_data.push_back({i - 1, j}); 
    if (i < 7 && !(x & 4)) adj_data.push_back({i + 1, j}); 
    if (j < 7 && !(x & 2)) adj_data.push_back({i, j + 1}); 
    if (j > 0 && !(x & 8)) adj_data.push_back({i, j - 1}); 

    return adj_data;
}

// Flood fill function
void fl(cell (&maze)[8][8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            maze[i][j].xc = i;
            maze[i][j].yc = j;
        }
    }

    queue<cell*> q;
    maze[7][6].fc = 0; // 0 fill
    q.push(&maze[7][6]);

    while (!q.empty()) {
        cell* current = q.front();
        q.pop();

        int i = current->xc;
        int j = current->yc;
        int current_count = maze[i][j].fc;

        vector<vector<int>> cell_data = adjacent_cell(maze, i, j);
        for (unsigned int  l = 0; l < cell_data.size(); l++) {
            int xi = cell_data[l][0]; 
            int yj = cell_data[l][1]; 

            if (maze[xi][yj].fc == -1) { 
                maze[xi][yj].fc = current_count + 1; 
                q.push(&maze[xi][yj]); 
            }
        }
    }
}

int main() {
    cell maze[8][8]; // 2D array of cells

   
    maze[0][0].walls = 2;
    maze[1][1].walls = 2;
    maze[2][1].walls = 2;
    maze[3][1].walls = 3;
    maze[3][0].walls = 1;

    maze[0][1].walls = 8;
    maze[1][2].walls = 8;
    maze[2][2].walls = 8;
    maze[3][1].walls = 4;
    maze[3][0].walls = 4;

    fl(maze); 

  
    for (int i = 7; i >= 0; i--) {
        for (int k = 0; k < 8; k++) {
            if (maze[i][k].fc < 10)
                cout << maze[i][k].fc << "   ";
            else
                cout << maze[i][k].fc << "  ";
        }
        cout << endl;
    }

    return 0;
}
