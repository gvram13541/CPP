#include <iostream>

using namespace std;

// int sumOfN(int sum, int n){
//     if(n == 0)
//     return sum;

//     return sumOfN(sum+n, n-1);

// }

int sumOfN(int N){

    if(!N)
    return 0;

    return N+sumOfN(N-1);

}

int main(){
    int n;
    cin >> n;
    cout << "<<<<<<<<<<---------------------------OUTPUT--------------------------->>>>>>>>>>\n";
    // cout << sumOfN(0, n);
    cout << sumOfN(n);
    return 0;
}