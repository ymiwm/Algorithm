#include <bits/stdc++.h>

int main(void)
{
    int C, N, sum, count;
    float res, mean;
    std::cin >> C;
    std::cout << std::fixed;
    std::cout.precision(3);
    for(int i = 0; i < C; i++)
    {
        std::cin >> N;
        std::vector<int> vec(N);
        sum = 0;
        count = 0;
        for(int j = 0; j < N; j++)
        {
            std::cin >> vec.at(j);
            sum += vec.at(j);
        }
        mean = static_cast<float>(sum)/N;
        for(int j = 0; j < N; j++)
        {
            if(vec.at(j) > mean)
                count++;
        }
        res = static_cast<float>(count)/N*100;
        std::cout << res << "%\n";
    }
}

// Refactoring