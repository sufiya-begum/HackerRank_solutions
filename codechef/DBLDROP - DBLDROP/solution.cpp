{
        int n;
        cin >> n;
        vector<long long> a(n);
        long long sum = 0,max_val = 0;
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            sum += a[i];
            max_val = max(max_val,a[i]);
        }
        long long ans = sum - max_val;
        for(int i = 0 ; i < n ; i++)
        {
            long long score = (sum+ a[i]) - max(max_val, 2*a[i]);
            ans = max(ans, score);
        }
        cout << ans << "
";
    }
    return 0;

return keyword