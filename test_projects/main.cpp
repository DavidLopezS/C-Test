#include <iostream>

std::string reverseString(const std::string &string){
    return std::string(string.rbegin(), string.rend());
}

uint64_t factorialCaluclation(int number){
    if (number == 0){
        std::cout << "0 is not a valid number" << std::endl;
        return 1;
    }
    uint64_t previous = 1;
    for(int i = 1; i <= number; ++i)
        previous *= i;

    return previous;
}

bool isPalindrome(const std::string &palindrome){
    std::string checker = std::string(palindrome.rbegin(), palindrome.rend());
    if(palindrome == checker)
        return true;
    else 
        return false;
}


int videogameManager(){
	int choice = -1;
	while (choice == -1) {
		std::cout << "\n1) Add new videogame\n"
			"2) List videogames by ID\n"
			"3) Search videogame\n"
			"4) List videogames ordered by genre\n"
			"5) List videogames ordered by name\n"
			"6) List videogmaes ordered by time played\n"
			"7) List videogames ordered by studio name\n"
			"8) Add time played\n"
			"9) Add achievements\n"
			"10) Delete videogame from list\n"
			"11) Back\n"
			"12) Exit\n"
			"Enter your choice:";
		std::cin >> choice;
		if (std::cin.fail()) {
			std::cout << "That's not a number bro... :(" << std::endl;
			break;
		}

		if (!(1 <= choice && choice <= 13)) {
			std::cout << "\nInvalid choice. Try again!\n";
			choice = -1;
		}
	}
	return choice;
}

int menu(){
	int choice = -1;
	while (choice == -1) {
		std::cout << "\n1) Exercice 1\n"
			"2) Exercice 2\n"
			"3) Exercice 3\n"
			"4) Exit\n"
			"Enter your choice:";
		std::cin >> choice;
		if (std::cin.fail()) 
			std::cout << "That's not a number bro... :(" << std::endl;
		if (!(1 <= choice && choice <= 4)) {
			std::cout << "\nInvalid choice. Try again!\n";
			choice = -1;
		}
	}
	return choice;
}

void run() {
    std::string myString;
    int number;
    std::string palindrome;

	while (true) {
		int choice = menu();
		switch (choice) {
			case 1:
                //Exercice 1
                std::cout << "Exercice 1. Reverse a string. Write your string: ";
                std::cin.ignore();
                std::getline(std::cin, myString);
                std::cout << reverseString(myString) << std::endl;
				break;
			case 2:
				//Exercice 2
                std::cout << "Exercice 2. Calculate the factorial of a number. Write your number: ";
                std::cin >> number;
                std::cout << factorialCaluclation(number) << std::endl;
                break;
			case 3:
				//Exercice 3
                std::cout << "Exercice 3. Is a palindrome? Write your palindrome: ";
                std::cin.ignore();
                std::getline(std::cin, palindrome);
                if (isPalindrome(palindrome)){ 
                    std::cout << "Is a palindrome" << std::endl;
                    break;
                }
                else{
                    std::cout << "Is not palindrome" << std::endl;
                    break;
                }
			case 4:
				std::cout << "See ya!" << std::endl;
				return;
			default:
				break;
		}
	}
}


int main (){

    run();

    return 0;
}