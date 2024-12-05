

#include "huaweicloud/gaussdbfornosql/v3/model/ShowRedisDisabledCommandsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ShowRedisDisabledCommandsRequest::ShowRedisDisabledCommandsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowRedisDisabledCommandsRequest::~ShowRedisDisabledCommandsRequest() = default;

void ShowRedisDisabledCommandsRequest::validate()
{
}

web::json::value ShowRedisDisabledCommandsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowRedisDisabledCommandsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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


std::string ShowRedisDisabledCommandsRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowRedisDisabledCommandsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowRedisDisabledCommandsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowRedisDisabledCommandsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowRedisDisabledCommandsRequest::getType() const
{
    return type_;
}

void ShowRedisDisabledCommandsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowRedisDisabledCommandsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowRedisDisabledCommandsRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ShowRedisDisabledCommandsRequest::getOffset() const
{
    return offset_;
}

void ShowRedisDisabledCommandsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowRedisDisabledCommandsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowRedisDisabledCommandsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowRedisDisabledCommandsRequest::getLimit() const
{
    return limit_;
}

void ShowRedisDisabledCommandsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowRedisDisabledCommandsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowRedisDisabledCommandsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


