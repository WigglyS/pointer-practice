// PointerPractice.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "iostream"
#include "string"
#include "vector"

using namespace std;

int main()
{
	int* pApointer; //declares a pointer
	int* pScore = 0;// declarea and initialize a pointer
	int score = 1000;
	pScore = &score; //assigns pScore to the memory adress of score\

	cout << "Assinging &score to pScore\n";
	cout << "&score is: " << &score << "\n";
	cout << "pscore is: " << pScore << "\n";
	cout << "score is: " << score << "\n";
	cout << "*pscore is: " << *pScore << "\n\n";

	cout << "adding 500 to score\n";
	  
	score += 500;
	cout << "score is: " << score << "\n";
	cout << "*pscore is: " << *pScore << "\n\n";

	cout << "adding 500 to *pscore\n";

	*pScore += 500; //derefrenceing the pointer
	cout << "score is: " << score << "\n";
	cout << "*pscore is: " << *pScore << "\n\n";

	cout << "Assinging &newScore\n";
	int newScore = 50000;
	pScore = &newScore;
	cout << "&newScore is: " << &newScore << "\n";

	system("pause");

	return 0;
}
