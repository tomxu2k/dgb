/*********************************************//**
* @file ProductManager.h
* @brief 
*************************************************/
#ifndef PS_PRODUCTMANAGER_H_
#define PS_PRODUCTMANAGER_H_

namespace proxy_shop {

class CProductManager_Test;

class ProductManager
{
	friend class CProductManager_Test;

public:
	void query();
	void add();
	void remove();
	void save();
};

}

#endif//header
