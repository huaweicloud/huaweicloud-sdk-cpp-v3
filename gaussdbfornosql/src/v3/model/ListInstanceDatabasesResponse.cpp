

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstanceDatabasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstanceDatabasesResponse::ListInstanceDatabasesResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListInstanceDatabasesResponse::~ListInstanceDatabasesResponse() = default;

void ListInstanceDatabasesResponse::validate()
{
}

web::json::value ListInstanceDatabasesResponse::toJson() const
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
bool ListInstanceDatabasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
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


std::vector<std::string>& ListInstanceDatabasesResponse::getDatabases()
{
    return databases_;
}

void ListInstanceDatabasesResponse::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListInstanceDatabasesResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListInstanceDatabasesResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ListInstanceDatabasesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListInstanceDatabasesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListInstanceDatabasesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListInstanceDatabasesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


