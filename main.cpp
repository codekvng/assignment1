#include <iostream>
#include <string>

using namespace std;

#define vat 0.12

int main()
{
    string c_name, item;
    int c_id, quantity, t_price, vat_paid, amount_paid, balance;
    cout << "Welcome to the Black SuperMarket!" << endl;
    cout << "Please enter your name : ";
    cin >> c_name;
    cout << "Please enter your ID : ";
    cin >> c_id;
    cout << "Available items are \'Phone $1000, \t\t\t\tPrinter $300, \t\t\t\tTable $80\' " << endl;
    cout << "Enter item to be purchased : ";
    cin >> item; // Taking input of item purchased
    cout <<"Enter quantity you would like to purchase : ";
    cin >> quantity;

    if (item == "phone")
    {
        t_price = 1000 * quantity;
    }
    else
    {
        if (item == "printer")
        {
            t_price = 300 * quantity;
        }
        else
        {
            t_price = 80 * quantity;
        }
    }

    cout <<"Total amount to be paid for this purchase is " << t_price << endl;
    cout <<"Enter amount to pay : ";
    cin >> amount_paid;

    if (amount_paid > t_price)
    {
        vat_paid = t_price * vat;
        balance = amount_paid - t_price;
    }
    else
    {
        if (amount_paid == t_price)
        {
            vat_paid = t_price * vat;
            balance = 0;
        }
        else
        {
            cout <<"Insufficient funds to purchase item(s)";
        }
    }

    cout <<"\t\t\t\t\tRECEIPT\n";
    cout <<"Customer's Name.... " << c_name << endl;
    cout <<"Customer's ID.... " << c_id << endl;
    cout <<"Item(s) Bought..." << item << endl;
    cout <<"Quantity Bought...." << quantity << endl;
    cout <<"Vat Amount...." << vat_paid << endl;
    cout <<"Total Cost...." << t_price << endl;
    cout <<"Total Amount Paid...." << amount_paid << endl;

    if (balance > 0)
    {
        cout <<"Balance is...." << balance << endl;
    }

    return 0;
}
