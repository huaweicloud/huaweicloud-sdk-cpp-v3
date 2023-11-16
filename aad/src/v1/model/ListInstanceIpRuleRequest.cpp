

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

}
}
}
}
}


