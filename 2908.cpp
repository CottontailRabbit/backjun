#include <iostream>

int main()
{
    int a,b;
    std::cin >> a >> b;

    int c,d;
    c = (a%10) * 100 + (a/10%10) * 10 + (a/100);
    d = (b%10) * 100 + (b/10%10) * 10 + (b/100);

    if (c > d)
        std::cout << c;
    else
        std::cout << d;

    return 0;

}