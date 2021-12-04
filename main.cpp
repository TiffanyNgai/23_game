//
//  Tiffany Ngai
//  20900617
//  121 Review activity5
//
//  I hereby declare that this code, submitted for credit for the course SYDE121, is a product of my own efforts. This coded solution has not been plagiarized from other sources and has not been knowingly plagiarized by others.
//
//  Project: 23 game
//  Due Date: 26/10/2020

/*
 Entered numbers that make the computer win and lose to ensure the program is working and the current number of sticks will not go lower than zero, e.g. the computer wins when 3,3,3,3,3 is entered; the computer loses when 2,2,2,2,2,2 is entered
 */
#include <iostream>
using namespace std;

//function that allows the user to play the 23 game with the computer
//input: input_stick = number of sticks that the user inputted
//output: echoing, current_stick = number of sticks left, computer_stick = number of sticks the computer taken
void the_23_game() {
    
    //declare and initate variables
    int input_stick;
    int computer_stick = 0; //the number of sticks taken by the computer
    int const NUMBER_OF_STICK = 23;
    int current_stick = NUMBER_OF_STICK;
    
    //get input from user
    cout << "HELLO!! WELCOME TO 23" << endl << "Enter an integer from 1, 2, or 3: ";
    cin >> input_stick;
    
    //get input from user until a valid number is obtained
    while (input_stick < 1 or input_stick > 3) {
        cout << "Please enter a valid number: ";
        cin >> input_stick;
    }

    //echoing
    cout << "You took " << input_stick << " stick" << endl;
    
    //calculate the number of sticks remain after the user took the sticks
    current_stick = current_stick - input_stick;
    
    while (current_stick > 0) {
        
        //output the current number of sticks after the user's move
        cout << "There are " << current_stick << " sticks left" << endl;
        
        //calculate the number of sticks taken by the computer
        if (current_stick > 4) {
            computer_stick = 4 - input_stick;
        }
        else if (current_stick == 4) {
            computer_stick = 3;
        }
        else if (current_stick == 3) {
            computer_stick = 2;
        }
        else if (current_stick == 2) {
            computer_stick = 1;
        }

        
        //tells the user the number of sticks taken by the computer
        cout << "Miss Computer took " << computer_stick << " sticks" << endl;
        
        //calculate the number of sticks remain after the computer took the sticks
        current_stick = current_stick - computer_stick;
        
        //output the current number of sticks after the computer's move
        cout << "There are " << current_stick << " sticks left" << endl;
        
        //output the result
        if (current_stick == 1) {
            cout << "Yay, I won!" << endl;
            break;
        }
        else if (current_stick == 0) {
            cout << "Hey, you won!" << endl;
            break;
        }
        
        //asking the user to input another number
        cout << "Enter another integer from 1, 2, or 3: ";
        cin >> input_stick;
        
        //get input from user until a valid number is obtained
        while (input_stick < 1 or input_stick > 3) {
            cout << "Please enter a valid number: ";
            cin >> input_stick;
        }
        
        //echoing
        cout << "You took " << input_stick << " sticks" << endl;
        
        //calculate the number of sticks remain after the user took the sticks
        current_stick = current_stick - input_stick;
        
        //output the result
        if (current_stick == 1) {
            cout << "Hey, you won!" << endl;
            break;
        }
        else if (current_stick == 0) {
            cout << "Yay, I won!" << endl;
            break;
        }
        
    }
}

int main() {

    the_23_game();
    
    return 0;
}
