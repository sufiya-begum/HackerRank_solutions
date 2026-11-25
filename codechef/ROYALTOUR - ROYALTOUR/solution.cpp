#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        long long n,m,r,c;
        cin >> n >> m >> r >> c;
        long long d_first = min({max(r-1, c-1), max(r-1, m-c), max(n-r, c-1), 
            max(n-r, m-c)});
        long long d_corners = (n-1) + (m-1) + min(n-1,m-1);
        cout << d_first + d_corners << "
";
    }
    return 0;

}

return keyword