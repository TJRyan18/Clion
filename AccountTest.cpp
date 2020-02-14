// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

using namespace std;

int main() 
{
   Account Account1{"Jane Green", 50,0.07};
   Account Account2{"John Blue", 7,0.07};

   // display initial balance of each object
   cout << "account1: " << Account1.getName() << " balance is $"
      << Account1.getBalance();
   cout << "\naccount2: " << Account2.getName() << " balance is $"
      << Account2.getBalance();

   cout << "\n\nEnter deposit amount for account1: "; // prompt
   int depositAmount;
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account1 balance" << endl;
   Account1.deposit(depositAmount); // add to account1's balance


   // display balances
   cout << "\n\naccount1: " << Account1.getName() << " balance is $"
      << Account1.getBalance();
   cout << "\naccount2: " << Account2.getName() << " balance is $"
      << Account2.getBalance();

   cout << "\n\nEnter deposit amount for account2: "; // prompt
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account2 balance" << endl;
   Account2.deposit(depositAmount); // add to account2 balance


   cout << "\n\nEnter withdrawal amount for account 1";
   int withdrawAmount;
   cin >> withdrawAmount;
   cout << "Withdrawing " << withdrawAmount <<" from account1 balance" << endl;
   Account1.withdraw(withdrawAmount);

   cout << "New Balance: ";
   cout << "\n\nEnter withdrawal amount for account 2: ";
   cin >> withdrawAmount;
   cout << "Withdrawing " << withdrawAmount <<" from account2 balance" << endl;
   Account2.withdraw(withdrawAmount);

   //compounder
   cout << "Compounding Account 1..." << endl;
   Account1.compound();
   cout << "Compounding Account 2..." <<endl;
    Account2.compound();

   // display balances
   cout << "\n\naccount1: " << Account1.getName() << " balance is $"
      << Account1.getBalance();
   cout << "\naccount2: " << Account2.getName() << " balance is $"
      << Account2.getBalance() << endl;
} 

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
