

#include "huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemaTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListDatabaseSchemaTablesResponse::ListDatabaseSchemaTablesResponse()
{
    databaseTablesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListDatabaseSchemaTablesResponse::~ListDatabaseSchemaTablesResponse() = default;

void ListDatabaseSchemaTablesResponse::validate()
{
}

web::json::value ListDatabaseSchemaTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseTablesIsSet_) {
        val[utility::conversions::to_string_t("database_tables")] = ModelBase::toJson(databaseTables_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListDatabaseSchemaTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_tables"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseForListTableResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseTables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<DatabaseForListTableResult>& ListDatabaseSchemaTablesResponse::getDatabaseTables()
{
    return databaseTables_;
}

void ListDatabaseSchemaTablesResponse::setDatabaseTables(const std::vector<DatabaseForListTableResult>& value)
{
    databaseTables_ = value;
    databaseTablesIsSet_ = true;
}

bool ListDatabaseSchemaTablesResponse::databaseTablesIsSet() const
{
    return databaseTablesIsSet_;
}

void ListDatabaseSchemaTablesResponse::unsetdatabaseTables()
{
    databaseTablesIsSet_ = false;
}

int32_t ListDatabaseSchemaTablesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDatabaseSchemaTablesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDatabaseSchemaTablesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDatabaseSchemaTablesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


