#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <time.h>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;

class PassGen{
	public:
		void displayMessage(){
			int passLenght;
			int numOfPasswords;
			char * filename = new char;
			cout << "Enter password lenght: ";
			cin >> passLenght;
			cout << "Enter numbers of passwords: ";
   			cin >> numOfPasswords;
   			cout << "Passwords will be generated: " << numOfPasswords << endl;
   			cout << endl;
   			cout << "Enter a file name to save:";
   			cin >> filename;
   			
   			std::ofstream outFile(filename);
   			
   			for(int k = 0; k < numOfPasswords; k++){
   				for(int i = 0; i < passLenght; ++i){
   					numOfChars(passLenght);
   					passGenerator(passLenght);
   					outFile << password [i];
   				}
   				outFile << endl;
   			}
   			outFile.close();
   			cout << "Passwords are successfully generated and written to a file: " << filename<< "" << endl;
   		}
   		
   		//generating
   		void passGenerator(int passLenght){
   			password = new char [passLenght];
   			
   			for (int i = 0; i < numOfNumbers; ++i){
   				password[i] = char(rand() % 10 + 48);
   			}
   			for(int i = 0; i < numOfNumbers + numOfBigChars; ++i){
   				password[i] = char(rand() % 26 + 65);
   			}
   			for(int i = numOfNumbers + numOfBigChars; i < passLenght; ++i){
   				password[i] = char(rand() % 26 + 97);
   			}
   			std::random_shuffle(password, password + passLenght);
   			}
   			
   			void numOfChars(int passLenght){
   				numOfSmallChars = rand() % passLenght;
   				int charRandEnd = passLenght - numOfSmallChars;
   				numOfBigChars = rand() % charRandEnd;
   				numOfNumbers = passLenght - numOfSmallChars - numOfBigChars;
   			}
   			
   			private:
   				int numOfSmallChars;
   				int numOfBigChars;
   				int numOfNumbers;
   				char * password;
   	
};
//launch
  				int main(){
	srand(time(NULL));
	PassGen * pass = new PassGen;
	pass->displayMessage();
	return 0;
}
