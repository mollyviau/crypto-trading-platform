#pragma once

class MerkelMain
{
	public: 
		// constructor
		MerkelMain();
		void init();
		// function prototypes
		void printMenu();
		void printHelp();
		void printMarketStats();
		void enterOffer();
		void enterBid();
		void printWallet();
		void goToNextTimeframe();
		void exitProgram();
		int getUserOption();
		void processUserOption(int userOption);

};