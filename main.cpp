#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int number;
   float cost;
   char beverage;
   bool validBeverage;

   cout << fixed << showpoint << setprecision(2);

   do
   {
      cout << endl << endl;
      cout << "Hot Beverage Menu" << endl << endl;
      cout << "A: Coffee         $1.00" << endl;
      cout << "B: Tea            $ .75" << endl;
      cout << "C: Hot Chocolate  $1.25" << endl;
      cout << "D: Cappuccino     $2.50" << endl <<endl << endl;

      cout << "Enter the beverage A,B,C, or D you desire" << endl;
      cout << "Enter E to exit the program" << endl << endl;
      cin >> beverage;

      switch(beverage)
      {
         case 'a':
         case 'A':
         case 'b':
         case 'B':
         case 'c':
         case 'C':
         case 'd':
         case 'D': validBeverage = true;
                   break;
         default: validBeverage = false;
      }

      if (validBeverage)
      {
         cout << "How many cups would you like?" << endl;
         cin >> number;
      }

      switch(beverage)
      {
         case 'a':
         case 'A': cost = number * 1.0;
                   cout << "The total cost is $ " << cost << endl;
                   break;
         case 'b':
         case 'B': cost = number * .75;
                   cout << "The total cost is $ " << cost << endl;
                   break;
         case 'c':
         case 'C': cost = number * 1.25;
                   cout << "The total cost is $ " << cost << endl;
                   break;
         case 'd':
         case 'D': cost = number * 2.50;
                   cout << "The total cost is $ " << cost << endl;
                   break;
         case 'e':
         case 'E': cout << " Please come again" << endl;
                   break;
         default: cout << "You did not select a proper menu item" << endl; // This code handles invalide inputs.
                  cout << " Try again please" << endl; // This code handles invalide inputs.
      }

   } while (beverage != 'e' && beverage != 'E');
}



// I didn't notice any change to the program. I think chnage that piece of code didn't do anything. I did notice that if I enter BFG as a input the program goes on forever with asking for another input. But I think that happens before and after change that piece of code.