#include <bits/stdc++.h>

int main(void)
{
    std::string str;
    int time = 0;
    std::cin >> str;
    for(int i = 0; i < str.size(); i++)
    {
        if(str.at(i) > 'V')
            time += 10;
        else if(str.at(i) > 'S')

            time += 9;
        else if(str.at(i) > 'O')
            time += 8;
        else
            time += ((str.at(i) - 'A') / 3) + 3;
    }
    std::cout << time;
}

// switch case available.