#include <iostream>
using namespace std;

int main()
{
    float firstChoice;
    short int secondChoice;
    long int thirdChoice;
    
    cout << "Enter a float: " << endl;
    cin >> firstChoice;
    cout << "Enter a integer less than 6000: " << endl;
    cin >> secondChoice;
    cout << "Enter a integer greater than 70000: " << endl;
    cin >> thirdChoice;
    cout << "Float: " << firstChoice << " Short: " << secondChoice << " Long: " << thirdChoice << endl;6543.3
    cout <<"Float as a short: " << (short)firstChoice << endl;
    cout <<"Short as a float: " << (float)secondChoice<< endl;
    cout <<"Long as a short " << (short)thirdChoice;
    return 0;
