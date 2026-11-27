#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin >> n >> q;
    cin.ignore();
    map<string, string> mp;
    string line;
    string path = "";
    for(int i = 0 ; i < n ; i++)
    {
        getline(cin,line);
        if(line.substr(0,2) == "</")
        {
            size_t pos = path.rfind('.');
            if(pos == string::npos)
                path = "";
            else
                path = path.substr(0,pos);
        }
        else{
            line.erase(line.begin());
            line.pop_back();
            stringstream ss(line);
            string tag;
            ss >> tag;
            if(path.empty())
                path = tag;
            else
                path += "." + tag;
            string attr, equal,value;
            while(ss >> attr >> equal >> value)
            {
                if(value.front() == '"')
                    value.erase(0,1);
                if(value.back() == '"')
                    value.pop_back();
                mp[path + "~" + attr] = value;
            }
        }
    }
    for(int i = 0 ; i < q ; i++)
    {
        string query;
        getline(cin,query);
        if(mp.find(query) != mp.end())
            cout << mp[query] << endl;
        else
            cout << "Not Found!" << endl;
    }
    return 0;
}
