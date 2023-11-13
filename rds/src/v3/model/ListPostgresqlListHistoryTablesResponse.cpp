

#include "huaweicloud/rds/v3/model/ListPostgresqlListHistoryTablesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPostgresqlListHistoryTablesResponse::ListPostgresqlListHistoryTablesResponse()
{
    tableLimit_ = 0;
    tableLimitIsSet_ = false;
    instancesIsSet_ = false;
}

ListPostgresqlListHistoryTablesResponse::~ListPostgresqlListHistoryTablesResponse() = default;

void ListPostgresqlListHistoryTablesResponse::validate()
{
}

web::json::value ListPostgresqlListHistoryTablesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableLimitIsSet_) {
        val[utility::conversions::to_string_t("table_limit")] = ModelBase::toJson(tableLimit_);
    }
    if(instancesIsSet_) {
        val[utility::conversions::to_string_t("instances")] = ModelBase::toJson(instances_);
    }

    return val;
}
bool ListPostgresqlListHistoryTablesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<PostgreSQLHistoryTableInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstances(refVal);
        }
    }
    return ok;
}


int32_t ListPostgresqlListHistoryTablesResponse::getTableLimit() const
{
    return tableLimit_;
}

void ListPostgresqlListHistoryTablesResponse::setTableLimit(int32_t value)
{
    tableLimit_ = value;
    tableLimitIsSet_ = true;
}

bool ListPostgresqlListHistoryTablesResponse::tableLimitIsSet() const
{
    return tableLimitIsSet_;
}

void ListPostgresqlListHistoryTablesResponse::unsettableLimit()
{
    tableLimitIsSet_ = false;
}

std::vector<PostgreSQLHistoryTableInstance>& ListPostgresqlListHistoryTablesResponse::getInstances()
{
    return instances_;
}

void ListPostgresqlListHistoryTablesResponse::setInstances(const std::vector<PostgreSQLHistoryTableInstance>& value)
{
    instances_ = value;
    instancesIsSet_ = true;
}

bool ListPostgresqlListHistoryTablesResponse::instancesIsSet() const
{
    return instancesIsSet_;
}

void ListPostgresqlListHistoryTablesResponse::unsetinstances()
{
    instancesIsSet_ = false;
}

}
}
}
}
}


