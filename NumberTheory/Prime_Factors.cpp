unordered_map<int, int> prime_factors(int n)
{
    unordered_map<int, int> mp;
    for(int i = 2; i * i <= n; i++)
    {
        while(!(n % i))
        {
            mp[i]++;
            n /= i;
        }
    }
    if(n > 1)
        mp[n]++;
    return mp;
}
