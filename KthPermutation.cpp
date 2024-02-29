#include <iostream>
#include <vector>

using namespace std;



int main()
{
    int n, k;
    cin >> n >> k;

    vector <int> v(n), ds;
    vector <bool> Mark(n, false);

    for(int i = 0; i < n; i++)
    cin >> v[i];

    cout << "<<<<<<<<<<---------------------------OUTPUT--------------------------->>>>>>>>>>\n";
    KthPermutation(ds, Mark, v, 0, k/2);

    return 0;
}