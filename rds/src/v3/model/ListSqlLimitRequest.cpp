

#include "huaweicloud/rds/v3/model/ListSqlLimitRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSqlLimitRequest::ListSqlLimitRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSqlLimitRequest::~ListSqlLimitRequest() = default;

void ListSqlLimitRequest::validate()
{
}

web::json::value ListSqlLimitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSqlLimitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListSqlLimitRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlLimitRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlLimitRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlLimitRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSqlLimitRequest::getDbName() const
{
    return dbName_;
}

void ListSqlLimitRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListSqlLimitRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListSqlLimitRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

int32_t ListSqlLimitRequest::getOffset() const
{
    return offset_;
}

void ListSqlLimitRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSqlLimitRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSqlLimitRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSqlLimitRequest::getLimit() const
{
    return limit_;
}

void ListSqlLimitRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSqlLimitRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSqlLimitRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


