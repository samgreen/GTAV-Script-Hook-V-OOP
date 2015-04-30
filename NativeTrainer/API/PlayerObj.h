#include "..\..\..\inc\natives.h"
#include "..\..\..\inc\types.h"
#include "..\..\..\inc\enums.h"

#include "..\..\..\inc\main.h"
#include "EntityObj.h"
#include "PedObj.h"


class PlayerObj {

public:

	PlayerObj(Player id);

	static PlayerObj getId();
	static PedObj getPedId();
	static Hash getGroupHash();

	Any getName();
	int getTeam();

	PedObj getPedScriptIndex();

	bool isClimbing();
	bool isRidingTrain();
	bool isPressingHorn();

	bool isSpecialAbilityEnabled();
	bool isSpecialAbilityActive();

	bool getAimedEntity(Entity *entity);

	int getWantedLevel();
	int getWantedLevelThreshold();
	int getGroup();

	float getWantedLevelRadius();
	bool isWantedLevelGrey();
	
	void setTeam(int team);

	void toggleIgnorePlayer(bool b1);
	void togglePoliceIgnorePlayer(bool b1);

	void setWantedLevel(int wantedLevel);
	void setWantedLevelDifficulty(float difficulty);
	void resetWantedLevelDifficulty();
	void giveAchievement(int index);

	void clearWantedLevel();

	// Returns the handle of this player.
	Player getHandle() { return playerId; }

private:

	Player playerId;

};