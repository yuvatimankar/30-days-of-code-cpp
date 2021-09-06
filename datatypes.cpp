// Data types

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int x;
    double d2;
    string s2;
    
    
    // Read and save an integer, double, and String to your variables.
    cin>>x;
    cin>>d2;
    getline(cin>>ws,s2);
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    cout<< x + i<<endl;
    
    // Print the sum of the double variables on a new line.
    cout<<fixed<<setprecision(1)<< d2 + d <<endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout<< s + s2 <<endl;

    return 0;
}