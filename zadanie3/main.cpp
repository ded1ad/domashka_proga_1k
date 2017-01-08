#include <iostream>
using namespace std;

int main()
{
    cout << "Enter number: " << endl;
    int numb; 
    cin >> numb;
    cout << "Enter power: "; 
    int power;
    cin >> power;
    int count = 1; 
    int power_numb = numb; 
    do
    {
        if (power == 0)
            power_numb = 1;
        else
            if (power != 1 && power > 0)
                power_numb = power_numb * numb; 
        count++; 
    } while ( power > count); 
    cout << "number = " << power_numb << endl; 
    return 0;
}
