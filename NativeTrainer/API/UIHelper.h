#include "ScriptHookSDK.h"
#include "EntityObj.h"

#pragma once

#ifndef UI_HELPER_HEADER
#define UI_HELPER_HEADER

class UIHelper
{
	
	static void addBlipForEntity(EntityObj entity);
	static void addBlipForEntity(Entity entity);

	static void addBlipForCoordinates(float x, float y, float z);
	
	static Object getBlipFromEntity(Entity entity);

	static void refreshWaypoint();
	static void clearWaypoint();
};

#endif