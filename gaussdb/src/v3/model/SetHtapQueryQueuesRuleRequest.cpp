

#include "huaweicloud/gaussdb/v3/model/SetHtapQueryQueuesRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetHtapQueryQueuesRuleRequest::SetHtapQueryQueuesRuleRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetHtapQueryQueuesRuleRequest::~SetHtapQueryQueuesRuleRequest() = default;

void SetHtapQueryQueuesRuleRequest::validate()
{
}

web::json::value SetHtapQueryQueuesRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetHtapQueryQueuesRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            OperateHtapQueryQueueRuleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetHtapQueryQueuesRuleRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetHtapQueryQueuesRuleRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetHtapQueryQueuesRuleRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetHtapQueryQueuesRuleRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetHtapQueryQueuesRuleRequest::getInstanceId() const
{
    return instanceId_;
}

void SetHtapQueryQueuesRuleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetHtapQueryQueuesRuleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetHtapQueryQueuesRuleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OperateHtapQueryQueueRuleReq SetHtapQueryQueuesRuleRequest::getBody() const
{
    return body_;
}

void SetHtapQueryQueuesRuleRequest::setBody(const OperateHtapQueryQueueRuleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetHtapQueryQueuesRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetHtapQueryQueuesRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


