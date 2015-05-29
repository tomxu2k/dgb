/*********************************************//**
* @file PostManager.h
* @brief 
*************************************************/
#ifndef PS_POSTMANAGER_H_
#define PS_POSTMANAGER_H_

namespace proxy_shop {

class CPostManager_Test;

class PostManager
{
	friend class CPostManager_Test;

public:
	void query();
	void add();
	void remove();
	void save();
};

}

#endif//header
