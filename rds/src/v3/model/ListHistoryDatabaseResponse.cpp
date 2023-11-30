

#include "huaweicloud/rds/v3/model/ListHistoryDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListHistoryDatabaseResponse::ListHistoryDatabaseResponse()
{
    databaseLimit_ = 0;
    databaseLimitIsSet_ = false;
    tableLimit_ = 0;
    tableLimitIsSet_ = false;
    instancesIsSet_ = false;
}

ListHistoryDatabaseResponse::~ListHistoryDatabaseResponse() = default;

void ListHistoryDatabaseResponse::validate()
{
}

web::json::value ListHistoryDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseLimitIsSet_) {
        val[utility::conversions::to_string_t("database_limit")] = ModelBase::toJson(databaseLimit_);
    }
    if(tableLimitIsSet_) {
        val[utility::conversions::to_string_t("table_limit")] = ModelBase::toJson(tableLimit_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListHistoryDatabaseResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instances"));
        if(!fieldValue.is_null())
        {
            std::vector<HistoryDatabaseInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


int32_t ListHistoryDatabaseResponse::getDatabaseLimit() const
{
    return databaseLimit_;
}

void ListHistoryDatabaseResponse::setDatabaseLimit(int32_t value)
{
    databaseLimit_ = value;
    databaseLimitIsSet_ = true;
}

bool ListHistoryDatabaseResponse::databaseLimitIsSet() const
{
    return databaseLimitIsSet_;
}

void ListHistoryDatabaseResponse::unsetdatabaseLimit()
{
    databaseLimitIsSet_ = false;
}

int32_t ListHistoryDatabaseResponse::getTableLimit() const
{
    return tableLimit_;
}

void ListHistoryDatabaseResponse::setTableLimit(int32_t value)
{
    tableLimit_ = value;
    tableLimitIsSet_ = true;
}

bool ListHistoryDatabaseResponse::tableLimitIsSet() const
{
    return tableLimitIsSet_;
}

void ListHistoryDatabaseResponse::unsettableLimit()
{
    tableLimitIsSet_ = false;
}

std::vector<HistoryDatabaseInstance>& ListHistoryDatabaseResponse::getInstances()
{
    return instances_;
}

void ListHistoryDatabaseResponse::setInstances(const std::vector<HistoryDatabaseInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListHistoryDatabaseResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListHistoryDatabaseResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


