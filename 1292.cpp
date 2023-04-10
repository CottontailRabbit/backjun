#include <iostream>

int dongho(int b){

    int max = 1000;
    int cnt = 0;
    int sum = 0;

    for (int i = 1; i <= max; i++)
        {
            for (int j = 0; j < i; j++)
            {
                sum += i;
                cnt++;

                if (cnt == b)
                {
                    return sum;
                }
            }
        
    }
    return 0;
    }

int main()
{
    int a,b,sum;

    std:: cin >> a >> b;

    sum = dongho(b) - dongho(a-1);
    
    std::cout << sum << std::endl;

}