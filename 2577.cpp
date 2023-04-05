#include <iostream>

int main()
{
    int a,b,c,d;
    std::cin >> a >> b >> c;
    d= a * b * c;
    
    int arr[10] = {0,};
    
    while(d != 0)
    {
        arr[d%10]++;
        d /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}