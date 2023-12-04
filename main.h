#ifndef MAIN_H
#define MAIN_H
#include "images/fall.h"
#include "images/leftStep.h"
#include "images/rightStep.h"
#include "images/leftDown.h"
#include "images/rightDown.h"
#include "images/trip.h"
#include "images/startBackground.h"
#include "images/igloo.h"
#include "gba.h"

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

enum pengyState {
	RIGHTDOWN,
	LEFTDOWN,
};

int speed;

struct player {
	int leftCol;
	int topRow;
	int speed;
	int height;
	int width;
	int pengyWalkState;
	enum pengyState state;
};

struct enemy {
	int leftCol;
	int topRow;
};

struct currentEnemies {
	int numEnemies;
	int maxNumEnemies;
	int speed;
	int ballsLeftTillSpeedup;
	int ballsLeftUntilIncreasedFreq;
	int timeBetween;
	int timeFromLast;
	int topLayerTopRow;
	int topLayerLeftCol;
	int botLayerTopRow;
	int botLayerLeftCol;
	int whereAddNextEnemy;
	int width;
	int height;
	struct enemy e[10];
};

#endif
