#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin>>q;
    map<string,int>m;
    string name;
    for(int i=0;i<q;i++)
    {
        int type,marks;
        string name;
        cin>>type;
        if (type==1)
        {
            cin>>name>>marks;
            m[name]+=marks;
        }
        else if(type==2){
        cin>>name;
        m.erase(name);}
        else
        {
            cin>>name;
            cout<<m[name]<<'\n';
        }
    }
      
    return 0;
}
