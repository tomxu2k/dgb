/*********************************************//**
* @file DBCursorIF.h
* @brief
*************************************************/
#ifndef DB_DBCURSORIF_H_
#define DB_DBCURSORIF_H_
#include "DBType_def.h"

namespace db {

///
class DBCursorIF
{
public:
	///
	virtual DBError Reset() = 0;

	///
	virtual void Close() = 0;

	/**
	*/
	virtual DBError Fetch() = 0;

	///
	virtual DBINT GetColumnCount() = 0;

	/**
	*/
	virtual DBError GetColumnName(const DBINT idx, DBCHAR* buf, const DBINT size) = 0;

	/**
	*/
	virtual DBDataType GetFieldType(const DBINT idx) = 0;

	/**
	*/
	virtual DBINT GetFieldSize(const DBINT idx) = 0;

	/**
	*/
	virtual DBError GetBlob(const DBINT idx, DBBYTE* buf, DBINT& size) = 0;

	/**
	*/
	virtual DBError GetInt(const DBINT idx,DBINT& val) = 0;

	/**
	*/
	virtual DBError GetInt64(const DBINT idx,DBINT64& val) = 0;

	/**
	*/
	virtual DBError GetDouble(const DBINT idx,DBDBL& val) = 0;

	/**
	*/
	virtual DBError GetText(const DBINT idx, DBCHAR* buf, const DBINT size) = 0;

	///
	virtual ~DBCursorIF() {};
};

}

#endif//header
