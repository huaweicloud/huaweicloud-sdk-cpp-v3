

#include "huaweicloud/rds/v3/model/SetOffSiteBackupPolicyRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetOffSiteBackupPolicyRequest::SetOffSiteBackupPolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetOffSiteBackupPolicyRequest::~SetOffSiteBackupPolicyRequest() = default;

void SetOffSiteBackupPolicyRequest::validate()
{
}

web::json::value SetOffSiteBackupPolicyRequest::toJson() const
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

bool SetOffSiteBackupPolicyRequest::fromJson(const web::json::value& val)
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
            SetOffSiteBackupPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string SetOffSiteBackupPolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void SetOffSiteBackupPolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool SetOffSiteBackupPolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void SetOffSiteBackupPolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string SetOffSiteBackupPolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void SetOffSiteBackupPolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool SetOffSiteBackupPolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void SetOffSiteBackupPolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetOffSiteBackupPolicyRequestBody SetOffSiteBackupPolicyRequest::getBody() const
{
    return body_;
}

void SetOffSiteBackupPolicyRequest::setBody(const SetOffSiteBackupPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetOffSiteBackupPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetOffSiteBackupPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


