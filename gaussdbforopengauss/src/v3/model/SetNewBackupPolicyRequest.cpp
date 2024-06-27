

#include "huaweicloud/gaussdbforopengauss/v3/model/SetNewBackupPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SetNewBackupPolicyRequest::SetNewBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetNewBackupPolicyRequest::~SetNewBackupPolicyRequest() = default;

void SetNewBackupPolicyRequest::validate()
{
}

web::json::value SetNewBackupPolicyRequest::toJson() const
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
bool SetNewBackupPolicyRequest::fromJson(const web::json::value& val)
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
            SetNewBackupPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetNewBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetNewBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetNewBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetNewBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetNewBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetNewBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetNewBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetNewBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetNewBackupPolicyRequestBody SetNewBackupPolicyRequest::getBody() const
{
    return body_;
}

void SetNewBackupPolicyRequest::setBody(const SetNewBackupPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetNewBackupPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetNewBackupPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


