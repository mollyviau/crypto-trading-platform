#include "MerkelMain.h"
#include <iostream>

using namespace std;


MerkelMain::MerkelMain()
{

}

void MerkelMain::init()
{
	int input;
	while (true)
	{
		printMenu();
		input = getUserOption();
		processUserOption(input);
	}
}

void MerkelMain::printMenu()
{
	// 1 print help
	cout << "1: Print Help" << endl;
	// 2 print exchange stats
	cout << "2: Print Exchange Stats" << endl;
	// 3 make an offer
	cout << "3: Make an offer" << endl;
	// 4 make a bid
	cout << "4: Make a bid" << endl;
	// 5 print wallet
	cout << "5: Print Wallet" << endl;
	// 6 continue
	cout << "6: Continue" << endl;
	// 7 exit
	cout << "7: Exit" << endl;

	cout << "=============" << endl;
}

/** print help message for users */
void MerkelMain::printHelp()
{
	cout << "Help: Your aim is to make money, analyse the market and make bids and offers." << endl;
}

void MerkelMain::printMarketStats()
{
	cout << "Print Exchange Stats. Market looks good." << endl;
}

void MerkelMain::enterOffer()
{
	cout << "Make an offer." << endl;
}

void MerkelMain::enterBid()
{
	cout << "Make a bid." << endl;
}

void MerkelMain::printWallet()
{
	cout << "Print Wallet. Here's your wallet: $xx,xxx" << endl;
}

void MerkelMain::goToNextTimeframe()
{
	cout << "Going to next time frame." << endl;
}

/** exit the program */
void MerkelMain::exitProgram()
{
	cout << "Exiting, Goodbye Trader!" << endl;
	exit(0);
}

int MerkelMain::getUserOption()
{
	int userOption;

	cout << "Type in 1-7" << endl;

	// Loop until valid input is provided
	while (!(cin >> userOption) || userOption < 1 || userOption > 7)
	{
		cout << "Invalid input. Please type in a number between 1 and 7: ";
		cin.clear(); // Clear the error flag
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear the input buffer
	}
	cout << "You chose: " << userOption << endl;
	return userOption;
}

void MerkelMain::processUserOption(int userOption)
{
	switch (userOption) {
	case 1:
		printHelp();
		break;
	case 2:
		printMarketStats();
		break;
	case 3:
		enterOffer();
		break;
	case 4:
		enterBid();
		break;
	case 5:
		printWallet();
		break;
	case 6:
		goToNextTimeframe();
		break;
	case 7:
		exitProgram();
		break;
	default:
		cout << "Invalid choice" << endl;
	}
}
