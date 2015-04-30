#include "PedObj.h"

PedObj::PedObj(Ped id)
{
	pedId = id;
}

void PedObj::createRandomPed(float x, float y, float z)
{
	PED::CREATE_RANDOM_PED(x, y, z);
}

/*
Creates a ped with the specified parameters.

type: The type of pedestrian to create.
pedHash: The hash of the pedestrian to create.
x: The X-coordinate of where to spawn the newly created pedestrian.
y: The Y-coordinate of where to spawn the newly created pedestiran.
z: The Z-coordinate of where to spawn the newly created pedestrian.
heading: The direction of which the newly created should be heading.
networkHandle: N/A
returnPedHandle: Whether this function should return the ped handle.
*/
Ped PedObj::createPed(int type, int pedHash, float x, float y, float z, float heading, bool networkHandle, bool returnPedHandle)
{
	return PED::CREATE_PED(type, pedHash, x, y, z, heading, networkHandle, returnPedHandle);
}

/*
Creates a ped with the specified parameters.

type: The type of pedestrian to create.
pedHash: The hash of the pedestrian to create.
x: The X-coordinate of where to spawn the newly created pedestrian.
y: The Y-coordinate of where to spawn the newly created pedestiran.
z: The Z-coordinate of where to spawn the newly created pedestrian.
heading: The direction of which the newly created should be heading.
networkHandle: N/A
*/
Ped createPed(int type, int pedHash, float x, float y, float z, float heading, bool networkHandle)
{
	return PedObj::createPed(type, pedHash, x, y, z, heading, networkHandle, true);
}

void PedObj::setInVehicle(VehicleObj vehicle, int index)
{
	PED::SET_PED_INTO_VEHICLE(pedId, vehicle.getHandle(), index);
}


void PedObj::deletePed(Ped *handle)
{
	// PED::DELETE_PED(static_cast<Ped*>(handle));
}

void PedObj::explodeHead(Hash weaponHash)
{
	PED::EXPLODE_PED_HEAD(pedId, weaponHash);
}

void PedObj::setMoney(int money)
{
	PED::SET_PED_MONEY(pedId, money);
}

void PedObj::setCanSwitchWeapon(bool state)
{
	PED::SET_PED_CAN_SWITCH_WEAPON(pedId, state);
}


int PedObj::getMoney()
{
	return PED::GET_PED_MONEY(pedId);
}


void PedObj::addArmor(int amount)
{
	PED::ADD_ARMOUR_TO_PED(pedId, amount);
}

void PedObj::setArmor(int amount)
{
	PED::SET_PED_ARMOUR(pedId, amount);
}

int PedObj::getArmor()
{
	PED::GET_PED_ARMOUR(pedId);
}


VehicleObj PedObj::getVehicleUsing()
{
	return VehicleObj(PED::GET_VEHICLE_PED_IS_USING(pedId));
}

VehicleObj PedObj::getVehicleInside()
{
	return VehicleObj(PED::GET_VEHICLE_PED_IS_IN(pedId, 0));
}

bool PedObj::isModel(Hash modelHash)
{
	return PED::IS_PED_MODEL(pedId, modelHash);
}


void PedObj::setHandcuffs(bool state)
{
	PED::SET_ENABLE_HANDCUFFS(pedId, state);
}

bool PedObj::isOnVehicle(Vehicle vehicle)
{
	return PED::IS_PED_ON_SPECIFIC_VEHICLE(pedId, vehicle);
}

void PedObj::setCanFallOffVehicle(bool state)
{
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(pedId, state);
}

void PedObj::setSweat(float f1)
{
	PED::SET_PED_SWEAT(pedId, f1);
}

void PedObj::knockOffVehicle()
{
	if (isInsideVehicle()) PED::KNOCK_PED_OFF_VEHICLE(pedId);
}

void PedObj::setCanRagdoll(bool state)
{
	PED::SET_PED_CAN_RAGDOLL(pedId, state);
}


void PedObj::resurrect()
{
	PED::RESURRECT_PED(pedId);
}

void PedObj::revive()
{
	if (isInjured()) PED::REVIVE_INJURED_PED(pedId);
}

