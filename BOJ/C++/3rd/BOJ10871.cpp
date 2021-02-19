#include <bits/stdc++.h>

void func1(void)
{
    int N, X;
    std::cin >> N >> X;
    std::vector<int> vec(N);
    for(int i = 0; i < N; i++)
        std::cin >> vec.at(i);
    for(int i = 0; i < N; i++)
    {
        if(vec.at(i) < X)
            std::cout << vec.at(i) << ' ';
    }
}

int main(void)
{
    func1();
}

/*
    int N, X, T;
    cin >> N >> X;
    while(N--)
    {
        cin >> T;
        if(T < X)
            cout << T << ' ';
    }
*/