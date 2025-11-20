

#include "huaweicloud/aad/v1/model/ListInstanceIpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ListInstanceIpRuleRequest::ListInstanceIpRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListInstanceIpRuleRequest::~ListInstanceIpRuleRequest() = default;

void ListInstanceIpRuleRequest::validate()
{
}

web::json::value ListInstanceIpRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListInstanceIpRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListInstanceIpRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceIpRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceIpRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceIpRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListInstanceIpRuleRequest::getIp() const
{
    return ip_;
}

void ListInstanceIpRuleRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ListInstanceIpRuleRequest::ipIsSet() const
{
    return ipIsSet_;
}

void ListInstanceIpRuleRequest::unsetip()
{
    ipIsSet_ = false;
}

int32_t ListInstanceIpRuleRequest::getLimit() const
{
    return limit_;
}

void ListInstanceIpRuleRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceIpRuleRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceIpRuleRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListInstanceIpRuleRequest::getOffset() const
{
    return offset_;
}

void ListInstanceIpRuleRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceIpRuleRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceIpRuleRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


