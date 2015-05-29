/*********************************************//**
* @file Attribute.h
* @brief 
*************************************************/
#ifndef DB_ATTRIBUTE_H_
#define DB_ATTRIBUTE_H_

namespace db {

class CAttribute_Test;

class Attribute
{
	friend class CAttribute_Test;

public:
	void name();
	void type();
	void value();
};

}

#endif//header
