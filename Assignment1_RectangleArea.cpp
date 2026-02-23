#include<iostream>
using namespace std;


int main()
{
    double length_1, width_1, length_2, width_2;
    //input for first rectangle
    cout << "Enter the length and width of the first rectangle: ";
    cin >> length_1 >> width_1;

    //input for second rectangle
    cout << "Enter the length and width of the second rectangle: ";
    cin >> length_2 >> width_2;

    //calculate areas
    double area_1 = length_1 * width_1;
    double area_2 = length_2 * width_2;

    //comparison and output
    if (area_1 > area_2)
       { 
        cout << "The first rectangle has the greater area." << endl;
       }
        else if (area_1 < area_2)
        {
            cout << "The second rectangle has the greater area." << endl;
        }
        else if (area_1 == area_2)
        {
            cout << "The areas are the same." << endl;
        }

    return 0;
}
