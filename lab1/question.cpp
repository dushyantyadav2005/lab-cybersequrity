#include<iostream>
using namespace std;

bool lower(char ch)
{
    return ch>='a'&&ch<='z';
}
bool upper(char ch)
{
    return ch>='A'&&ch<='Z';
}
string incrept(string s)
{
    string ss="";
     int n=s.length();
    for(int i=0;i<n;i++)
    {
        if(lower(s[i]))
        {
            ss+=((s[i]-'a'+6)%26)+'a';
        }else{
            ss+=((s[i]-'A'+6)%26)+'A';
        }
    }
    return ss;
}
int main()
{
    string s;
    cin>>s;
    string nn=incrept(s);
   
    cout<<nn<<"\n";
}