

#include "huaweicloud/rds/v3/model/ListRemoteDbResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRemoteDbResponse::ListRemoteDbResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListRemoteDbResponse::~ListRemoteDbResponse() = default;

void ListRemoteDbResponse::validate()
{
}

web::json::value ListRemoteDbResponse::toJson() const
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
bool ListRemoteDbResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlserverDatabaseForDetail> refVal;
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


std::vector<SqlserverDatabaseForDetail>& ListRemoteDbResponse::getDatabases()
{
    return databases_;
}

void ListRemoteDbResponse::setDatabases(const std::vector<SqlserverDatabaseForDetail>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListRemoteDbResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListRemoteDbResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListRemoteDbResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRemoteDbResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRemoteDbResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRemoteDbResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


