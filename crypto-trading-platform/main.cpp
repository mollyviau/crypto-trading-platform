#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	while (true) 
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
		cout << "Type in 1-7" << endl;

		int userOption;
		cin >> userOption;
		cout << "You chose: " << userOption << endl;

		switch (userOption) {
		case 0: 
			cout << "Invalid choice, choose 1-7." << endl;
			break;
		case 1:
			cout << "Help: Your aim is to make money, analyse the market and make bids and offers." << endl;
			break;
		case 2:
			cout << "Print Exchange Stats. Market looks good." << endl;
			break;
		case 3:
			cout << "Make an offer." << endl;
			break;
		case 4:
			cout << "Make a bid." << endl;
			break;
		case 5:
			cout << "Print Wallet. Here's your wallet: $xx,xxx" << endl;
			break;
		case 6:
			cout << "Going to next time frame." << endl;
			break;
		case 7:
			cout << "Exiting, Goodbye Trader!" << endl;
			// Exit the program
			exit(0);
			break;
		default:
			cout << "Invalid choice" << endl;
			

		}
	}

	return 0;
}