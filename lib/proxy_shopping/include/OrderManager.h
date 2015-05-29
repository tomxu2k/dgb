/*********************************************//**
* @file OrderManager.h
* @brief 
*************************************************/
#ifndef PS_ORDERMANAGER_H_
#define PS_ORDERMANAGER_H_

namespace proxy_shop {

class COrderManager_Test;

class OrderManager
{
	friend class COrderManager_Test;

public:
	void query();
	void add();
	void remove();
	void save();

	void create();
	void arrival();
	void pay();
	void cancel();
	void post();
	void reject();
	void lost();
	void delivered();
	void payback();
};

}

#endif//header
