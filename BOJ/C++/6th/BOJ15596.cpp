#include <vector>

long long sum(std::vector<int> &a)
{
    long long ans = 0;
    for(long unsigned int i = 0; i < a.size(); i++) // int i -> warning
    {
        ans += a.at(i);
    } // No brace -> warning
    return ans;
}