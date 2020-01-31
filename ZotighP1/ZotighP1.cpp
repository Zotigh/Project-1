// ZotighP1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Programmer: Lance Zotigh (lzotigh1@cnm.edu)
// Date: 1/27/2020
// Pourpose: Calculate profit for moive theator

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   //Declare constants
    const double PERCENTKEPTBYTHEATER = 0.20;
    const double ADULTTICKETPRICE = 10.50;
    const double CHILDTICKETPRICE = 6.25;
    string movieName;
    string numberOfAdultTickets;
    string numberOfChildTickets;
    string ;

   //Declare variables 

   //Output header
    cout << "\nName: Lance Zotigh" << 
        "\n\nProgram: P1 C++ Theator Calculator" 
        << "\n\nObjective: To calculate a theater\'s gross and net box office profit for one night," << endl;

   //ask user for the name of movie
    cout << "\nPlease enter the movie you are seeing: ";
    getline(cin, movieName);

   //get # of adult tickets
    cout << "\nPlease enter the amount of Adult tickets: ";
    getline(cin, numberOfAdultTickets);
   //get # of children
    cout << "\nPlease enter the amount of Child tickets: ";
    getline(cin, numberOfChildTickets);
   //Cal adult rev

   //Cal child rev

   //cal gross profit

   //cal net profit

   //cal money sent to distributer

   //report results showing # of adults
   //Most of these are cout statements
   // tickets, the number of child tickets
    cout << "\nNumber of Child tickets: " << numberOfChildTickets << endl;
    cout << "Number of Adult tickets: " << numberOfAdultTickets << endl;

   // the revenue from each category of ticket
    cout << "Total Revenue: " << endl;

   //gross and the profit and
    cout << "\nGross: " <<
        "\nProfit: " << endl;

   //the amount sent to the ditributer 
    cout << "Amount Sent: " << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
