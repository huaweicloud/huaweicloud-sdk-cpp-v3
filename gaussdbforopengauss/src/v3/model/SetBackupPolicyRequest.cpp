

#include "huaweicloud/gaussdbforopengauss/v3/model/SetBackupPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SetBackupPolicyRequest::SetBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetBackupPolicyRequest::~SetBackupPolicyRequest() = default;

void SetBackupPolicyRequest::validate()
{
}

web::json::value SetBackupPolicyRequest::toJson() const
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

bool SetBackupPolicyRequest::fromJson(const web::json::value& val)
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
            SetBackupPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetBackupPolicyRequestBody SetBackupPolicyRequest::getBody() const
{
    return body_;
}

void SetBackupPolicyRequest::setBody(const SetBackupPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetBackupPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetBackupPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


