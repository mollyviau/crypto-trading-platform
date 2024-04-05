#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
	while (true) 
	{
		// 1 print help
		cout << "1: Print Help" << std::endl;
		// 2 print exchange stats
		cout << "2: Print Exchange Stats" << std::endl;
		// 3 make an offer
		cout << "3: Make an offer" << std::endl;
		// 4 make a bid
		cout << "4: Make a bid" << std::endl;
		// 5 print wallet
		cout << "5: Print Wallet" << std::endl;
		// 6 continue
		cout << "6: Continue" << std::endl;
		// 7 exit
		cout << "7: Exit" << std::endl;


		std::cout << "=============" << std::endl;
		std::cout << "Type in 1-7" << std::endl;

		int userOption;
		std::cin >> userOption;
		std::cout << "You chose: " << userOption << std::endl;

		switch (userOption) {
		case 0: 
			std::cout << "Invalid choice, choose 1-7." << std::endl;
			break;
		case 1:
			std::cout << "Help: Your aim is to make money, analyse the market and make bids and offers." << std::endl;
			break;
		case 2:
			std::cout << "Print Exchange Stats. Market looks good." << std::endl;
			break;
		case 3:
			std::cout << "Make an offer." << std::endl;
			break;
		case 4:
			std::cout << "Make a bid." << std::endl;
			break;
		case 5:
			std::cout << "Print Wallet. Here's your wallet: $xx,xxx" << std::endl;
			break;
		case 6:
			std::cout << "Going to next time frame." << std::endl;
			break;
		case 7:
			std::cout << "Exiting, Goodbye Trader!" << std::endl;
			// Exit the program
			exit(0);
			break;
		default:
			std::cout << "Invalid choice\n";
			
		}
	}

	return 0;
}