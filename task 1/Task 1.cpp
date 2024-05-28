
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // generating random numbers between 0 and 11
    srand(time(0));
    int DaysUntilExpiration = rand() % 12;

    // generating the results based on the random number
    if (DaysUntilExpiration <= 10)
    {
        cout << " Your subscription will expire soon. Renew now! " << endl;
    }
    else if (DaysUntilExpiration <= 5)
    {
        cout << " Your subscription expires in " << DaysUntilExpiration << " Renew now and save 10%." << endl;
    }
    else if (DaysUntilExpiration <= 1)
    {
        cout << " Your subscription expires within a day. Renew now and save 20% " << endl;
    }
    else if (DaysUntilExpiration == 0)
    {
        cout << " Your subscription has expired!! " << endl;
    }
    else

        cout << "You have an active subscription." << endl;

    return 0;
}
