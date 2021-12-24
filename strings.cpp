#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    string s2;
    cin>>s1>>s2;
    cout<<s1.size()<<' '<<s2.size()<<'\n';
    cout<<s1+s2;
    swap(s1[0],s2[0]);
    cout<<'\n'<<s1<<' '<<s2;
    
  
    return 0;
}
