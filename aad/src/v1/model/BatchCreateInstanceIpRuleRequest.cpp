

#include "huaweicloud/aad/v1/model/BatchCreateInstanceIpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




BatchCreateInstanceIpRuleRequest::BatchCreateInstanceIpRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateInstanceIpRuleRequest::~BatchCreateInstanceIpRuleRequest() = default;

void BatchCreateInstanceIpRuleRequest::validate()
{
}

web::json::value BatchCreateInstanceIpRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchCreateInstanceIpRuleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchTransferRuleBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateInstanceIpRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchCreateInstanceIpRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchCreateInstanceIpRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchCreateInstanceIpRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BatchCreateInstanceIpRuleRequest::getIp() const
{
    return ip_;
}

void BatchCreateInstanceIpRuleRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool BatchCreateInstanceIpRuleRequest::ipIsSet() const
{
    return ipIsSet_;
}

void BatchCreateInstanceIpRuleRequest::unsetip()
{
    ipIsSet_ = false;
}

BatchTransferRuleBody BatchCreateInstanceIpRuleRequest::getBody() const
{
    return body_;
}

void BatchCreateInstanceIpRuleRequest::setBody(const BatchTransferRuleBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateInstanceIpRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateInstanceIpRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


