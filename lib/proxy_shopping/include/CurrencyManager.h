/*********************************************//**
* @file CurrencyManager.h
* @brief 
*************************************************/
#ifndef PS_CURRENCYMANAGER_H_
#define PS_CURRENCYMANAGER_H_

namespace proxy_shop {

class CCurrencyManager_Test;

class CurrencyManager
{
	friend class CCurrencyManager_Test;

public:
	void query();
	void add();
	void remove();
	void save();

	void setRate();
};

}

#endif//header
