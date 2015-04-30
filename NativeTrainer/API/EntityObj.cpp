#include "EntityObj.h"

EntityObj::EntityObj(Entity id) {
	entityId = id;
}

bool EntityObj::exists(Entity id) {
	return ENTITY::DOES_ENTITY_EXIST(id);
}

bool EntityObj::isEntity(Entity id) {
	return ENTITY::IS_AN_ENTITY(id);
}

//

void EntityObj::setHealth(int i1) {
	ENTITY::SET_ENTITY_HEALTH(entityId, i1);
}

void EntityObj::setDynamic(bool b1) {
	ENTITY::SET_ENTITY_DYNAMIC(entityId, b1);
}

void EntityObj::setHeading(float f1) {
	ENTITY::SET_ENTITY_HEADING(entityId, f1);
}

void EntityObj::setInvincible(bool b1) {
	ENTITY::SET_ENTITY_INVINCIBLE(entityId, b1);
}

void EntityObj::setOnFire()
{
	if (!isBurning())
		FIRE::START_ENTITY_FIRE(entityId);
}

void EntityObj::stopFire()
{
	if (isBurning())
		FIRE::STOP_ENTITY_FIRE(entityId);
}

void EntityObj::deleteEntity(Entity* entity)
{
	ENTITY::DELETE_ENTITY((Any*) entity);
}


//

bool EntityObj::isBurning()
{
	return FIRE::IS_ENTITY_ON_FIRE(entityId);
}


bool EntityObj::isObject() {
	return ENTITY::IS_ENTITY_AN_OBJECT(entityId);
}

bool EntityObj::isPed() {
	return ENTITY::IS_ENTITY_A_PED(entityId);
}

bool EntityObj::isVehicle() {
	return ENTITY::IS_ENTITY_A_VEHICLE(entityId);
}

bool EntityObj::isVisible() {
	return ENTITY::IS_ENTITY_VISIBLE(entityId);
}

bool EntityObj::isInWater() {
	return ENTITY::IS_ENTITY_IN_WATER(entityId);
}

bool EntityObj::isInAir() {
	return ENTITY::IS_ENTITY_IN_AIR(entityId);
}

bool EntityObj::isMissionEntity() {
	return ENTITY::IS_ENTITY_A_MISSION_ENTITY(entityId);
}

bool EntityObj::isOnScreen() {
	return ENTITY::IS_ENTITY_ON_SCREEN(entityId);
}

bool EntityObj::isDead() {
	return ENTITY::IS_ENTITY_DEAD(entityId);
}

bool EntityObj::isStatic() {
	return ENTITY::IS_ENTITY_STATIC(entityId);
}

bool EntityObj::isUpsideDown() {
	return ENTITY::IS_ENTITY_UPSIDEDOWN(entityId);
}

//

bool EntityObj::isAttached() {
	return ENTITY::IS_ENTITY_ATTACHED(entityId);
}

bool EntityObj::isAttachedToEntity(Entity e1) {
	return ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(entityId, e1);
}

bool EntityObj::isAttachedToObject() {
	return ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(entityId);
}

bool EntityObj::isAttachedToPed() {
	return ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(entityId);
}

bool EntityObj::isAttachedToVehicle() {
	return ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(entityId);
}

//

float EntityObj::getHealth() {
	return ENTITY::GET_ENTITY_HEALTH(entityId);
}

float EntityObj::getSpeed() {
	return ENTITY::GET_ENTITY_SPEED(entityId);
}

//

Vector3 EntityObj::getCoordsVector() {
	return ENTITY::GET_ENTITY_COORDS(entityId, 1);
}

Vector3 EntityObj::getRotationVector() {
	return ENTITY::GET_ENTITY_ROTATION_VELOCITY(entityId);
}

Vector3 EntityObj::getVelocityVector() {
	return ENTITY::GET_ENTITY_VELOCITY(entityId);
}