/*********************************************//**
* @file Entity.h
* @brief 
*************************************************/
#ifndef DB_ENTITY_H_
#define DB_ENTITY_H_

namespace db {

class CEntity_Test;

class Entity
{
	friend class CEntity_Test;

public:
	void addAttribute();
	void removeAttribute();
};

}

#endif//header
