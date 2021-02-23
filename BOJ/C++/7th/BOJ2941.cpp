#include <bits/stdc++.h>

int main(void)
{
    std::string str;
    std::vector<std::string> vec(8);
    vec.at(0) = "c=";
    vec.at(1) = "c-";
    vec.at(2) = "dz=";
    vec.at(3) = "d-";
    vec.at(4) = "lj";
    vec.at(5) = "nj";
    vec.at(6) = "s=";
    vec.at(7) = "z=";
    int count = 0;
    int checked = 0;
    int prev_pos;
    std::cin >> str;
    for(int i = 0; i < 8; i++)
    {
        prev_pos = 0;
        while(str.find(vec.at(i), prev_pos) != std::string::npos)
        {
            if(i == 2)
            {
                count++;
                prev_pos = str.find(vec.at(i), prev_pos);
                prev_pos += 3;
                checked -= 3;
            }
            else
            {
                if(i == 7 && str.find(vec.at(i), prev_pos) != 0 && str.at(str.find(vec.at(i), prev_pos) - 1) == 'd')
                {
                    prev_pos = str.find(vec.at(i), prev_pos);
                    prev_pos += 2;
                    continue;
                }
                else
                {
                    count++;
                    prev_pos = str.find(vec.at(i), prev_pos);
                    prev_pos += 2;
                    checked -= 2;
                }
            }
        }
    }
    std::cout << str.size() + count + checked;
}