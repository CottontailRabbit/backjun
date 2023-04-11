#include <iostream>

int main()
{
    int a,b;
    std::cin >> a;

    int arr[a];

    

    for (int i = 0; i < a; i++)
    {
        std::cin >> b;
        arr[i] = b;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if ((arr[i]>>j) &1== 1)
            {
                std::cout << j << " ";
            }
        }
    std::cout << std::endl; 
    }
}