void PedObj::clearBlood()
{
	PED::CLEAR_PED_BLOOD_DAMAGE(pedId);
}

//

void PedObj::setAsCop(bool state)
{
	PED::SET_PED_AS_COP(pedId, state);
}

void PedObj::setAsEnemy(bool state)
{
	PED::SET_PED_AS_ENEMY(pedId, state);
}

void PedObj::setAccuracy(int i1)
{
	PED::SET_PED_ACCURACY(pedId, i1);
}

void PedObj::setBoundAnkles(bool state)
{
	PED::SET_ENABLE_BOUND_ANKLES(pedId, state);
}

void PedObj::removeWeapon(Hash weaponHash)
{
	WEAPON::REMOVE_WEAPON_FROM_PED(pedId, weaponHash);
}


void PedObj::setCurrentWeapon(Hash weaponHash, bool equipNow)
{
	WEAPON::SET_CURRENT_PED_WEAPON(pedId, weaponHash, equipNow);
}

void PedObj::removeAllWeapons(bool toggle)
{
	WEAPON::REMOVE_ALL_PED_WEAPONS(pedId, toggle);
}

void PedObj::setInfiniteAmmo(Hash weaponHash, bool toggle)
{
	WEAPON::SET_PED_INFINITE_AMMO(pedId, toggle, weaponHash);
}

void PedObj::setCanBeTargetted(bool state)
{
	PED::SET_PED_CAN_BE_TARGETTED(pedId, state);
}

void PedObj::setCanBeTargettedByPlayer(Player player, bool state)
{
	PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(pedId, player, state);
}

void PedObj::setCanBeTargettedByTeam(int teamId, bool state)
{
	PED::SET_PED_CAN_BE_TARGETTED_BY_TEAM(pedId, teamId, state);
}


void PedObj::setWeaponTint(Hash weaponHash, int tintIndex)
{
	WEAPON::SET_PED_WEAPON_TINT_INDEX(pedId, weaponHash, tintIndex);
}

bool PedObj::isGettingIntoLockedVehicle()
{
	return PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(pedId);
}


void PedObj::reloadWeapon()
{
	WEAPON::MAKE_PED_RELOAD(pedId);
}

int PedObj::getAccuracy()
{
	return PED::GET_PED_ACCURACY(pedId);
}


//

bool PedObj::isPlayer()
{
	return PED::IS_PED_A_PLAYER(pedId);
}

bool PedObj::isReloading()
{
	return PED::IS_PED_RELOADING(pedId);
}

bool PedObj::isStopped()
{
	return PED::IS_PED_STOPPED(pedId);
}

bool PedObj::isShooting()
{
	return PED::IS_PED_SHOOTING(pedId);
}

bool PedObj::inGroup()
{
	return PED::IS_PED_IN_GROUP(pedId);
}

bool PedObj::inMeleeCombat()
{
	return PED::IS_PED_IN_MELEE_COMBAT(pedId);
}

bool PedObj::isJacked()
{
	return PED::IS_PED_BEING_JACKED(pedId);
}

bool PedObj::isJumping()
{
	return PED::IS_PED_JUMPING(pedId);
}

bool PedObj::isOnFoot()
{
	return PED::IS_PED_ON_FOOT(pedId);
}

bool PedObj::isInsideSub()
{
	return PED::IS_PED_IN_ANY_SUB(pedId);
}


bool PedObj::isOnMount()
{
	return PED::IS_PED_ON_MOUNT(pedId);
}

bool PedObj::isSwimming()
{
	return PED::IS_PED_SWIMMING(pedId);
}

bool PedObj::isSwimmingUnderWater()
{
	return PED::IS_PED_SWIMMING_UNDER_WATER(pedId);
}

bool PedObj::isJacking()
{
	return PED::IS_PED_JACKING(pedId);
}

bool PedObj::isClimbing()
{
	return PED::IS_PED_CLIMBING(pedId);
}

bool PedObj::isDiving()
{
	return PED::IS_PED_DIVING(pedId);
}

