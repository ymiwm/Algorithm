#include <bits/stdc++.h>

int main(void)
{
    int N;
    int max = 0;
    float sum = 0;
    std::cin >> N;
    std::vector<float> vec(N);
    for(int i = 0; i < N; i++)
    {
        std::cin >> vec.at(i);
        if(max < vec.at(i))
            max = vec.at(i);
        else
            continue;
    }
    for(int i = 0; i < N; i++)
    {
        vec.at(i) = vec.at(i)/max*100;
        sum += vec.at(i);
    }
    std::cout << sum/N;
}