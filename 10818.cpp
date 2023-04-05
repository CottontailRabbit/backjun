#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);


    for (int i = 0; i < n; ++i)
        cin >> v[i];

    sort(v.begin(), v.end());

    //v.begin(), v.end()출력


    cout <<v.front()<<" " <<v.back()<< endl;
    return 0;
}