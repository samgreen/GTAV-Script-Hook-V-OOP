#include "..\..\..\inc\natives.h"
#include "..\..\..\inc\types.h"
#include "..\..\..\inc\enums.h"

#include "..\..\..\inc\main.h"
#include "VehicleObj.h"

class PedObj {

public:

	struct FacialAnimations {
		char *name;
	} textures[6] = {
			{ "pain_1" },
			{ "pain_2" },
			{ "pain_3" },
			{ "pain_4" },
			{ "pain_5" },
			{ "pain_6" },
			{ "fail_face" }
	};

	PedObj(Ped id);

	/*
		Creates a random ped at the specified coordinates.
	*/
	static void createRandomPed(float x, float y, float z);

	/*
		Creates a ped with the specified type, hash, coordinates and heading.
	*/
	static Ped createPed(int type, int pedHash, float x, float y, float z, float heading, bool networkHandle, bool returnPedHandle);

	/*
		Deletes the specified ped.
	*/
	static void deletePed(Ped *handle);
	static float clonePed(int pid, float heading, bool networkHandle, bool createPedHandle);

	/*
		Warps this PedObj into the specified VehicleObj within the "index" seat.
	*/
	void setInVehicle(VehicleObj vehicle, int index);

	/*
		Returns the amount of money this ped has in its pockets.
	*/
	int getMoney();

	/*
		Sets the amount of money this ped has in its pockets.
	*/
	void setMoney(int money);

	void addArmor(int amount);
	void setArmor(int amount);
	int getArmor();

	void knockOffVehicle();
	void revive();
	void resurrect();
	void explodeHead(Hash weaponHash);
	void clearBlood();

	bool isModel(Hash modelHash);

	bool isPlayer();
	bool isStopped();
	bool isMale();
	bool isHuman();

	bool inGroup();

	bool isArmed();
	void setWeaponTint(Hash weaponHash, int tintIndex);
	void setCurrentWeapon(Hash weaponHash, bool equipNow);
	void setInfiniteAmmo(Hash weaponHash, bool toggle);
	void removeAllWeapons(bool toggle);
	void removeWeapon(Hash weaponHash);
	void reloadWeapon();

	bool isFalling();
	bool isJumping();
	bool isClimbing();
	bool isDiving();
	bool isDucking();
	bool isJacking();
	bool isDoingDriveby();
	bool isJacked();
	bool isStunned();
	bool isFleeing();
	bool isSwimming();
	bool isSwimmingUnderWater();
	bool isProne();

	bool isOnMount();
	bool isOnVehicle();
	bool isOnVehicle(Vehicle vehicle);

	bool isHurt();
	bool isInjured();
	bool isFatallyInjured();

	bool inMeleeCombat();
	bool inCombat();
	bool isShooting();
	bool isReloading();

	bool isInsideVehicle();
	// bool isInsideVehicle(Vehicle vehicle);

	bool isInsidePoliceVehicle();
	bool isInsideTaxi();
	bool isInsideBoat();
	bool isInsidePlane();
	bool isInsideHelicopter();
	bool isInsideSub();
	bool isInsideBike();
	bool isInsideTrain();
	bool isGettingIntoVehicle();
	bool isGettingIntoLockedVehicle();
	bool isOnFoot();

	VehicleObj getVehicleUsing();
	VehicleObj getVehicleInside();

	int getAccuracy();

	void setCanFallOffVehicle(bool state);
	void setHandcuffs(bool state);
	void setBoundAnkles(bool state);
	void setAsEnemy(bool state);
	void setAsCop(bool state);
	void setAccuracy(int i1);
	void setSweat(float f1);
	void setWetness(float height);
	void setIsDucking(bool state);
	void setGravity(bool state);
	void setCanSwitchWeapon(bool state);
	void setCanBeTargetted(bool state);
	void setCanBeTargettedByTeam(int teamId, bool state);
	void setCanBeTargettedByPlayer(Player player, bool state);
	void setCanRagdoll(bool state);

	PedObj getJacker();
	PedObj getJackTarget();

	static void createGroup(int groupId);
	static void removeGroup(int groupId);

	static void setAsGroupLeader(PedObj ped, int groupId);
	static void setAsGroupMember(PedObj ped, int groupId);

	static void setRelationship(int relation, int group1, int group2);
	static void clearRelationship(int relation, int group1, int group2);

	static int getRelationshipBetween(PedObj ped1, PedObj ped2);

	static bool groupExists(int groupId);
	static bool isMemberOf(PedObj ped, int groupId);

	/*
		Returns the handle of this PedObj.
	*/
	Ped getHandle() { return pedId; }

private:

	Ped pedId;

};