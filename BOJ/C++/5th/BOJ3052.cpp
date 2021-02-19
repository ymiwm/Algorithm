#include <bits/stdc++.h>

int main(void)
{
    std::vector<bool> vec(42, 0);
    int count = 0;
    int temp;
    for(int i = 0; i < 10; i++)
    {
        std::cin >> temp;
        vec.at(temp%42) = true;
    }
    for(int i = 0; i < vec.size(); i++)
    {
        if(vec.at(i) == 1)
            count++;
    }
    std::cout << count;
}