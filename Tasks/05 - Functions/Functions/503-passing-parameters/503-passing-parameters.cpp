#include <iostream>
#include <string>

using namespace std;

void displayLineOfStars(int stringLen)
{
	for (unsigned int n = 0; n  < (stringLen + 4); n++) {
		cout << "*";
	}
	cout << endl;
}
//std:: string getNewMessage() {
//	std::string newmessage;
//
//	std:cout <"nter your message"
//	std: Getline(std::cin, newmessage)
//	return newmessage
//}

std::string getNewMessage()
{
	std:: string newMessage;

	std:: cout << "Enter your message";
	//cin >> newMessage;
	std::getline(std::cin, newMessage);
	
	return newMessage;

}
//void displayWithinBanner(string newMessage)
//{
//	//Code here	
//	cin >> newMessage;
//}

int main()
{
	//const string message = "Welcome to Computer Science";
	string message = getNewMessage();

	//Get the length of the string
	int L = message.length();			//L is now a LOCAL variable


	//Write the banner above
	displayLineOfStars(L);

	cout << "* ";				//Leading *
	cout << message;			//Message

	cout << " *" << endl;		//Trailing *

	//Write the banner below
	displayLineOfStars(L);

	//Tell the calling shell all is well
	return 0;
}