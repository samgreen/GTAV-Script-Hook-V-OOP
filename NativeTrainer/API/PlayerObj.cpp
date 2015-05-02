#include "PlayerObj.h"

PlayerObj::PlayerObj(Player id) {
	playerId = id;
}

PlayerObj PlayerObj::getId()
{
	return Player(PLAYER::PLAYER_ID());
}

PedObj PlayerObj::getPedId()
{
	return PedObj(PLAYER::PLAYER_PED_ID());
}

bool PlayerObj::getAimedEntity(Entity* entity)
{
	PLAYER::GET_PLAYER_TARGET_ENTITY(playerId, (Any*)entity);
	return true;
}

Any PlayerObj::getName() {
	return PLAYER::GET_PLAYER_NAME(playerId);
}

int PlayerObj::getWantedLevelThreshold()
{
	// return PLAYER::GET_WANTED_LEVEL_THRESHOLD(playedId);
	return -1;
}

PedObj PlayerObj::getPedScriptIndex() {
	return PedObj(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(playerId));
}

int PlayerObj::getWantedLevel() {
	return PLAYER::GET_PLAYER_WANTED_LEVEL(playerId);
}

int PlayerObj::getGroup()
{
	return PLAYER::GET_PLAYER_GROUP(playerId);
}

float PlayerObj::getWantedLevelRadius() {
	return PLAYER::GET_WANTED_LEVEL_RADIUS(playerId);
}

int PlayerObj::getTeam() {
	return PLAYER::GET_PLAYER_TEAM(playerId);
}

Hash PlayerObj::getGroupHash()
{
	return NULL;
}

//

void PlayerObj::setTeam(int team) {
	PLAYER::SET_PLAYER_TEAM(playerId, team);
}

void PlayerObj::setWantedLevel(int wantedLevel)
{
	PLAYER::SET_PLAYER_WANTED_LEVEL(playerId, wantedLevel, false);
}

void PlayerObj::setWantedLevelDifficulty(float difficulty) {
	PLAYER::SET_WANTED_LEVEL_DIFFICULTY(playerId, difficulty);
}

//

void PlayerObj::resetWantedLevelDifficulty() {
	PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(playerId);
}

void PlayerObj::clearWantedLevel() {
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(playerId);
}

void PlayerObj::toggleIgnorePlayer(bool b1) {
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(playerId, b1);
}

void PlayerObj::togglePoliceIgnorePlayer(bool b1) {
	PLAYER::SET_POLICE_IGNORE_PLAYER(playerId, b1);
}

void PlayerObj::giveAchievement(int index)
{
	PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(index);
}

bool PlayerObj::isRidingTrain() {
	return PLAYER::IS_PLAYER_RIDING_TRAIN(playerId);
}

bool PlayerObj::isClimbing() {
	return PLAYER::IS_PLAYER_CLIMBING(playerId);
}

bool PlayerObj::isWantedLevelGrey()
{
	return PLAYER::ARE_PLAYER_STARS_GREYED_OUT(playerId);
}

bool PlayerObj::isPressingHorn() {
	return PLAYER::IS_PLAYER_PRESSING_HORN(playerId);
}

bool PlayerObj::isSpecialAbilityActive() {
	return PLAYER::IS_SPECIAL_ABILITY_ACTIVE(playerId);
}

bool PlayerObj::isSpecialAbilityEnabled() {
	return PLAYER::IS_SPECIAL_ABILITY_ENABLED(playerId);
}