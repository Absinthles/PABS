// OwnGameMode.h

#ifndef _OWNGAMEMODE_h
#define _OWNGAMEMODE_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif

#include "GameModeBase.h"

class OwnGameMode: public GameModeBase
{
private:
	bool state[5];
	int status;

	void ResetState();

public:
	OwnGameMode();
	~OwnGameMode();

	virtual void PlayerButtonPush(int playerNumber);
	virtual void AdminButtonPush(int buttonNumber);
};
#endif

