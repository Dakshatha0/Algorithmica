#include <bits/stdc++.h>
using namespace std;
// ASCII VALUES - 'A' - 65, 'a' - 97
int longestPalindrome(string s)
{
    int freq[52] = {0};
    int count = 0;
    int maxOdd = 0;
    for (auto c : s)
        freq[c - 'A']++;
    for (int i = 0; i < 52; i++)
    {
        if (freq[i] % 2 == 0)
            count += freq[i];
        else
            maxOdd = max(maxOdd, freq[i]);
    }
    return count + maxOdd;
}

int main()
{

    return 0;
}