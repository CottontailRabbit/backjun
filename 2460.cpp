
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int num;
    std::vector<int> vec;
    
    for(int i = 0; i < 10; i++){
        int a,b;
        std::cin >> a >> b;
        num = num - a + b;
        vec.push_back(num);
    }
    
    std::sort(vec.begin(), vec.end());

    std::cout << vec.back();

    return 0;
}