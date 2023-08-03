

#include "huaweicloud/rds/v3/model/SetAuditlogPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAuditlogPolicyRequest::SetAuditlogPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetAuditlogPolicyRequest::~SetAuditlogPolicyRequest() = default;

void SetAuditlogPolicyRequest::validate()
{
}

web::json::value SetAuditlogPolicyRequest::toJson() const
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

bool SetAuditlogPolicyRequest::fromJson(const web::json::value& val)
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
            SetAuditlogPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetAuditlogPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetAuditlogPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetAuditlogPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetAuditlogPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetAuditlogPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetAuditlogPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetAuditlogPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetAuditlogPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetAuditlogPolicyRequestBody SetAuditlogPolicyRequest::getBody() const
{
    return body_;
}

void SetAuditlogPolicyRequest::setBody(const SetAuditlogPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetAuditlogPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetAuditlogPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


