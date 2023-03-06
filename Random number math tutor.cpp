#include <iostream>
#include <random>
 
int main(){

    //function prototypes
    void addition(int, int);
    void subtraction(int, int);
    void division(int, int);
    void multiplication(int, int);


     //Defining and setting up random engine 
     std::random_device myEngine;
     std::uniform_int_distribution<int> randomInt(0,1000);
     
     const int choice1 = 1,
          choice2 = 2,
          choice3 = 3,
          choice4 = 4,
          quit = 5;
     
     int choice;
     do{                                                                                            
                     int num1 = randomInt(myEngine); //inserts random number to num1                
                     
                     int num2 = randomInt(myEngine); //inserts random number to num2
         
         std::cout << "\n1-Addition"
                   << "\n2-Subtraction"
                   << "\n3-Multiplication"
                   << "\n4-Division"
                   << "\n5-Quit the program" 
                   << "\nPick a choice: "; 
                   std::cin >> choice; 
                   
                while (choice < 1 || choice > 5){
                    std::cout << "INVALID INPUT";
         std::cout << "\n1-Addition"
                   << "\n2-Subtraction"
                   << "\n3-Multiplication"
                   << "\n4-Division"
                   << "\n5-Quit the program" 
                   << "\nPick a choice: "; 
                   std::cin >> choice;                     
                }
        if (choice != quit){
            switch (choice){
                case 1:{
                    addition(num1, num2);
                    break;
                }
                
                case 2:{
                    subtraction(num1, num2);
                    break;
                }


                case 3:{
                    multiplication(num1, num2);
                    break;
                }

                case 4:{
                    division(num1, num2);
                    break;
                }
                
            }
        }
     }while (choice != quit);                                                                               

        return 0;
}

    //function definitions
    void addition(int num1, int num2){
        std::cout << num1 << " + " << num2 << " = " << "? \n";
        int answer = num1 + num2;
        std::cout << "Answer the question: ";
        int input;
        std::cin >> input;
        if (input == answer){
        std::cout << "Congrats, you got it right!!";
         }else{
        std::cout<<  "aw you got it wrong!\n" << "Answer is: " << answer;
        }
    }



    void subtraction(int num1, int num2){
        std::cout << num1 << " - " << num2 << " = " << "? \n";
        int answer = num1 - num2;
        std::cout << "Answer the question: ";
        int input;
        std::cin >> input;
        if (input == answer){
        std::cout << "Congrats, you got it right!!";
         }else{
        std::cout<<  "aw you got it wrong!\n" << "Answer is: " << answer;
        }
    }



    void multiplication(int num1, int num2){
        std::cout << num1 << " x " << num2 << " = " << "? \n";
        int answer = num1 * num2;
        std::cout << "Answer the question: ";
        int input;
        std::cin >> input;
        if (input == answer){
        std::cout << "Congrats, you got it right!!";
         }else{
        std::cout<<  "aw you got it wrong!\n" << "Answer is: " << answer;
        }
    }


    void division(int num1, int num2){
        std::cout << num1 << " / " << num2 << " = " << "? \n";
        int answer = num1 / num2;
        std::cout << "Answer the question, round to last integer: ";
        int input;
        std::cin >> input;
        if (input == answer){
        std::cout << "Congrats, you got it right!!";
         }else{
        std::cout<<  "aw you got it wrong!\n" << "Answer is: " << answer;
        }
    }
     