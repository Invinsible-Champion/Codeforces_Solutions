#include <bits/stdc++.h>

using namespace std;

struct cell {
    int walls = 0; // north wall=>1, south wall=>4, east wall=>2, west wall=>8
    int fc = -1;   // Flood fill count, initialized to -1
    int xc = -1;   // X-coordinate
    int yc = -1;   // Y-coordinate
};

// Function to find adjacent cells that are not blocked by walls
vector<vector<int>> adjacent_cell(cell (&maze)[8][8], int i, int j) {
    vector<vector<int>> adj_data;
    int x = maze[i][j].walls;

    if (i > 0 && !(x & 1)) adj_data.push_back({i - 1, j}); // No north wall
    if (i < 7 && !(x & 4)) adj_data.push_back({i + 1, j}); // No south wall
    if (j < 7 && !(x & 2)) adj_data.push_back({i, j + 1}); // No east wall
    if (j > 0 && !(x & 8)) adj_data.push_back({i, j - 1}); // No west wall

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
    maze[7][6].fc = 0; // Start filling from the target (7,6)
    q.push(&maze[7][6]);

    while (!q.empty()) {
        cell* curr = q.front();
        q.pop();

        int i = curr->xc;
        int j = curr->yc;
        int curr_count = maze[i][j].fc;

        vector<vector<int>> cell_data = adjacent_cell(maze, i, j);
        for (int l = 0; l < cell_data.size(); l++) {
            int ni = cell_data[l][0]; // Neighboring cell's x-coordinate
            int nj = cell_data[l][1]; // Neighboring cell's y-coordinate

            if (maze[ni][nj].fc == -1) { // If the cell hasn't been visited yet
                maze[ni][nj].fc = curr_count + 1; // Update flood fill count
                q.push(&maze[ni][nj]); // Add the neighboring cell to the queue
            }
        }
    }
}

int main() {
    cell maze[8][8]; // 2D array of cells

    // Initialize walls for some cells
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

    fl(maze); // Call flood fill function

    // Print the maze with flood fill counts
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
