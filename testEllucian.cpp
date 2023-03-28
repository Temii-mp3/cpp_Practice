#include <iostream>
#include <string>
#include <fstream>

void openFile(std::string);

int main(){
    std::string customerData;
    openFile(customerData);
}


void openFile(std::string fileName){
    char yn;
    std::string customerName;

    std::string callbackNumber;
    
    std::string personalEmailAddress;

    std::fstream customerData;

    std::cout << "Enter the file path: ";
    std::cin >> fileName;
    customerData.open(fileName);
    if(customerData.fail()){
        do{
        std::cout << "Error opening file, try again: ";
        std::cin >> fileName;
        customerData.open(fileName);
        }while(customerData.fail());
    }else{
        std::cout << "File opened successfuly!";
        std::cout << "Can i get a good callback number: ";
        getline(std::cin >> std::ws, callbackNumber);
        std::cout << "can i get a personal email address: ";
        getline(std::cin >> std::ws, personalEmailAddress);
        std::cout << "does caller have ID number? ";
        std::cin.get(yn);
        if (yn == 'y'){
                std::cout << "Can i get your ID number: ";
        }else{
            std::cout << "Can i get your first and last name: ";
        }


        
        std::cout << "Enter the name of the customer: ";
        getline(std::cin >> std::ws, customerName);
        customerData << "Caller Name: " << customerName;
    }

    customerData.close();
    std::cout << "Close";
}


