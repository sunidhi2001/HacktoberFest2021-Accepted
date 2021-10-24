// 1010. Pairs of Songs With Total Durations Divisible by 60
// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/

#include <bits/stdc++.h>

using namespace std;

/*
int numPairsDivisibleBy60(vector<int> &time)
{
    // support variables
    vector<int> freqs(60,0) , res = 0;

    // populating freqs
    for (int t : time)
        freqs[t % 60]++;

    //Go through our freqs and compute all the possible pairs, initially looping in the 1 - 29 range: if for example we encountered 10 songs such as t % 60 == 13 and 5 songs such as t % 60 == 47, we will add 50 to res.
    // computing the number of matches for most pairs
    for (int i = 1; i < 30; i++)
        res += freqs[i] * freqs[60 - i];

    // special cases - 0s and 30s
    // exception is for frequencies such as t % 60 == 0 or t % 60 == 30, since they make couple with themselves and we need to avoid counting each couple more than once: in which case we will have to compute the number of matches as f * (f - 1) / 2. If for example we had 3 songs such as t % 60 == 0, as it is the case in one of the base examples, we will then have a total of 3 * (3 - 1) / 2 == 3 valid, not repeated matches.

    res+=freqs[0]*(freqs[0]-1)/2;
    res+=freqs[30]*(freqs[30]-1)/2;

    return res;
} */

// -------------------------------------------------------------------------------------

// Another Approach Using Unordered_map
int numPairsDivisibleBy60(vector<int> &time)
{
    unordered_map<int, int> umap;
    int count = 0;
    for (auto song : time)
    {
        if (song % 60 == 0)
            count += umap[0];
        else
            count += umap[60 - song % 60];
        umap[song % 60]++;
    }
    return count;
}

int main()
{

    vector<int> time = {60, 60, 60};
    cout << numPairsDivisibleBy60(time);
    return 0;
}