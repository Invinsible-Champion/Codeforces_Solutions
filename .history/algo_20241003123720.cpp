//Algorithm Implementation : Flood Fill -> Modified Flood Fill(Target)

#include <bits/stdc++.h>
#include <queue>

using namespace std;

struct cell{
    int walls=0; // north wall=>1 south wall=>4  east wall=>2 west wall=>8
                // so,if walls=1 (north) if wall=5(north +south) .....

    int fc=-1; // is the number of steps required to get there from target
    int xc=-1;
    int yc=-1;
};


vector<int> flood_maze(cell maze[8][8]){
    queue q;
    

}

