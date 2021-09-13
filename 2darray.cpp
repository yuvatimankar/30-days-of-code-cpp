//hourglass sum

#include <bits/stdc++.h>

using namespace std;

int hourglass(vector<vector<int>> arr)
{
    int result=INT_MIN;
    for(int r=0;r<=3;r++)//row
    {
        for(int c=0;c<=3;c++)//column
        {
            int sum=arr[r][c]+arr[r][c+1]+arr[r][c+2]+arr[r+1][c+1]+
            arr[r+2][c]+arr[r+2][c+1]+arr[r+2][c+2];
            
            if(sum>result)
            {
                result=sum;
            }
        }
        
        
    }
    
    return result;
}

int main()
{

    vector<vector<int>> arr(6);
    for(int i=0;i<6;i++)
    {
        arr[i].resize(6);
        for(int j=0;j<6;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int result=hourglass(arr);
    cout<<result<<endl;

    return 0;
}
