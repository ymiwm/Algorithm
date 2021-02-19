#include <bits/stdc++.h>

int main(void)
{
    int N;
    int min = INT_MAX;
    int max = INT_MIN;
    std::cin >> N;
    std::vector<int> vec(N);
    for(int i = 0; i < N; i++)
        std::cin >> vec.at(i);
    for(int i = 0; i < N; i++)
    {
        if(min > vec.at(i))
            min = vec.at(i);
        if(max < vec.at(i))
            max = vec.at(i);
    }
    std::cout << min << ' ' << max;
}

/*
    int N, temp;
    int min = 1000000;
    int max = -1000000;
    std::cin >> N;
    for(int i = 0; i < N; i++)
    {
        std::cin >> temp;
        if(min > temp)
            min = temp;
        if(max < temp)
            max = temp;
    }
    std::cout << min << ' ' << max;
*/