#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()

{
    // mobile plans and their cost
    const double planA = 39.99;
    const double planB = 59.99;
    const double planC = 79.99;

    // gigabytes provided 
    const int planA_gbs = 2;
    const int planB_gbs = 8;
    
    // additional cost per GB for each plan
    const double additional_gbs_cost = 8.00;

    string name;
    char plan;
    int gbs_used;
    double total = 0.0;

    // name and plans
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Enter plan selected (A, B, C): ";
    cin >> plan;
    cout << "Enter number of gigabytes used: ";
    cin >> gbs_used;

    //calculate cost 
    plan = toupper(plan);
    switch (plan) {
       case 'A':
              total = planA;
              if (gbs_used > planA_gbs) {
                total += (gbs_used - planA_gbs) * additional_gbs_cost;
                break;
              }
              case 'B':
              total = planB;
              if (gbs_used > planB_gbs) {
                total += (gbs_used - planB_gbs) * additional_gbs_cost;
                break;
              }
              case 'C':
              total = planC;
              break;
              default:
              cout << "Invalid plan selected." << endl;

              return 1;
    }
    //checkout
    cout << fixed << setprecision(2);
    cout << name << " selected plan: " << plan << endl;
    cout << "Amount gigabytes used: " << gbs_used << endl;
    cout << "Total amount due: $" << total << endl;

    //calculating comparison
    double costA = planA;
    if (gbs_used > planA_gbs) 
        costA += (gbs_used - planA_gbs) * additional_gbs_cost;

    double costB = planB;
    if (gbs_used > planB_gbs)
        costB += (gbs_used - planB_gbs) * additional_gbs_cost;

    double costC = planC;

    //savings
    switch (plan){
        case 'A':
        if (costA > costB)
        cout << "you can save $: " << costA - costB << " by switching to plan B." << endl;

        if (costA > costC)
        cout << "you can save $: " << costA - costC << " by switching to plan C." << endl;
        break;

        case 'B':
        if (costB > costC)
            cout << "you can save $: " << costB - costC << " by switching to plan C." << endl;
            break;
    }

    return 0;
}
