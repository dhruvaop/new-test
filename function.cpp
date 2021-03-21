# include <iostream>
using namespace std;
void LuckyNumber(int x )
{
    cout << "My lucky number is " << x << endl;
}
void hi (int o = 2)
{
    cout  << o << endl;
}
void printSomething()
{
    int a= 4;
    int b = 5;
    int sum = a+b;
    cout <<sum<< endl;
     cout<< "hi" << endl;
}
void multiplication();
// function prototyping when written below the the main function
int main ()
{
    hi();
    LuckyNumber(9);
    printSomething();
    multiplication();
    return 0;
}
void multiplication()
{
    int e ;
    cin>>e; // input
    int g;
    cin>>g;
    int mul = e*g;
    cout <<mul<< endl; // output
}
