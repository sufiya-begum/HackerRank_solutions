}
            else
            {
                int before = (a[r] == a[r+1])? 1:0;
                int after = (a[r] + 1== a[r+1])?1:0;
                deltaR[r] = after-before;
            }
        }
        int max_del = -1e9;
        int run_max = -1e9;
        for(int r = 0 ; r < n ; r++)
        {
            run_max = max(run_max,delta[r]);
            max_del = max(max_del,run_max+deltaR[r]);
        }
        cout << init + max_del << "
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