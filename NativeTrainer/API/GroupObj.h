#include "..\..\..\inc\natives.h"
#include "..\..\..\inc\types.h"
#include "..\..\..\inc\enums.h"

#include "..\..\..\inc\main.h"
#include "PedObj.h"

#include <list>
#include <iostream>

class GroupObj
{
	
	// Creates a group with the specified id.
	GroupObj(int groupId);

public:

	// Creates a group with the specified groupId.
	static void create(int groupId);

	// Returns whether a group with the specified groupId exists.
	static bool exists(int groupId);

	// Removes a group with the specified groupId.
	static void remove(int groupId);

	bool memberExists(int groupId, PedObj ped);
	void addMember(int groupId, PedObj ped);
	void removeMember(int groupId, PedObj ped);
	std::list<PedObj> getMembers();

	void setLeader(int groupId, PedObj ped);

	int getHandle() {return groupId;}

private:

	int groupId;
	std::list<PedObj> members;

};