#include <iostream>

int main()
{
	while (true) 
	{
		// 1 print help
		std::cout << "1: Print Help" << std::endl;
		// 2 print exchange stats
		std::cout << "2: Print Exchange Stats" << std::endl;
		// 3 make an offer
		std::cout << "3: Make an offer" << std::endl;
		// 4 make a bid
		std::cout << "4: Make a bid" << std::endl;
		// 5 print wallet
		std::cout << "5: Print Wallet" << std::endl;
		// 6 continue
		std::cout << "6: Continue" << std::endl;
		// 7 exit
		std::cout << "7: Exit" << std::endl;


		std::cout << "=============" << std::endl;
		std::cout << "Type in 1-7" << std::endl;

		int userOption;
		std::cin >> userOption;
		std::cout << "You chose: " << userOption << std::endl;

		if (userOption == 0) // bad input
		{
			std::cout << "Invalid choice, choose 1-7." << std::endl;
		}
		if (userOption == 1)
		{
			std::cout << "Help: Your aim is to make money, analyse the market and make bids and offers." << std::endl;
		}
		if (userOption == 2)
		{
			std::cout << "Print Exchange Stats. Market looks good." << std::endl;
		}
		if (userOption == 3)
		{
			std::cout << "Make an offer" << std::endl;
		}
		if (userOption == 4)
		{
			std::cout << "Make a bid." << std::endl;
		}
		if (userOption == 5)
		{
			std::cout << "Print Wallet. Here's your wallet: $xx,xxx" << std::endl;
		}
		if (userOption == 6)
		{
			std::cout << "Going to next time frame." << std::endl;
		}
		if (userOption == 7)
		{
			std::cout << "Exiting, Goodbye Trader!" << std::endl;

			break;
		}
	}

	return 0;
}