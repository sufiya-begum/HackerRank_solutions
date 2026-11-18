int n;
        cin >> n;
        vector<long long>a(n);
        long long sum = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        long long pair = a[0]+a[1];
        for(int i = 1 ; i < n-1 ; i++)
        {
            pair = min(pair,a[i]+ a[i+1]);
        }
        cout << sum - (pair/2) << "
";
    }

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