

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDatabaseResponse::ListGaussMySqlDatabaseResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListGaussMySqlDatabaseResponse::~ListGaussMySqlDatabaseResponse() = default;

void ListGaussMySqlDatabaseResponse::validate()
{
}

web::json::value ListGaussMySqlDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListGaussMySqlDatabaseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<ListGaussMysqlDatabaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
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


std::vector<ListGaussMysqlDatabaseInfo>& ListGaussMySqlDatabaseResponse::getDatabases()
{
    return databases_;
}

void ListGaussMySqlDatabaseResponse::setDatabases(const std::vector<ListGaussMysqlDatabaseInfo>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListGaussMySqlDatabaseResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListGaussMySqlDatabaseResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListGaussMySqlDatabaseResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGaussMySqlDatabaseResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGaussMySqlDatabaseResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGaussMySqlDatabaseResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


