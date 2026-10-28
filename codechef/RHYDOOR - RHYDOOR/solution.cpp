char curr = ' ';
        int str = 0;
        for(char ch : s)
        {
            if(ch == curr)
            {
                str++;
                if(str == 3)
                {
                    cnt++;
                    str = 0;
                }
            }
            else
            {
                curr = ch;
                str = 1;
            }
        }
        cout << cnt << "
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