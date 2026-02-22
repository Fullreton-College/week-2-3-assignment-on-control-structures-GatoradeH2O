#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    const double price = 199.00;
    double discount, total;
    int quantity;

    cout << "Enter the quantity of software packages: ";
    cin >> quantity;
    cout << "You entered: " << quantity << endl;

    //calculate discount
    if (quantity >= 10 && quantity <= 19)
        discount = 0.20;
    else if (quantity >= 20 && quantity <= 49)
        discount = 0.30;
    else if (quantity >= 50 && quantity <= 99)
        discount = 0.40;
    else if (quantity >= 100)
        discount = 0.50;
        else discount = 0.0;

    //check out
    total = quantity * price * (1-discount);
    cout << fixed << setprecision(2);
    cout << "Total cost: $" << total << endl;

    return 0;

}
