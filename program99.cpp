#include<bits/stdc++.h>
using namespace std;
int main(){
    int *d=new int[26]{0};
    string s,s1;
    getline(cin,s);
    getline(cin,s1);
    int flag=0;

    //cout<<d[10]<<"\n";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);

    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
            d[s[i]-'a']++;
    }

    for(int i=0;i<s1.size();i++){
        if(s1[i]>='a' && s1[i]<='z')
            d[s1[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(d[i]==1){
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
//    cout<<s<<"\n";
//    cout<<s1;
}
