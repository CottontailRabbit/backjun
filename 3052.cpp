#include <iostream>

int main()
{
    //변수 10개 선언
    int a[43] = {0};

    int count = 0;

    //변수 10개에 값을 입력받음
    for (int i = 0; i < 10; i++)
    {
        int num, b;
        std::cin >> num;

        b= num%42 ;

        a[b]++;
    }

    for (int i = 0; i < 43; i++)
    {
        if (a[i] != 0)
        {
            count ++;
        }
    }
    
    std::cout << count << std::endl;

}