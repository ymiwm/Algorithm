#include <bits/stdc++.h>

int main(void)
{
    int N;
    int sum = 0;
    int temp = 0;
    bool flag = false;
    std::cin >> N;
    std::vector<std::string> vec(N);
    for(int i = 0; i < N; i++)
        std::cin >> vec.at(i);
    for(int i = 0; i < vec.size(); i++)
    {
        sum = 0;
        temp = 0;
        for(int j = 0; j < vec.at(i).size(); j++)
        {
            if(vec.at(i).substr(j, 1) == "O" && flag == true)
            {
                temp += 1;
                sum += temp;
            }
            else if(vec.at(i).substr(j, 1) == "O" && flag == false)
            {
                temp = 1;
                sum += temp;
                flag = true;
            }
            else
            {
                temp = 0;
                flag = false;
            }
        }
        std::cout << sum << '\n';
    }
}

// Refactoring