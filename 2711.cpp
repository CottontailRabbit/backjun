#include <iostream>
#include <string>

int main()
{
    int iter;
    std::cin >> iter;

    //string array create
    std::string str[iter];


    
    for (int i=0; i<iter; i++){

        int a;
        std::string b;

        std::cin >> a >> b;
        str[i] = b.erase(a-1,1);
    }

    for (int i=0; i<iter; i++){
        std::cout << str[i] << std::endl;
    }
    
}