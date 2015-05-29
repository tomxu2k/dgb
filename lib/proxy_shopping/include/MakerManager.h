/*********************************************//**
* @file MakerManager.h
* @brief 
*************************************************/
#ifndef PS_MAKERMANAGER_H_
#define PS_MAKERMANAGER_H_

namespace proxy_shop {

class CMakerManager_Test;

class MakerManager
{
	friend class CMakerManager_Test;

public:
	void query();
	void add();
	void remove();
	void save();
};

}

#endif//header
