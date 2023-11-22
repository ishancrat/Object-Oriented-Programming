/*
 * EBS.h
 *
 *  Created on: 17-Aug-2023
 *      Author: Ishan
 */

#ifndef EBS_H_
#define EBS_H_

class EBS {
private:
	float units;
	float amount=0;
public:
	EBS(float);
	float amtDue();
};

#endif /* EBS_H_ */
