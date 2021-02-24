#include <bits/stdc++.h>

int main(void)
{
    int N;
    int count = 0;
    for(int i = 0; i < 8; i++)
    {
        std::cin >> N;
        if(i == N - 1)
            count++;
        else if(i == 8 - N)
            count--;
        else
            count = 1024;
    }
    if(count == 8)
        std::cout << "ascending";
    else if(count == -8)
        std::cout << "descending";
    else
        std::cout << "mixed";
}