#include <iostream>
#include <iomanip>

int main(){
    double payPerHour,
        hours,
        tax,
        grossPayCheck,
        netPayCheck;
        
    std::cout << std::setprecision (2) << std::fixed;
    
    std::cout << "how much do you make an hour?" << std::endl;
    std::cin >> payPerHour;
    
    std::cout << "how many hours did you work?" << std::endl;
    std::cin >> hours;
    
    grossPayCheck = payPerHour * hours;
    tax = (payPerHour * hours) * 0.25; 
    netPayCheck = grossPayCheck - tax;
    
    
    std::cout << "\nTake home pay calculator"
              << "\n------------------------"
              << "\n$/hr: " << payPerHour 
              << "\n----------------------"
              << "\nTotal hours worked: " << hours
              << "\n----------------------"
              << "\nGross take home pay: " << grossPayCheck
              << "\n----------------------"
              << "\nTax: " << tax
              << "\n----------------------"
              << "\nActual take home pay: " <<netPayCheck << std::endl;

    return 0;
    
    
}