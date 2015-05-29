/*********************************************//**
* @file DBConnectionIF.h
* @brief
*************************************************/
#ifndef DB_DBCONNECTIONIF_H_
#define DB_DBCONNECTIONIF_H_
#include "DBType_def.h"

namespace db {

///
class DBCursorIF;
class DBTransactionIF;

///
class DBConnectionIF
{
public:
	/**
	*/
	virtual DBCursorIF* OpenCursor(const DBCHAR* sql) = 0;

	/**
	*/
	virtual DBError ExecSql(const DBCHAR* sql) = 0;

	/**
	*/
	virtual DBTransactionIF* BeginTransaction() = 0;

	/// è¡ñ≈ä÷êî
	virtual ~DBConnectionIF() {}
};

}

SRH_END_NS

#endif//header
