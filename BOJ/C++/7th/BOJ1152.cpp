#include <bits/stdc++.h>

int main(void)
{
    std::string str;
    int count = 0;
    getline(std::cin, str);
    if(str == " ")
        std::cout << '0';
    else
    {
        for(int i = 0; i < str.size(); i++)
        {
            if((i != 0 && i != str.size() - 1) && str.at(i) == ' ')
                count++;
        }
        std::cout << count + 1;
    }
}