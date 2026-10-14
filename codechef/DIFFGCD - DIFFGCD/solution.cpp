int main() {
    // your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long m = n/2;
        long long sum = 0;
        long long l = 1;
        while(l <= m)
        {
            long long v = n/l;
            long long r = min(m,n/v);
            sum += (r-l+1)*v;
            l = r+1;
        }
        long long ans = sum -m;
        cout << ans <<"
";
    }
namespace local
new keyword
next_permutation snippet
noexcept keyword
none_of snippet
not keyword
not_eq keyword
ns snippet
nth_element snippet