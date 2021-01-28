/* @Author : Ravindranath Shenoy
   GITHUB Repository

*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write C++ code here
    char s1[]="geeks";
    char s2[]="geesks";
    
    int n1=strlen(s1);
    int n2=strlen(s2);
    
    if(n1!=n2)
    {
        cout<<"not anagram"<<endl;
        return 0;
    }
    
    map<char,int> m;
    
for(int i=0;i<n1;i++)
{
    m[s1[i]]++;
    m[s2[i]]--;
}

for(int i=0;i<n1;i++)
{
    if(m[s1[i]]!=0)
    {
        cout<<"not anagram"<<endl;
        return 0;
    }
}

cout<<"anagram"<<endl;

   
    
    return 0;
}
