

#include "huaweicloud/dbss/v1/model/ListRdsDatabasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListRdsDatabasesResponse::ListRdsDatabasesResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListRdsDatabasesResponse::~ListRdsDatabasesResponse() = default;

void ListRdsDatabasesResponse::validate()
{
}

web::json::value ListRdsDatabasesResponse::toJson() const
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
bool ListRdsDatabasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<RdsDbListResponse_databases> refVal;
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


std::vector<RdsDbListResponse_databases>& ListRdsDatabasesResponse::getDatabases()
{
    return databases_;
}

void ListRdsDatabasesResponse::setDatabases(const std::vector<RdsDbListResponse_databases>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListRdsDatabasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListRdsDatabasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListRdsDatabasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRdsDatabasesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRdsDatabasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRdsDatabasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


