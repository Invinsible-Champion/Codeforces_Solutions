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

   /*
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
*/
//test case 2
maze[0][0].walls = 2;  // East wall
maze[0][1].walls = 8;  // West wall
maze[0][2].walls = 2;  // East wall
maze[0][3].walls = 10; // East + West walls
maze[0][4].walls = 2;  // East wall
maze[0][5].walls = 4;  // South wall
maze[0][6].walls = 6;  // South + East walls
maze[0][7].walls = 4;  // South wall

maze[1][0].walls = 5;  // North + South walls
maze[1][1].walls = 0;  // No walls
maze[1][2].walls = 3;  // North + East walls
maze[1][3].walls = 9;  // North + West walls
maze[1][4].walls = 4;  // South wall
maze[1][5].walls = 8;  // West wall
maze[1][6].walls = 6;  // South + East walls
maze[1][7].walls = 4;  // South wall

maze[2][0].walls = 9;  // North + West walls
maze[2][1].walls = 12; // South + West walls
maze[2][2].walls = 0;  // No walls
maze[2][3].walls = 3;  // North + East walls
maze[2][4].walls = 14; // South + East + West walls
maze[2][5].walls = 10; // East + West walls
maze[2][6].walls = 4;  // South wall
maze[2][7].walls = 0;  // No walls

maze[3][0].walls = 1;  // North wall
maze[3][1].walls = 5;  // North + South walls
maze[3][2].walls = 0;  // No walls
maze[3][3].walls = 4;  // South wall
maze[3][4].walls = 8;  // West wall
maze[3][5].walls = 3;  // North + East walls
maze[3][6].walls = 12; // South + West walls
maze[3][7].walls = 8;  // West wall

maze[4][0].walls = 2;  // East wall
maze[4][1].walls = 4;  // South wall
maze[4][2].walls = 6;  // South + East walls
maze[4][3].walls = 8;  // West wall
maze[4][4].walls = 0;  // No walls
maze[4][5].walls = 2;  // East wall
maze[4][6].walls = 14; // South + East + West walls
maze[4][7].walls = 4;  // South wall

maze[5][0].walls = 9;  // North + West walls
maze[5][1].walls = 12; // South + West walls
maze[5][2].walls = 2;  // East wall
maze[5][3].walls = 0;  // No walls
maze[5][4].walls = 3;  // North + East walls
maze[5][5].walls = 9;  // North + West walls
maze[5][6].walls = 8;  // West wall
maze[5][7].walls = 4;  // South wall

maze[6][0].walls = 2;  // East wall
maze[6][1].walls = 0;  // No walls
maze[6][2].walls = 1;  // North wall
maze[6][3].walls = 0;  // No walls
maze[6][4].walls = 4;  // South wall
maze[6][5].walls = 8;  // West wall
maze[6][6].walls = 6;  // South + East walls
maze[6][7].walls = 4;  // South wall

maze[7][0].walls = 1;  // North wall
maze[7][1].walls = 3;  // North + East walls
maze[7][2].walls = 0;  // No walls
maze[7][3].walls = 9;  // North + West walls
maze[7][4].walls = 4;  // South wall
maze[7][5].walls = 8;  // West wall
maze[7][6].walls = 14; // South + East + West walls
maze[7][7].walls = 4;  // South wall

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
