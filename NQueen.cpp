#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>> ans, int row, int col, int n)
{

    int i = row, j = col;
    while(i >= 0 && j >= 0 && ans[i][j] == 0){
        i--;
        j--;
    }
    if(i >= 0 && j >= 0){
        if(ans[i][j] == 1)
        return false;
    }

    i = row; j = col;
    while(i == row && j >= 0 && ans[i][j] == 0)
    j--;
    if(i >= 0 && j >= 0){
        if(ans[i][j] == 1)
        return false;
    }

    i = row; j = col;
    while(i < n && j >= 0 && ans[i][j] == 0){
        i++;
        j--;
    }
    if(i < n && j >= 0){
        if(ans[i][j] == 1)
        return false;
    }

    return true;

}
void nqueen(vector<vector<int>> ans, int col, int n){

    if(col == n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++)
            cout << ans[i][j] << " ";
            cout << endl;
        }
        cout << endl;
        return;
    }

    for(int i = 0; i < n; i++){
        if(isSafe(ans, i, col, n)){
            ans[i][col] = 1;
            nqueen(ans, col+1, n);
            ans[i][col] = 0;
        }
    }

}
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> ans;

    for(int i = 0; i < n; i++){
        vector<int> v(n, 0);
        ans.push_back(v);
    }

    nqueen(ans, 0, n);
    
   return 0;
}