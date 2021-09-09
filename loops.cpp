// Print 10 lines of output; each line i (where ) (1<=i<=10)contains the result  of n*i in the form:
// n x i = result.

#include <bits/stdc++.h>

using namespace std;





int main()
{
   int n;
   cin>>n;
   int result;
   for(int i=1;i<=10;i++)
   {
      result=n*i; 
      
      cout<< n <<" "<<"x"<< " "<< i << " = "<<result<<endl;
   } 
    
    
    return 0;
}

