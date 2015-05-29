/*********************************************//**
* @file DBTransactionIF.h
* @brief
*************************************************/
#ifndef DB_DBTRANSACTIONIF_H_
#define DB_DBTRANSACTIONIF_H_
#include "DBType_def.h"

namespace db {

///
class DBTransactionIF
{
public:
	/**
	*/
	virtual DBError Exec(const DBCHAR* sql) = 0;

	/**
	*/
	virtual DBError Commit() = 0;

	/**
	*/
	virtual void Rollback() = 0;

	///
	virtual ~DBTransactionIF() {}
};

}

#endif//header
