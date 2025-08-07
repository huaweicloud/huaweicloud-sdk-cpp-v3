

#include "huaweicloud/rds/v3/model/ListSqlStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSqlStatisticsRequest::ListSqlStatisticsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListSqlStatisticsRequest::~ListSqlStatisticsRequest() = default;

void ListSqlStatisticsRequest::validate()
{
}

web::json::value ListSqlStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListSqlStatisticsRequest::fromJson(const web::json::value& val)
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


std::string ListSqlStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSqlStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSqlStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSqlStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListSqlStatisticsRequest::getOffset() const
{
    return offset_;
}

void ListSqlStatisticsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSqlStatisticsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSqlStatisticsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSqlStatisticsRequest::getLimit() const
{
    return limit_;
}

void ListSqlStatisticsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSqlStatisticsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSqlStatisticsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


