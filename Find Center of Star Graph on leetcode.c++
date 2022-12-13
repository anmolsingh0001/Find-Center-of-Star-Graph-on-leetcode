class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
       for(int i=0; i<edges.size()-1; i++){
           for(int j=0; j<edges[i].size()-1; j++){
               if(edges[i][j]==edges[i+1][j] || edges[i][j]==edges[i+1][j+1]){
                   return edges[i][j];
               }
               else if(edges[i][j+1]==edges[i+1][j] || edges[i][j+1]==edges[i+1][j+1]){
                   return edges[i][j+1];
               }
           }
       } 
       return {};
    }
};