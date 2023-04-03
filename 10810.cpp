#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m,n;
    cin >> m >> n;

    vector<int> v(m);

    for (int i =0; i<n; i++){

        int a,b,c;
        cin >> a >> b >> c;

        for (int j = a; j<=b; j++){
            v[j-1] = c;
        }
    }

    //파이썬이랑 다르게 하나하나 반복해 출력해야함.
    //함수화해서 사용하면 편할듯
    for (const auto& item : v){
        cout << item << " ";
    }

    return 0;
}


