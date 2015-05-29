/*********************************************//**
* @file EntityManager.h
* @brief 
*************************************************/
#ifndef DB_ENTITYMANAGER_H_
#define DB_ENTITYMANAGER_H_

namespace db {

class CEntityManager_Test;

class EntityManager
{
	friend class CEntityManager_Test;

public:
	void query();
	void add();
	void remove();
	void save();
};

}

#endif//header
