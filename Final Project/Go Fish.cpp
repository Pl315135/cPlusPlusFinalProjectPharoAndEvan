//Final Project, Go Fish 
//Authors: Evan J. Raker & Phero Luong
//Date: 10/11/2018
#include "Header.h"
#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;
using namespace std::this_thread;

string cardDeck[4][13] = { { "Ace of Spades", "2 of Spades", "3 of Spades", "4 of Spades", "5 of Spades", "6 of Spades", "7 of Spades", "8 of Spades", "9 of Spades", "10 of Spades", "Jack of Spades", "Queen of Spades", "King of Spades" },
{ "Ace of Clubs", "2 of Clubs", "3 of Clubs", "4 of Clubs", "5 of Clubs", "6 of Clubs", "7 of Clubs", "8 of Clubs", "9 of Clubs", "10 of Clubs", "Jack of Clubs", "Queen of Clubs", "King of Clubs" },
{ "Ace of Hearts", "2 of Hearts", "3 of Hearts", "4 of Hearts", "5 of Hearts", "6 of Hearts", "7 of Hearts", "8 of Hearts", "9 of Hearts", "10 of Hearts", "Jack of Hearts", "Queen of Hearts", "King of Hearts" },
{ "Ace of Diamonds", "2 of Diamonds", "3 of Diamonds", "4 of Diamonds", "5 of Diamonds", "6 of Diamonds", "7 of Diamonds", "8 of Diamonds", "9 of Diamonds", "10 of Diamonds", "Jack of Diamonds", "Queen of Diamonds", "King of Diamonds" } };

string shuffledDeck[52] = { ""};

string playerHand[39] = {};

string botHand[39] = {};

int turn = 0;


int goFish() {

	//rules();

	cardShuffle();

	for (int i = 0; i <= 6; i++) {
		drawCard();
		cout << playerHand[i];
	}

	system("puase");
	return 0;
}

void rules(){

	cout << "WELCOME TO GO FISH." << endl;

}

void cardShuffle() {

	cout << "Cards shuffling \n please wait..."<< endl;

	for (int i = 0; i <= 51; i++) {
		int randSuit;
		int randRank;
		srand(time(NULL));
		randSuit = rand() % 4;
		randRank = rand() % 13;
		
		if (cardDeck[randSuit][randRank] == "drawn") {
			i--;
		}
		else {
			shuffledDeck[i] = cardDeck[randSuit][randRank];
			cardDeck[randSuit][randRank] = "drawn";
		}
		
		//sleep_for(milliseconds(250));
	}

	cout << "Deck has been Shuffled"<< endl;
	sleep_for(seconds(1));

	system("pause");
}

void drawCard() {
	for (int i = 0; i <= 51; i++) {
		int x = 0;
		for (int i = 0; i <= 39; i++) {

			if (playerHand[i] == "") {
				i = x;
				i + 39;
			}
			else {

			}
		}
		
		if (shuffledDeck[i] == "drawn") {
			
		}
		else {
			playerHand[x] = shuffledDeck[i];
			shuffledDeck[i] = "drawn";
			i + 51;
		}
		cout << playerHand[i];
	}
}

void player() {

}

void bot() {

}
	
