#include <iostream>
#include <cstdlib>

using namespace std;

void printMenu()
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

void printHelp() 
{
	cout << "Help: Your aim is to make money, analyse the market and make bids and offers." << endl;
}

void printMarketStats() 
{
	cout << "Print Exchange Stats. Market looks good." << endl;
}

void enterOffer()
{
	cout << "Make an offer." << endl;
}

void enterBid()
{
	cout << "Make a bid." << endl;
}

void printWallet()
{
	cout << "Print Wallet. Here's your wallet: $xx,xxx" << endl;
}

void goToNextTimeframe()
{
	cout << "Going to next time frame." << endl;
}

void exitProgram()
{
	cout << "Exiting, Goodbye Trader!" << endl;
	// Exit the program
	exit(0);
}

int getUserOption() 
{
	int userOption;
	
	cout << "Type in 1-7" << endl;
	cin >> userOption;
	cout << "You chose: " << userOption << endl;
	return userOption;
}

void processUserOption(int userOption) 
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


int main()
{
	while (true)
	{
		printMenu();
		int userOption = getUserOption();
		processUserOption(userOption);
	}
	return 0;
}