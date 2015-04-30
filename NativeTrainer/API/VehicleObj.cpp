#include "VehicleObj.h"
#include "PedObj.h"

VehicleObj::VehicleObj(Vehicle id) {
	vehicleId = id;
}

void VehicleObj::setBrakeLights(bool state) {
	VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(vehicleId, state);
}

void VehicleObj::setFullBeam(bool state) {
	VEHICLE::SET_VEHICLE_FULLBEAM(vehicleId, state);
}

void VehicleObj::setGravity(bool state) {
	VEHICLE::SET_VEHICLE_GRAVITY(vehicleId, state);
}

void VehicleObj::setHandbrake(bool state) {
	VEHICLE::SET_VEHICLE_HANDBRAKE(vehicleId, state);
}

void VehicleObj::setIsStolen(bool state) {
	VEHICLE::SET_VEHICLE_IS_STOLEN(vehicleId, state);
}

void VehicleObj::setIsWanted(bool state) {
	VEHICLE::SET_VEHICLE_IS_WANTED(vehicleId, state);
}

void VehicleObj::setLicensePlateText(char *text) {
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(vehicleId, (Any*) text);
}

void VehicleObj::setOnGroundProperly() {
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehicleId);
}

void VehicleObj::startLeftIndicator()
{
	VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(vehicleId, 1, 1);
}

void VehicleObj::startRightIndicator()
{
	VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(vehicleId, 0, 1);
}

void VehicleObj::startWarningIndicator()
{
	startLeftIndicator();
	startRightIndicator();
}

void VehicleObj::stopLeftIndicator()
{
	VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(vehicleId, 1, 0);
}

void VehicleObj::stopRightIndicator()
{
	VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(vehicleId, 0, 0);
}

void VehicleObj::stopWarningIndicator()
{
	stopLeftIndicator();
	stopRightIndicator();
}


// Color

void VehicleObj::setFixed()
{
	VEHICLE::SET_VEHICLE_FIXED(vehicleId);
}

void VehicleObj::setAlarm(bool state)
{
	VEHICLE::SET_VEHICLE_ALARM(vehicleId, state);
}

void VehicleObj::setLights(bool state)
{
	VEHICLE::SET_VEHICLE_LIGHTS(vehicleId, state);
}

void VehicleObj::setInteriorLights(bool state)
{
	VEHICLE::SET_VEHICLE_INTERIORLIGHT(vehicleId, state);
}

void VehicleObj::openDoor(int index, bool loose, bool instant)
{
	VEHICLE::SET_VEHICLE_DOOR_OPEN(vehicleId, index, loose, instant);
}

void VehicleObj::shutDoor(int index)
{
	VEHICLE::SET_VEHICLE_DOORS_SHUT(vehicleId, index);
}

void VehicleObj::setTireCanBreak(bool state)
{
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(vehicleId, state);
}


bool VehicleObj::tiresCanBurst()
{
	return VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(vehicleId);
}

bool VehicleObj::isAttachedToTrailer()
{
	return VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(vehicleId);
}

void VehicleObj::detachFromTrailer()
{
	VEHICLE::DETACH_VEHICLE_FROM_TRAILER(vehicleId);
}


void VehicleObj::setPrimaryColor(int r, int g, int b) {
	VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(vehicleId, r, g, b);
}

void VehicleObj::setSecondaryColor(int r, int g, int b) {
	VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(vehicleId, r, g, b);
}

void VehicleObj::setTyreSmokeColor(int r, int g, int b) {
	VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(vehicleId, r, g, b);
}

void VehicleObj::setWindowTintColor(int r, int g, int b) {
	// VEHICLE::SET_VEHICLE_WINDOW_TINT(vehicleId, NULL);
	return;
}

bool VehicleObj::hasSecondaryColor()
{
	return VEHICLE::_DOES_VEHICLE_HAVE_SECONDARY_COLOUR(vehicleId);
}


//

Any VehicleObj::getLicensePlateText() {
	return VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(vehicleId);
}

//

int VehicleObj::getMaxNumberOfPassengers()
{
	return VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(vehicleId);
}


bool VehicleObj::isVisible() {
	return VEHICLE::IS_VEHICLE_VISIBLE(vehicleId);
}

bool VehicleObj::isInBurnout() {
	return VEHICLE::IS_VEHICLE_IN_BURNOUT(vehicleId);
}

bool VehicleObj::isStuckOnRoof() {
	return VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(vehicleId);
}

bool VehicleObj::isStopped() {
	return VEHICLE::IS_VEHICLE_STOPPED(vehicleId);
}

bool VehicleObj::isStolen() {
	return VEHICLE::IS_VEHICLE_STOLEN(vehicleId);
}

bool VehicleObj::isSearchLightOn() {
	return VEHICLE::IS_VEHICLE_SEARCHLIGHT_ON(vehicleId);
}

bool VehicleObj::isSeatFree(int index)
{
	return VEHICLE::IS_VEHICLE_SEAT_FREE(vehicleId, index);
}

int VehicleObj::getNumberOfPassengers()
{
	return VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(vehicleId);
}


//

void VehicleObj::fixTyre(int index) {
	VEHICLE::SET_VEHICLE_TYRE_FIXED(vehicleId, index);
}

void VehicleObj::fixWindow(int index) {
	VEHICLE::FIX_VEHICLE_WINDOW(vehicleId, index);
}

void VehicleObj::rollDownWindow(int index) {
	VEHICLE::ROLL_DOWN_WINDOW(vehicleId, index);
}

void VehicleObj::rollDownWindows() {
	VEHICLE::ROLL_DOWN_WINDOWS(vehicleId);
}

void VehicleObj::rollUpWindow(int index)
{
	VEHICLE::ROLL_UP_WINDOW(vehicleId, index);
}

bool VehicleObj::hasWeapons()
{
	return VEHICLE::DOES_VEHICLE_HAVE_WEAPONS(vehicleId);
}

PedObj VehicleObj::getPedInSeat(int index)
{
	return PedObj(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehicleId, index));
}

void VehicleObj::lockDoors()
{
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(vehicleId, 1);
}

void VehicleObj::smashWindow(int index)
{
	VEHICLE::SMASH_VEHICLE_WINDOW(vehicleId, index);
}

void VehicleObj::removeWindow(int index)
{
	VEHICLE::REMOVE_VEHICLE_WINDOW(vehicleId, index);
}

bool VehicleObj::isWindowIntact(int index)
{
	return VEHICLE::IS_VEHICLE_WINDOW_INTACT(vehicleId, index);
}


void VehicleObj::detachFromCargobob()
{
	VEHICLE::DETACH_VEHICLE_FROM_ANY_CARGOBOB(vehicleId);
}
