#include <bits/stdc++.h>

int main(void)
{
    std::vector<int> vec(9);
    int index;
    for(int i = 0; i < 9; i++)
    {
        std::cin >> vec.at(i);
        if(vec.at(index) < vec.at(i))
            index = i;
    }
    std::cout << vec.at(index) << '\n' << index + 1;
}

/*
    int index, temp;
    int max = INT_MIN;
    for(int i = 1; i <= 9; i++)
    {
        std::cin >> temp;
        if(max < temp)
        {
            max = temp;
            index = i;
        }
    }
    std::cout << max << '\n' << index;
*/