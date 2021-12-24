#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int>v;
    string a="";
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=44 and i!=str.size()-1)
        {
            a+=str[i];
        }
        else 
        {
            if(i==str.size()-1)
            {
                a+=str[i];
            }
            v.push_back(stoi(a));
            a="";
        }
    }
    return v;
    }

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
