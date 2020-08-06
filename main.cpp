#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findodd(vector<int> t)
{
   int i,j,num=0;
   for(i=0;i<t.size();i++){
    for(j=0;j<t.size();j++){
        if(t[i]==t[j]){
            num +=1;
        }
    }if(num%2!=0){
         cout<<t[i]<<endl;
     }

     num=0;
   }
}

int main()
{
     findodd({19});
}
