/*********************************************//**
* @file BanlanceManager.h
* @brief 
*************************************************/
#ifndef PS_BANLANCEMANAGER_H_
#define PS_BANLANCEMANAGER_H_

namespace proxy_shop {

class CBanlanceManager_Test;

class BanlanceManager
{
	friend class CBanlanceManager_Test;

public:
	void query();
	void add();
	void remove();
	void save();
};

}

#endif//header
