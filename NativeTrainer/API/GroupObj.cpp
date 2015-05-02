#include "GroupObj.h"

GroupObj::GroupObj(int id) {
	groupId = id;
	if (!exists(id)) {
		create(id);
	}
}

void GroupObj::create(int groupId) {
	if (!exists(groupId)) {
		PED::CREATE_GROUP(groupId);
	}	
}

void GroupObj::remove(int groupId) {
	if (exists(groupId)) {
		PED::REMOVE_GROUP(groupId);
	}
}

bool GroupObj::exists(int groupId) {
	return PED::DOES_GROUP_EXIST(groupId) ;
}

void GroupObj::setLeader(int groupId, PedObj ped) {
	if (exists(groupId)) {
		PED::SET_PED_AS_GROUP_LEADER(groupId, ped.getHandle());
	}
}

void GroupObj::addMember(int groupId, PedObj ped) {
	if (!memberExists(groupId, ped) && exists(groupId)) {
		PED::SET_PED_AS_GROUP_MEMBER(groupId, ped.getHandle());
		members.insert(members.end(), ped);
	}		
}

void GroupObj::removeMember(int groupId, PedObj ped) {
	if (memberExists(groupId, ped) && exists(groupId)) {
		PED::REMOVE_PED_FROM_GROUP(ped.getHandle());
		members.remove(ped);
	}
}

bool GroupObj::memberExists(int groupId, PedObj ped) {
	return PED::IS_PED_GROUP_MEMBER(groupId, ped.getHandle());
}

std::list<PedObj> GroupObj::getMembers()
{
	return members;
}

