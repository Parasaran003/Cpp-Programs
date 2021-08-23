#include <iostream>
using namespace std;
class bank
{
public:
    int balance, deposit, total;
public:
    int passbook()
    {
        cout << "enter the deposit and balance: " << endl;
        cin >> deposit >> balance;
        total = deposit + balance;
        cout<<""
        return total;
    }
};
int main()
{

    bank b, s;

    cout << "The Total Amount on b is = " <<b.passbook() << endl;
    cout << "The Total Amount on s is = " << s.passbook()<< endl;
    return 0;
}
