

#include "huaweicloud/aad/v1/model/BatchDeleteInstanceIpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




BatchDeleteInstanceIpRuleRequest::BatchDeleteInstanceIpRuleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteInstanceIpRuleRequest::~BatchDeleteInstanceIpRuleRequest() = default;

void BatchDeleteInstanceIpRuleRequest::validate()
{
}

web::json::value BatchDeleteInstanceIpRuleRequest::toJson() const
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
bool BatchDeleteInstanceIpRuleRequest::fromJson(const web::json::value& val)
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
            BatchIdBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteInstanceIpRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void BatchDeleteInstanceIpRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool BatchDeleteInstanceIpRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void BatchDeleteInstanceIpRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string BatchDeleteInstanceIpRuleRequest::getIp() const
{
    return ip_;
}

void BatchDeleteInstanceIpRuleRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool BatchDeleteInstanceIpRuleRequest::ipIsSet() const
{
    return ipIsSet_;
}

void BatchDeleteInstanceIpRuleRequest::unsetip()
{
    ipIsSet_ = false;
}

BatchIdBody BatchDeleteInstanceIpRuleRequest::getBody() const
{
    return body_;
}

void BatchDeleteInstanceIpRuleRequest::setBody(const BatchIdBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteInstanceIpRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteInstanceIpRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


