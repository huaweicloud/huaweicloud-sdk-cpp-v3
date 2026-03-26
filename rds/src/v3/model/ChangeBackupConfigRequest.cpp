

#include "huaweicloud/rds/v3/model/ChangeBackupConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChangeBackupConfigRequest::ChangeBackupConfigRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeBackupConfigRequest::~ChangeBackupConfigRequest() = default;

void ChangeBackupConfigRequest::validate()
{
}

web::json::value ChangeBackupConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeBackupConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetConfigurationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeBackupConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeBackupConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeBackupConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeBackupConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ChangeBackupConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ChangeBackupConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ChangeBackupConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ChangeBackupConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

SetConfigurationRequestBody ChangeBackupConfigRequest::getBody() const
{
    return body_;
}

void ChangeBackupConfigRequest::setBody(const SetConfigurationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeBackupConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeBackupConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


