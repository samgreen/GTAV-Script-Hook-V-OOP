#include "UIHelper.h"

void UIHelper::addBlipForCoordinates(float x, float y, float z)
{
	UI::ADD_BLIP_FOR_COORD(x, y, z);
}

void UIHelper::addBlipForEntity(Entity entity)
{
	UI::ADD_BLIP_FOR_ENTITY(entity);
}

void UIHelper::addBlipForEntity(EntityObj entity)
{
	addBlipForEntity(EntityObj(entity).getHandle());
}

void UIHelper::clearWaypoint()
{
	UI::CLEAR_GPS_PLAYER_WAYPOINT();
}

void UIHelper::refreshWaypoint()
{
	UI::REFRESH_WAYPOINT();
}
