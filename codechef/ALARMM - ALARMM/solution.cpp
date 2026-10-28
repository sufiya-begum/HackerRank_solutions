{
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int alarm = 0;
        int i = n-1;
        while(i >= 0)
        {
            if(s[i] == '1')
            {
                alarm++;
                i = i-k-1;
            }
            else
            {
                i--;
            }
        }
        cout << alarm << "
";
    }
n-1 local
namespace local
new keyword
next_permutation snippet
noexcept keyword
none_of snippet
not keyword
not_eq keyword
ns snippet