#include <stdio.h>

char* intToChar(int time) {
	static char start[12];
	int pos = 0;
	int length = 0;
	int timeCopy = time;
	int currentDigit;
	
	while (timeCopy > 0) {
		length++;
		timeCopy /= 10;
	}
	
	int divisor = 1;
	for (int i = 1; i < length; ++i) {
		divisor *= 10;
	}
	//time = 11, len = 2, divisor = 10
	for (int i = 0; i < length; ++i) {
		currentDigit = time / divisor;
		time -= currentDigit * divisor;
		currentDigit += 48;
		start[pos] = (char) currentDigit;
		pos++;
		divisor /= 10;
	}
	return start;
}

int main(int argc, char *argv[]) {
	int time = 23410;
	printf("%s", intToChar(time));
	return 1;
}