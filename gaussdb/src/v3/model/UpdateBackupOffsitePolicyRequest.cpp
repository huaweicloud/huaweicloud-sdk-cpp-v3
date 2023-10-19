

#include "huaweicloud/gaussdb/v3/model/UpdateBackupOffsitePolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateBackupOffsitePolicyRequest::UpdateBackupOffsitePolicyRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBackupOffsitePolicyRequest::~UpdateBackupOffsitePolicyRequest() = default;

void UpdateBackupOffsitePolicyRequest::validate()
{
}

web::json::value UpdateBackupOffsitePolicyRequest::toJson() const
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
bool UpdateBackupOffsitePolicyRequest::fromJson(const web::json::value& val)
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
            UpdateBackupOffsitePolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBackupOffsitePolicyRequest::getXLanguage() const
{
    return xLanguage_;
}

void UpdateBackupOffsitePolicyRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool UpdateBackupOffsitePolicyRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void UpdateBackupOffsitePolicyRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string UpdateBackupOffsitePolicyRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateBackupOffsitePolicyRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateBackupOffsitePolicyRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateBackupOffsitePolicyRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateBackupOffsitePolicyRequestBody UpdateBackupOffsitePolicyRequest::getBody() const
{
    return body_;
}

void UpdateBackupOffsitePolicyRequest::setBody(const UpdateBackupOffsitePolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBackupOffsitePolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBackupOffsitePolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


