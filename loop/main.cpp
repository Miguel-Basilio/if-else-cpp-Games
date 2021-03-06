#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Class 94818 CMPR120\n";
    cout <<"Instructor : Joel Kirscher\n";
    cout << "Student : Miguel Basilio\n";
    cout << "Enviroment : Xcode\n";
    cout<<endl<<endl;
    cout<<"==================================================================="<<endl;
    cout<<endl<<endl;
   
    int userMonth;
    int userDay;
    int userYear;
    
    
    cout<< "Following this format MM/DD/YY choose a Month, Day and Year. If the year is the product of the month and the day, the date is considered as a 'Magic Date'" <<endl;
    cout<<endl<<endl;
    cout << "Enter Month "<<endl;
    cin >> userMonth;
    cout << "Enter a day"<<endl;
    cin >> userDay;
    cout << "Enter a year"<< endl;
    cin >> userYear;
   
    int magicDate = userDay * userMonth; //multiplies the user data to compare the value total with the year entered
    if (magicDate != userYear)
    {
        cout << "Your Date is not Magic"<< endl;
    }
    else
    {
        cout << "Your date is magic" << endl;
    }
    cout << endl << endl;
    cout<<"==================================================================="<<endl;
    cout<<"==================================================================="<<endl;
    
    cout <<"\nMixing Primary Colors: Red, Blue and Yellow to create a new color\n"<<endl;
    
    // Variables
     string color_1,
            color_2;

     // Ask user for colors
     cout << endl;
     cout << "Enter 1st primary color : ";
     cin >> color_1;
     cout << "The 2nd primary color is: ";
     cin >> color_2;

     // Format line break
     cout << endl;

     // Error checking, calculation, & Display
     if (color_1 == "red" || color_1 == "Red")
     {
         if (color_2 == "blue" || color_2 == "Blue")
         {
             cout << color_1 << " & ";
             cout << color_2 << " = purple.\n";
         }
         else if (color_2 == "yellow" || color_2 == "Yellow")
         {
             cout << color_1 << " & ";
             cout << color_2 << " = Orange.\n";
         }
     }
     else if (color_1 == "blue" || color_1 == "Blue")
     {
         if (color_2 == "red" || color_2 == "Red")
         {
             cout << color_1 << " & ";
             cout << color_2 << " = purple.\n";
         }
         else if (color_2 == "yellow" || color_2 == "Yellow")
         {
             cout << color_1 << " & ";
             cout << color_2 << " = green.\n";
         }
     }
     else if (color_1 == "yellow" || color_1 == "Yellow")
     {
         if (color_2 == "red" || color_2 == "Red")
         {
             cout << color_1 << " & ";
             cout << color_2 << " = orange.\n";
         }
         else if (color_2 == "blue" || color_2 == "Blue")
         {
             cout << color_1 << " & ";
             cout << color_2 << " = green.\n";
         }
     }
     else
     {
         cout << "\ntry again.\n";
         cout << "Remember a primary colors are: Red, Blue, or Yellow.\n";
     }

    
     cout << endl << endl;
    cout<<"==================================================================="<<endl;
    cout<<"==================================================================="<<endl;
    cout<<endl<<endl;
    
    cout<<"Money game"<<endl;
    
    const double DOLLAR = 1.00;
    
    double userPenny = 0.0;
    double userNickel = 0.0;
    double userDime = 0.0;
    double userQuater = 0.0;
    
    cout << "This game is about reaching the amount of $1.00 you need to enter a quantity of pennies, nickels, dimes and quarters in order to reach the $1.00 if you get it right you win!" << endl;
    
    
    cout<< "Enter quantity of pennies"<< endl;
    cin >> userPenny;
    double penny = userPenny/100;//divides the user input as soon as its entered
    
    cout << "Enter quantity of Nickels" << endl;
    cin >> userNickel;
    double nickel = userNickel/20;
    cout << "Enter quantity of Dimes" << endl;
    cin >> userDime;
    double dime = userDime/10;
    cout << "Enter quantity of Quarters" << endl;
    cin>> userQuater;
    double quarter = userQuater/4;
    double userGuess = penny + nickel + dime + quarter;//adds all the user inputs to a single variable
    
    cout<<endl<<endl;
    //breaking down all the amounts entered
    cout << "You enter:" <<endl;
    cout << "Pennies:  "<<penny <<endl;
    cout << "Nickels:  "<< nickel <<endl;
    cout << "Dimes:    "<< dime <<endl;
    cout << "Quarters: "<< quarter <<endl;
    
    cout << "Your Total is: " << userGuess << endl;
    
    cout<<endl<<endl;
    //conditions to check if the amount of $1.00 was right or wrong
    if (userGuess == DOLLAR)
    {
        cout << "Your guess is correct!\n" << endl;
    }
    else if (userGuess >= DOLLAR)
    {
        cout << "Your guess is: $"<<userGuess - DOLLAR << " more than $1.00\n" << endl;
    }
    else if (userGuess <= DOLLAR)
    {
        cout << "Your total is not enough you where short: $" << DOLLAR - userGuess <<endl;
    }
    else
        cout << "Try again\n" << endl;
    cout <<endl<<endl;
    
    
    return 0;
    
}
