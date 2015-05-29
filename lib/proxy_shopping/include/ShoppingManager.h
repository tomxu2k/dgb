/*********************************************//**
* @file ShoppingManager.h
* @brief 
*************************************************/
#ifndef PS_SHOPPINGMANAGER_H_
#define PS_SHOPPINGMANAGER_H_

namespace proxy_shop {

class CShoppingManager_Test;

class ShoppingManager
{
	friend class CShoppingManager_Test;

public:
	void getBanlanceManager();
	void getClientManager();
	void getCurrencyManager();
	void getMakerManger();
	void getOrderManager();
	void getProductManager();

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
