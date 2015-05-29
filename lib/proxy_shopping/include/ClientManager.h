/*********************************************//**
* @file ClientManager.h
* @brief 
*************************************************/
#ifndef PS_CLIENTMANAGER_H_
#define PS_CLIENTMANAGER_H_

namespace proxy_shop {

class CClientManager_Test;

class ClientManager
{
	friend class CClientManager_Test;

public:
	void qurey();
	void add();
	void remove();
	void save();
};

}

#endif//header
