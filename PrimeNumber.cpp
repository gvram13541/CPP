#include <iostream>
using namespace std;
int main()
{

    int n,cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int factors = 0;

        for(int j = 1; j <= i; j++){
            if(i % j == 0)
            factors++;
        }

        if(factors <= 2 && i != 1){
            cout << i << " ";
            cnt++;
        }
    }

    cout << "\n The total prime Numbers below" << n << " are:" << cnt << endl;

   return 0;
}