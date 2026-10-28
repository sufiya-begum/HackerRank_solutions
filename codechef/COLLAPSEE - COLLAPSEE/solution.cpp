// your code goes here
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
        }
        if(n == 2)
        {
            cout << a[1] - a[0] << "
";
            return
        }
    }

}