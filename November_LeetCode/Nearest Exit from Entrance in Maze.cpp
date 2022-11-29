// class Solution {
// public:
//     int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
//         int m = maze[0].size(),n =  maze.size();
//         queue<pair<int,int>>q;
        
//         q.push({entrance[0], entrance[1]});
//         maze[entrance[0]][entrance[1]] = '+';
//         int level=0;
//         int dr[4]={1,-1,0,0};
//         int dc[4]={0,0,-1,1};
        
//         while(!q.empty())
//         {
//             int size=q.size();
//             level++;
//             for(int i=0;i<size;i++){
//                 auto x=q.front();
//                 q.pop();
//                 int row= x.first;
//                 int col= x.second;
//                 for(int j=0;j<4;j++)
//                 {
//                     int new_row=row+dr[j];
//                     int new_col=col+dc[j];
//                     if(new_row>0 && new_col >=0 && new_row<n && new_col<m)
//                     {
//                         if(maze[new_row][new_col] == '+')
//                         {
//                             continue;
//                         }
//                         if(new_row == 0 or new_col == 0 or new_row == n-1 or new_col == m-1){
//                             return level;
//                          }
//                         q.push({new_row,new_col});
//                         maze[new_row][new_col] = '+';
//                     }
//                 }
//             }
//         }
//         return -1;
//     }
// };


class Solution {
public:
  int nearestExit(vector<vector<char>>& grid, vector<int>& e) {
    int y= grid.size() ,yend= grid.size() - 1, x= grid[0].size() ,xend= grid[0].size() - 1, answer = 0;
    
        queue<tuple<int,int,int>> q;
        q.push({e[0], e[1], 0});
    
        while(!q.empty()){
          auto [cy,cx, w] = q.front(); q.pop();
          if(grid[cy][cx] == '+') continue;
          grid[cy][cx] = '+';
          if(cy == 0 || cy == yend || cx == 0 || cx == xend ){
            if(cy == e[0] && cx == e[1]);
            else return w;
          }
          w++;
          if(cy && grid[cy-1][cx] == '.') q.push({cy-1,cx,w});
          if(cy != yend && grid[cy+1][cx] == '.') q.push({cy+1,cx,w});
          if(cx && grid[cy][cx-1] == '.') q.push({cy,cx-1,w});
          if(cx != xend && grid[cy][cx+1] == '.') q.push({cy,cx+1,w});
        }
      
    
    return -1;      
  }
};
