#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int DaysUntilExipiration = rand() % 12; // Generates a random number between 0 and 11
                                            // giving the switch status

    switch (DaysUntilExipiration)
    {
        // when the random number generated is in the range of 6 to 10
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
        cout << "Your subscription will expire soon. Renew now!" << endl;
        break;
        // when the random number generated is in the range of 2 to 5
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Your subscription expires in " << DaysUntilExipiration << "days ." << endl;
        cout << "Renew now and save 10%!" << endl;
        break;
    case 1:
        cout << "Your subscription expires within a day. Renew now and save 20%" << endl;
        break;
    case 0:
        cout << "Your subscription will expire soon. Renew now!." << endl;
        break;

        // when the number is 11  will output the following default setement
    default:
        cout << "You have an active subscription." << endl;
        break;
    }

    return 0;
}