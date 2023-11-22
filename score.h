/*
 * score.h
 *
 *  Created on: 25-Aug-2023
 *      Author: Ishan
 */
#include "student.h"
#ifndef SCORE_H_
#define SCORE_H_
#include <string>
using namespace std;

class score:public student {
public:
	void getScore();
};

#endif /* SCORE_H_ */