bool PedObj::isDoingDriveby()
{
	return PED::IS_PED_DOING_DRIVEBY(pedId);
}

bool PedObj::isDucking()
{
	return PED::IS_PED_DUCKING(pedId);
}

bool PedObj::isFalling()
{
	return PED::IS_PED_FALLING(pedId);
}

bool PedObj::isFatallyInjured()
{
	return PED::IS_PED_FATALLY_INJURED(pedId);
}

bool PedObj::isFleeing()
{
	return PED::IS_PED_FLEEING(pedId);
}

bool PedObj::isGettingIntoVehicle()
{
	return PED::IS_PED_GETTING_INTO_A_VEHICLE(pedId);
}

bool PedObj::isHuman()
{
	return PED::IS_PED_HUMAN(pedId);
}

bool PedObj::isMale()
{
	return PED::IS_PED_MALE(pedId);
}

bool PedObj::isHurt()
{
	return PED::IS_PED_HURT(pedId);
}

bool PedObj::isInjured()
{
	return PED::IS_PED_INJURED(pedId);
}

bool PedObj::isInsideBike()
{
	return PED::IS_PED_ON_ANY_BIKE(pedId);
}

bool PedObj::isInsideBoat()
{
	return PED::IS_PED_IN_ANY_BOAT(pedId);
}

bool PedObj::isInsideVehicle()
{
	return PED::IS_PED_IN_ANY_VEHICLE(pedId, 1);
}

bool PedObj::isInsideHelicopter()
{
	return PED::IS_PED_IN_ANY_HELI(pedId);
}

bool PedObj::isMemberOf(PedObj ped, int groupId)
{
	return PED::IS_PED_GROUP_MEMBER(ped.getHandle(), groupId);
}


bool PedObj::isInsidePlane()
{
	return PED::IS_PED_IN_ANY_PLANE(pedId);
}

bool PedObj::isInsideTaxi()
{
	return PED::IS_PED_IN_ANY_TAXI(pedId);
}

bool PedObj::isInsidePoliceVehicle()
{
	return PED::IS_PED_IN_ANY_POLICE_VEHICLE(pedId);
}

bool PedObj::isInsideTrain()
{
	return PED::IS_PED_IN_ANY_TRAIN(pedId);
}

bool PedObj::isArmed()
{
	return NULL;
}


//

/*
	Creates a group with the specified groupId.
*/
void PedObj::createGroup(int groupId)
{
	if (!groupExists(groupId))
		PED::CREATE_GROUP(groupId);
}

/*
	Removes a group with the specified groupId.
*/
void PedObj::removeGroup(int groupId)
{
	if (groupExists(groupId))
		PED::REMOVE_GROUP(groupId);
}

/*
	Returns the relationship between two pedestrians.
*/
int PedObj::getRelationshipBetween(PedObj ped1, PedObj ped2)
{
	return PED::GET_RELATIONSHIP_BETWEEN_PEDS(ped1.getHandle(), ped2.getHandle());
}

/*
	Sets the relationship between two groups.
*/
void PedObj::setRelationship(int relation, int group1, int group2)
{
	if (groupExists(group1) && groupExists(group2))
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(relation, group1, group2);
}

/*
	Clears the specified relation with the two specified groups.
*/
void PedObj::clearRelationship(int relation, int group1, int group2)
{
	if (groupExists(group1) && groupExists(group2))
		PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(relation, group1, group2);
}

/*
	Sets the specified pedestrian as the group leader of the specified group.
*/
void PedObj::setAsGroupLeader(PedObj ped, int groupId)
{
	if (groupExists(groupId))
		PED::SET_PED_AS_GROUP_LEADER(ped.getHandle(), groupId);
}

/*
	Sets the specified pedestrian as a member of the specified group.
*/
void PedObj::setAsGroupMember(PedObj ped, int groupId)
{
	if (groupExists(groupId))
		PED::SET_PED_AS_GROUP_MEMBER(ped.getHandle(), groupId);
}

/*
	Returns whether a group with the specified groupId exists.
*/
bool PedObj::groupExists(int groupId)
{
	return PED::DOES_GROUP_EXIST(groupId);
}

