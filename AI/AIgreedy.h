#ifndef AIGREEDY_H
#define AIGREEDY_H

#include <string>
#include <iostream>
#include "AIgeneric.h"

using namespace std;

class AIgreedy : public AIgeneric {
    public:
	AIgreedy();
	string name;
	virtual int getNextMove(const int*, const int &);
	virtual int pawnPromotion(const int*, const int &);
    private:
	double computeValue(const int & loc);
};

#endif
