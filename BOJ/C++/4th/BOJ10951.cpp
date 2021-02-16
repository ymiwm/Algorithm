#include <bits/stdc++.h>

int main(void)
{
    int A, B;
    while(true)
    {
        std::cin >> A >> B;
        if(std::cin.eof() == true)
            break;
        else
            std::cout << A + B << '\n';
    }
}