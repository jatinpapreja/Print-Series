#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i=1,j=1;

    /// n1 is the total number of numbers to be considered.
    /// n2 is the number we have to check whether it divides 3n+2 or not.

    cin>>n1>>n2;

    while(i <= n1)  /// i is the counter which keeps check on the the number of numbers considered.
    {
        if((3*j + 2)% n2 != 0)
        {cout<<3*j + 2<<endl;
        i++;
        j++;
        }

        else j++;   /// j will go on changing until we achieve total n1 numbers.
    }
    return 0;
}
