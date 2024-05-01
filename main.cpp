#include <iostream>

using namespace std;

int main()
{
    int num,x,y,z=0;

    cout << "Enter the Integer Number : ";
    cin >> x;

    num=x;

    while(x!=0)
    {
        y=x%10;
        z=y+(z*10);
        x=x/10;
    }
    cout << "\nReversed Number : " << z << endl;

    if (num==z)
    {
        cout << "\n\tIt's a Palindrome Number!" << endl;
    }
    else
    {
        cout << "\n\tIt's not a Palindrome Number!" << endl;
    }

    return 0;
}
