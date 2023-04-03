#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int begin;
    cin >> begin;

    int max = begin;
    int index = 1;
    int argv;

    for (int i = 1; i < 9; i++){
        cin >> argv;
        if (argv > max){
            max = argv;
            index = i+1;}
    }
    cout <<max << '\n'<< index;

    return 0;
}