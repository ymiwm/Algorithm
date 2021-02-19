#include <bits/stdc++.h>

int main(void)
{
    int N;
    int sum = 0;
    int add = 0;
    bool flag = false;
    std::cin >> N;
    std::vector<std::string> vec(N);
    for(int i = 0; i < N; i++)
        std::cin >> vec.at(i);
    for(int i = 0; i < N; i++)
    {
        sum = 0;
        add = 0;
        for(int j = 0; j < vec.at(i).size(); j++)
        {
            if(vec.at(i).substr(j, 1) == "O" && flag == true)
            {
                add += 1;
                sum += add;
            }
            else if(vec.at(i).substr(j, 1) == "O" && flag == false)
            {
                add = 1;
                sum += add;
                flag = true;
            }
            else
            {
                add = 0;
                flag = false;
            }
        }
        std::cout << sum << '\n';
    }
}