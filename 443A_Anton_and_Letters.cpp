#include <bits/stdc++.h>

using namespace std;

int main()
{
    char x;
    vector<char> sol;
    cin>>x>>x;
    while(x != '}'){
        sol.push_back(x);
        cin>>x;
        if(x == ',')
            cin>>x;
    }
    sort(sol.begin(), sol.end());
    sol.erase(unique(sol.begin(), sol.end()), sol.end());

    cout<<sol.size()<<endl;

    return 0;
}
