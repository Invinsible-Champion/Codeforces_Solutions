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
vector<vector<int>> adjacent_cell(cell maze[8][8],int i,int j){
    vector<vector<int>> adj_data;
    int x = maze[i][j].walls;

    if(i>0 && i<7 && j>0 && j<7){
        if(x==1) adj_data.insert(adj_data.end(), {{i-1, j}, {i+1, j}, {i, j+1}});
        else if(x==3) adj_data.insert(adj_data.end(), {{i-1, j}, {i, j+1}});
        else if(x==5) adj_data.insert(adj_data.end(), {{i-1, j}, {i+1, j}});
        else if(x==9) adj_data.insert(adj_data.end(), {{i+1, j}, {i, j+1}});
        else if(x==2) adj_data.insert(adj_data.end(), {{i-1, j}, {i, j+1}, {i, j-1}});
        else if(x==6) adj_data.insert(adj_data.end(), {{i-1, j},{i, j-1}});
        else if(x==10) adj_data.insert(adj_data.end(), {{i, j+1}, {i, j-1}});//
        else if(x==4) adj_data.insert(adj_data.end(), {{i-1, j}, {i+1, j}, {i, j-1}});//
        else if(x==12) adj_data.insert(adj_data.end(), { {i+1, j},{i, j-1}});//
        else if(x==8) adj_data.insert(adj_data.end(), { {i+1, j}, {i, j+1}, {i, j-1}});//
        else if(x==7) adj_data.insert(adj_data.end(), {{i-1, j}});//
        else if(x==11) adj_data.insert(adj_data.end(), {{i, j+1}});//
        else if(x==13) adj_data.insert(adj_data.end(), { {i+1, j}});//
        else if(x==14) adj_data.insert(adj_data.end(), {{i, j-1}});//
        else adj_data.insert(adj_data.end(), {{i-1, j}, {i+1, j}, {i, j+1}, {i, j-1}});//

    }
    else if((i==0 || i==7) && (j>=1 && j <=6)){
        if(x==9) adj_data.insert(adj_data.end(), {{i+1,j}, {i,j+1}});
        else if(x==10) adj_data.insert(adj_data.end(), { {i,j+1}, {i,j-1}});
        else if(x==12) adj_data.insert(adj_data.end(), {{i+1,j}, {i,j-1}});
        else if(x==11)  adj_data.insert(adj_data.end(), {{i,j+1}});
        else if(x==13)  adj_data.insert(adj_data.end(), {{i+1,j}});
        else if(x==14)  adj_data.insert(adj_data.end(), {{i,j-1}});
        else  adj_data.insert(adj_data.end(), {{i+1,j}, {i,j+1}, {i,j-1}});

        
    }
    else{
        if(i==0) {
            if(j==0) {              
                        if(x==11)  adj_data.insert(adj_data.end(), {{i,j+1}});
                        else if(x==13)  adj_data.insert(adj_data.end(), {{i+1,j}});
                        else  adj_data.insert(adj_data.end(), {{i+1,j}, {i,j+1}});
            }
            else{
                        if(x==14)  adj_data.insert(adj_data.end(), {{i,j-1}});
                        else if(x==13)  adj_data.insert(adj_data.end(), {{i+1,j}});
                        else  adj_data.insert(adj_data.end(), {{i+1,j}, {i,j-1}});

            }
        }
        else{
            if(j==0) {              
                        if(x==11)  adj_data.insert(adj_data.end(), {{i,j+1}});
                        else if(x==7)  adj_data.insert(adj_data.end(), {{i-1,j}});
                        else  adj_data.insert(adj_data.end(), {{i-1,j}, {i,j+1}});
            }
            else{
                        if(x==14)  adj_data.insert(adj_data.end(), {{i,j-1}});
                        else if(x==7)  adj_data.insert(adj_data.end(), {{i-1,j}});
                        else  adj_data.insert(adj_data.end(), {{i-1,j}, {i,j-1}});

            }

        }
    }
    return adj_data;


}

vector<int> flood_maze(cell maze[8][8]){
    for (int  i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            maze[i][j].xc = i;
            maze[i][j].yc = j;
        }
        
    }

    
    queue<cell> q;
    //0 filled cell
    maze[7][6].fc = 0;
    int cnt =0 ;

    q.push(maze[7][6]);
    while(!q.empty()){
        int i = q.front().xc;
        int j= q.front().yc;
        cnt++;
        vector<vector<int>> cell_data(adjacent_cell(maze,i,j));
        for (int l = 0; l < cell_data.size(); i++)
        {
            maze[cell_data[l][0]][cell_data[l][1]].fc = cnt;

        }
        q.pop();
           
        



    }





}

int main(){

    return 0;
}