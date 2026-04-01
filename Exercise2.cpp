#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12;
    // case 10 to case 6 must print on console "your subscription will exoire soon. Renew now!"
    switch(daysUntilExpiration) {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
    //case 5 to case 2 must print on console "Your subscription expires in daysUntilExpiration days and Renew now and save 10%!"
        case 5:
        case 4:
        case 3:
        case 2:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
            //case 1 must print " Your subscription expires within a day!" and "Renew now and save 20%!"
        case 1:
            cout << " Your subscription expires within a day!"<< endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 0:
            cout << "Your subscription has expired." << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
            break;
    }
    
    return 0;
}