#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 

int main() {
    // Write C++ code here
    char a1[]="abcde";
    char a2[]="xyza";
    
    map<char,int> m;
    
    for(int i=0;i<4;i++)
    {
        m[a2[i]]++;
    }
    
    
    int cnt=0;
    for(int i=0;i<5;i++)
    {
        
        if(m[a1[i]]==0)
        {
            a1[cnt]=a1[i];
            cnt++;
        }
    }
    a1[cnt]='\0';
    
    cout<<a1<<endl;
    return 0;
}
