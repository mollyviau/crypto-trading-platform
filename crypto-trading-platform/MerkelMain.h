#pragma once

class MerkelMain
{
	public: 
		/** MerkelMain Constructor */
		MerkelMain();
		
		// function prototypes
		/** Call this to start the sim */
		void init();
	private:
		/** Call this to print the menu */
		void printMenu();
		/** Call this to print a help message */
		void printHelp();
		/** Call this to print the market stats */
		void printMarketStats();
		/** Call this to enter an offer */
		void enterOffer();
		/** Call this to enter a bid */
		void enterBid();
		/** Call this to print the wallet */
		void printWallet();
		/** Call this to go to next timeframe */
		void goToNextTimeframe();
		/** Call this to exit program */
		void exitProgram();
		/** Call this to get the users selection */
		int getUserOption();
		/** Call this to process the users selection */
		void processUserOption(int userOption);

};