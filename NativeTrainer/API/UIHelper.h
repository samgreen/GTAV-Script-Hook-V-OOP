#include "..\..\..\inc\natives.h"
#include "..\..\..\inc\types.h"
#include "..\..\..\inc\enums.h"

#include "..\..\..\inc\main.h"
#include "EntityObj.h"

class UIHelper
{
	
	static void addBlipForEntity(EntityObj entity);

	static void addBlipForEntity(Entity entity);

	static void addBlipForCoordinates(float x, float y, float z);
	
	static Object getBlipFromEntity(Entity entity);

	static void refreshWaypoint();

	static void clearWaypoint();

};