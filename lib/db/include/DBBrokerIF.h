/*********************************************//**
* @file DBBrokerIF.h
* @brief 
*************************************************/
#ifndef DB_DBBROKERIF_H_
#define DB_DBBROKERIF_H_
#include "DBType_def.h"

namespace db {

///
class DBConnectionIF;

///
class DBBrokerIF
{
public:
	/**
	*/
	virtual DBConnectionIF* Open(const DBCHAR* connStr) = 0;

	/**
	*/
	virtual DBError Close(DBConnectionIF* conn) = 0;

	///
	virtual ~DBBrokerIF() {}
};
}

#endif//header
