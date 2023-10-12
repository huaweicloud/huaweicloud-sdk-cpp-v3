

#include "huaweicloud/gaussdb/v3/model/ModifyBackupEncryptStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyBackupEncryptStatusRequest::ModifyBackupEncryptStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyBackupEncryptStatusRequest::~ModifyBackupEncryptStatusRequest() = default;

void ModifyBackupEncryptStatusRequest::validate()
{
}

web::json::value ModifyBackupEncryptStatusRequest::toJson() const
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
bool ModifyBackupEncryptStatusRequest::fromJson(const web::json::value& val)
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
            BackupEncryptRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyBackupEncryptStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ModifyBackupEncryptStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ModifyBackupEncryptStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ModifyBackupEncryptStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ModifyBackupEncryptStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyBackupEncryptStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyBackupEncryptStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyBackupEncryptStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

BackupEncryptRequest ModifyBackupEncryptStatusRequest::getBody() const
{
    return body_;
}

void ModifyBackupEncryptStatusRequest::setBody(const BackupEncryptRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyBackupEncryptStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyBackupEncryptStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


