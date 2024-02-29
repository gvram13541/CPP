#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int>>sudoku, int row, int col, int i){

    for(int k = 0; k < 9; k++){

        if(sudoku[row][k] == i)
        return false;

        if(sudoku[k][col] == i)
        return false;

        if(sudoku[3*(row/3) + k/3][3*(col/3) + k%3] == i)
        return false;

    }

    return true;

}

void f(vector<vector<int>> sudoku, int row, int col){

    if(col == 9 && row == 9){

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                cout << sudoku[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        return;
    }

     
}

int main()
{

    // vector<vector<int>> sudoku;

    // for(int i = 0; i < 9; i++){
    //     vector<int> v;
    //     for(int j = 0; j < 9; j++){
    //         int x;
    //         cin >> x;
    //         v.push_back(x);
    //     }
    //     sudoku.push_back(v);
    // }

        vector<vector<int>> sudoku = {{5, 3, 0, 0, 7, 0, 0, 0, 0}, 
{6, 0, 0, 1, 9, 5, 0, 0, 0},
{0, 9, 8, 0, 0, 0, 0, 6, 0},
{8, 0, 0, 0, 6, 0, 0, 0, 3},
{4, 0, 0, 8, 0, 3, 0, 0, 1},
{7, 0, 0, 0, 2, 0, 0, 0, 6},
{0, 6, 0, 0, 0, 0, 2, 8, 0},
{0, 0, 0, 4, 1, 9, 0, 0, 5},
{0, 0, 0, 0, 8, 0, 0, 7, 9}};

    f(sudoku, 0, 0);

    return 0;
}