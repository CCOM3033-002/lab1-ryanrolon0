/*
Asignación 1: Binary Digit
Nombre: Ryan Rolón Rosa
Núm. Est: 801-24-1373
Colaboraciones: 
- Lillian González,
- página web: [https://github.com/CCOM3033-002/lab1-ryanrolon0]
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Despliega el propósito del programa
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributer's Profit of a movie playing in the theater." << endl << endl;
    
    // Las variables del programa
    string movie_name;
    int adult_tickets, child_tickets;
    const double ADULT_PRICE = 10.0, CHILD_PRICE = 6.0;

    // Toma los inputs necesario para el programa
    cout << "Enter the name of the movie: ";
    getline(cin, movie_name);

    cout << "Enter the amount of adult tickets sold: ";
    cin >> adult_tickets;

    cout << "Enter the amount of child tickets sold: ";
    cin >> child_tickets;

    // Se calcula las ganancias entre el cine y el distribuidor
    double adult_total = ADULT_PRICE * adult_tickets;
    double child_total = CHILD_PRICE * child_tickets;

    double gross_profit = adult_total + child_total;
    double net_profit = gross_profit * 0.2;
    double distributor_profit = gross_profit - net_profit;

    // Se despliega la información
    cout << left << setw(29) << "\nMovie Name:" << "\"" << movie_name << "\"" << endl;

    cout << left << setw(30) << "Adult Tickets Sold:" << adult_tickets << endl;

    cout << left << setw(30) << "Child Tickets Sold:" << child_tickets << endl;

    cout << left << setprecision(2) << fixed;

    cout << left << setw(28) << "Gross Box Office Profit:" << '$';
    cout << right << setw(9) << gross_profit << endl;

    cout << left << setw(28) <<  "Net Box Office Profit:" << '$';
    cout << right << setw(9) << net_profit << endl;

    cout << left << setw(28) << "Amount Paid to Distributor:" << '$';
    cout << right << setw(9) << distributor_profit << endl;

    return 0;
}
