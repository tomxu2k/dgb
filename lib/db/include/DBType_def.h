/*********************************************//**
* @file DBType_def.h
* @brief 
*************************************************/
#ifndef DB_DBTYPE_DEF_H_
#define DB_DBTYPE_DEF_H_
#include <stdint.h>

namespace db {

///
enum DBDataType
{
	DT_INT64=1,	//
	DT_FLOAT,	//
	DT_TEXT,	//
	DT_BLOB,	//
	DT_NULL,	//
};

///
enum DBError
{
	E_NONE = 0,	//no error
	E_DB,	// SQL error or missing database
	E_INTERNAL,	// Internal logic error in SQLite
	E_PERM,	// Access permission denied
	E_CBABORT,	// Callback routine requested an abort
	E_BUSY,	// The database file is locked
	E_LOCK,	// A table in the database is locked
	E_NOMEM,	// A malloc() failed
	E_READONLY,	// Attempt to write a readonly database
	E_INTERRUPT, // Operation terminated by sqlite3_interrupt()
	E_IOERR = 10,	// Some kind of disk I/O error occurred
	E_CORRUPT,	// The database disk image is malformed
	E_NOTFOUND,	// NOT USED. Table or record not found
	E_FULL,	// Insertion failed because database is full
	E_CANTOPEN,	// Unable to open the database file
	E_PROTOCOL,	// Database lock protocol error
	E_EMPTY,	// Database is empty
	E_SCHEMA,	// The database schema changed
	E_TOOBIG,	// String or BLOB exceeds size limit
	E_CONSTRAINT,	// Abort due to constraint violation
	E_MISMATCH = 20,	// Data type mismatch
	E_MISUSE,	// Library used incorrectly
	E_NOLFS,	// Uses OS features not supported on host
	E_AUTH,	// Authorization denied
	E_FORMAT,	// Auxiliary database format error
	E_RANGE,	// 2nd parameter to sqlite3_bind out of range
	E_NOTADB,	// File opened that is not a database file
	E_ROW = 100,	// sqlite3_step() has another row ready
	E_DONE,	// sqlite3_step() has finished executing
	E_UNKNOWN = 999, // •s–¾
};

/// 
typedef char DBCHAR;
/// 
typedef uint8_t DBBYTE;
/// 
typedef int DBINT;
/// 
typedef int64_t DBINT64;
/// 
typedef double DBDBL;
}

#endif//header
