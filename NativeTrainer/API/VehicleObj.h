#include "ScriptHookSDK.h"

#ifndef VEHICLE_HEADER
#define VEHICLE_HEADER

class PedObj;

class VehicleObj {

public:

	VehicleObj(Vehicle vehicleId);

	bool isStopped();
	bool isStuckOnRoof();
	bool isSearchLightOn();
	bool isVisible();
	bool isStolen();
	bool isInBurnout();
	bool hasWeapons();
	bool isAttachedToCargobob();
	bool isAttachedToTrailer();
	bool isSeatFree(int index);

	PedObj getPedInSeat(int index);
	Any getLicensePlateText();
	int getNumberOfPassengers();
	int getMaxNumberOfPassengers();

	void setOnGroundProperly();
	void setFullBeam(bool state);
	void setVehicleAlarm(bool state);
	void setLicensePlateText(char *text);
	void setBrakeLights(bool state);
	void setHandbrake(bool state);
	void setIsWanted(bool state);
	void setGravity(bool state);
	void setIsStolen(bool state);
	void setLights(bool state);
	void setAlarm(bool state);
	void setInteriorLights(bool state);
	void setFixed();

	void setTyreSmokeColor(int r, int g, int b);
	void setWindowTintColor(int r, int g, int b);
	void setPrimaryColor(int r, int g, int b);
	void setSecondaryColor(int r, int g, int b);
	bool hasSecondaryColor();

	void rollDownWindows();
	void rollUpWindows();
	void rollDownWindow(int index);
	void rollUpWindow(int index);
	void smashWindow(int index);
	void fixWindow(int index);
	void removeWindow(int index);
	bool isWindowIntact(int index);

	void startLeftIndicator();
	void startRightIndicator();
	void startWarningIndicator();

	void stopLeftIndicator();
	void stopRightIndicator();
	void stopWarningIndicator();

	void openDoor(int index, bool loose, bool instant);
	void shutDoor(int index);

	void fixTyres();
	void fixTyre(int index);
	bool tiresCanBurst();
	void setTireCanBreak(bool state);

	void lockDoors();

	void detachFromCargobob();
	void detachFromCargobob(Vehicle vehicle);
	void detachFromTrailer();

	Vehicle getHandle() { return vehicleId; }

private:

	Vehicle vehicleId;

};

#endif