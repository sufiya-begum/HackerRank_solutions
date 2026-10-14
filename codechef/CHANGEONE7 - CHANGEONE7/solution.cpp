using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        int ans = min(a[n-1] - a[1], a[n-2] - a[0]);
        cout << ans << "
";
    }

}
n-2 local
n-1 local
namespace local
new keyword
next_permutation snippet
noexcept keyword
none_of snippet
not keyword
not_eq keyword