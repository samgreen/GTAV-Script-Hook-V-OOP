#include "..\..\..\inc\natives.h"
#include "..\..\..\inc\types.h"
#include "..\..\..\inc\enums.h"

#include "..\..\..\inc\main.h"

class EntityObj {

public:

	EntityObj(Entity id);

	static bool exists(Entity id);
	static bool isEntity(Entity id);
	static void deleteEntity(Entity *entity);

	bool isUpsideDown();

	bool isInWater();
	bool isVisible();
	bool isVehicle();
	bool isPed();
	bool isObject();
	bool isInAir();
	bool isMissionEntity();
	bool isOnScreen();
	bool isStatic();
	bool isDead();
	bool isBurning();


	bool isAttachedToObject();
	bool isAttachedToPed();
	bool isAttachedToVehicle();
	bool isAttached();

	bool isAttachedToEntity(Entity e1);


	float getHealth();
	float getSpeed();

	void setHealth(int i1);
	void setDynamic(bool b1);
	void setHeading(float f1);
	void setInvincible(bool b1);

	void setOnFire();
	void stopFire();
	// void setSpeed(float f1);


	Vector3 getCoordsVector();
	Vector3 getVelocityVector();
	Vector3 getRotationVector();

	Entity getHandle() { return entityId; }

private:

	Entity entityId;

};