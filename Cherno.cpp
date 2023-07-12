#include <iostream>
#include "Logger.h"

using namespace std;

int main()
{
    void subFile(int* num);
    void log(const char* message);
 /*   for (int i = 0; i <= 10; i++)
    {
        int a = i;
        cout << a << endl;
        const char* b = "Hello";
        log(b);
    }
*/
 
/*
cout << setiosflags(ios::left) << setw(15)<< "Last name" <<setw(15)<< "First name" <<setw(20)<< "Street address" << setw(15)<< "Town" << setw(10)<<"State" <<endl;
cout << setiosflags(ios::left) << setw(70)<<setfill('-')<<""<< endl;
            cout<< setw(13)<<setfill(' ')<<"Jones" << setw(18) << "Bernard" << setw(19) << "109 Pine Lane" << setw(16) << "Littletown" << setw(7) << "MI" << endl;
            cout<< setw(13)<<"Jones" << setw(18) << "Bernard" << setw(19) << "109 Pine Lane" << setw(16) << "Little town" << setw(7) << "MI" << endl;
            cout<< setw(13)<<"Jones" << setw(18) << "Bernard" << setw(19) << "109 Pine Lane" << setw(16) << "Little town" << setw(7) << "MI" << endl;
*/

/*

float c,f;
cout << "Put Celsius : ";
cin >> c;

f = (c*(9/5)) + 32;
cout << c << " Celsius is equal to "<< f <<" Fahrenheit" <<endl;

*/

/*

int a =0;

if(a<2){
    cout << "Less Than\n";
}else{
    cout << "Greater Than\n";
}

*/

/*
    int a = 5;
    int b = 5;
    for (a = 0; a < 5; a++)
    {
        cout << endl;
        for (b = 0; b < 5; b++)
            cout << "*";
    }

*/

/*  switch (a)
   {
   case 0: cout << "it is zero";
   case 1: cout << "it is one";
   case 2: cout << "it is Two";
   case 3: cout << "it is Three";

   }
   */

/*   int a, year;
      float loan, interest;
      cout << "Enter Loan : ";
      cin >> loan;
      cout << "Enter interest per year : ";
      cin >> interest;
      cout << "Enter year to take : ";
      cin >> year;

      for (a = 1; a <= year; a++)
      {
          interest = loan / interest;

          loan += interest;

      }
      cout << "Loan is " << loan << endl;
*/

    /*    int year = 0;
    float amount, total, interest;

    log("Enter Initial Amount");
    cin >> amount;

    log("Enter Final Amount");
    cin >> total;

    log("Enter Interest");
    cin >> interest;

    interest /= 100;
    while (total >= amount) {
        amount = amount + amount * interest;
        year++;
    }
    log("It took ");
    cout << year;
    */


/*int p1, sh1, pe1, p2, sh2, pe2, p, sh, pe;
char dot, ch;

do {

    cout << "Enter first amount: ";

    cin >> p1 >> dot >> sh1 >> dot >> pe1;
    cout << "Enter second amount: ";
    cin >> p2 >> dot >> sh2 >> dot >> pe2;

    p = p1 + p2;

    sh = sh1 + sh2;

    pe = pe1 + pe2;

    if (pe >= 12)
    {
        sh += pe / 12;
        pe = pe % 12;
    }
    if (sh >= 20)
    {
        p += ch / 20;
        sh = sh % 20;
    }
    cout << "Total is \x9c" << p << dot << sh << dot << pe << endl;
    cout << "Do you wish to continue? (y/n)";
    cin >> ch;
} while (ch == 'y');
*/

log("\x9c");
return 0;
    
}
