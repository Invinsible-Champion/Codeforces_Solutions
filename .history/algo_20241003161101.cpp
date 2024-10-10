//Algorithm Implementation : Flood Fill -> Modified Flood Fill(Target)

#include <bits/stdc++.h>


using namespace std;

struct cell{
    int walls=0; // north wall=>1 south wall=>4  east wall=>2 west wall=>8
                // so,if walls=1 (north) if wall=5(north +south) .....

    int fc=-1; 
    int xc=-1;
    int yc=-1;
};
//Move Definitions 

int right_turn(int direction){
    if(direction==2) return 4;
    else if(direction==4) return 3;
    else if(direction==3) return 1;
    else return 2;
    return 0;  

}
int left_turn(int direction){
    if(direction==2) return 1;
    else if(direction==4) return 2;
    else if(direction==3) return 4;
    else return 3;
    return 0;  

}
/*
int forward_mov(int direction){


}*/
vector<vector<int>> adjacent_cell(int i,int j){
    vector<vector<int>> adj_data;
    if(i>0 && i<7 && j>0 && j<7){
        //Needs a minor improvement in pushing back all elements at once
        adj_data.push_back({i-1,j});
        adj_data.push_back({i+1,j});
        adj_data.push_back({i,j+1});
        adj_data.push_back({i,j-1});
    }
    if((i==0 || i==7) && (j>=1 && j <=6)){
        //Needs a minor improvement in pushing back all elements at once
        //adj_data.push_back({i-1,j});
        adj_data.push_back({i+1,j});
        adj_data.push_back({i,j+1});
        adj_data.push_back({i,j-1});
    }



}

vector<int> flood_maze(cell maze[8][8]){
    queue<int> q;
    //0 filled cell
    maze[7][6].fc = 0;
    q.push(maze[7][6].fc);
    while(q.empty()){

    }





}

