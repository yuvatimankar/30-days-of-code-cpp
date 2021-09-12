//decimal to binary

#include <bits/stdc++.h>

using namespace std;




int main()
{
   int num;
   cin>>num;
   int rem=0;
   int count;
   int max=0;
   vector<int>v;
   
   while(num!=0)
   {
       rem=num%2;
       num/=2;
   
        if(rem==1)
        {
            count++;
        }
        else{
            count=0;
        }
        
        if(count>max)
        {
            max=count;
        }
    }
   cout<<max<<endl;
    return 0;
}
