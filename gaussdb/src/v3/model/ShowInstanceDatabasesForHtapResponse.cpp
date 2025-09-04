

#include "huaweicloud/gaussdb/v3/model/ShowInstanceDatabasesForHtapResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceDatabasesForHtapResponse::ShowInstanceDatabasesForHtapResponse()
{
    databasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    timestamp_ = 0;
    timestampIsSet_ = false;
}

ShowInstanceDatabasesForHtapResponse::~ShowInstanceDatabasesForHtapResponse() = default;

void ShowInstanceDatabasesForHtapResponse::validate()
{
}

web::json::value ShowInstanceDatabasesForHtapResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }

    return val;
}
bool ShowInstanceDatabasesForHtapResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ShowInstanceDatabasesForHtapResponse::getDatabases()
{
    return databases_;
}

void ShowInstanceDatabasesForHtapResponse::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ShowInstanceDatabasesForHtapResponse::databasesIsSet() const
{
    return databasesIsSet_;
}

void ShowInstanceDatabasesForHtapResponse::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ShowInstanceDatabasesForHtapResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowInstanceDatabasesForHtapResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowInstanceDatabasesForHtapResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowInstanceDatabasesForHtapResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ShowInstanceDatabasesForHtapResponse::getTimestamp() const
{
    return timestamp_;
}

void ShowInstanceDatabasesForHtapResponse::setTimestamp(int32_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool ShowInstanceDatabasesForHtapResponse::timestampIsSet() const
{
    return timestampIsSet_;
}

void ShowInstanceDatabasesForHtapResponse::unsettimestamp()
{
    timestampIsSet_ = false;
}

}
}
}
}
}


