

#include "huaweicloud/cbr/v1/model/ProtectableAgentStatus.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ProtectableAgentStatus::ProtectableAgentStatus()
{
    code_ = 0;
    codeIsSet_ = false;
    installed_ = false;
    installedIsSet_ = false;
    isOld_ = false;
    isOldIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ProtectableAgentStatus::~ProtectableAgentStatus() = default;

void ProtectableAgentStatus::validate()
{
}

web::json::value ProtectableAgentStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(installedIsSet_) {
        val[utility::conversions::to_string_t("installed")] = ModelBase::toJson(installed_);
    }
    if(isOldIsSet_) {
        val[utility::conversions::to_string_t("is_old")] = ModelBase::toJson(isOld_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}

bool ProtectableAgentStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("installed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("installed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstalled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_old"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_old"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOld(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


int32_t ProtectableAgentStatus::getCode() const
{
    return code_;
}

void ProtectableAgentStatus::setCode(int32_t value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ProtectableAgentStatus::codeIsSet() const
{
    return codeIsSet_;
}

void ProtectableAgentStatus::unsetcode()
{
    codeIsSet_ = false;
}

bool ProtectableAgentStatus::isInstalled() const
{
    return installed_;
}

void ProtectableAgentStatus::setInstalled(bool value)
{
    installed_ = value;
    installedIsSet_ = true;
}

bool ProtectableAgentStatus::installedIsSet() const
{
    return installedIsSet_;
}

void ProtectableAgentStatus::unsetinstalled()
{
    installedIsSet_ = false;
}

bool ProtectableAgentStatus::isIsOld() const
{
    return isOld_;
}

void ProtectableAgentStatus::setIsOld(bool value)
{
    isOld_ = value;
    isOldIsSet_ = true;
}

bool ProtectableAgentStatus::isOldIsSet() const
{
    return isOldIsSet_;
}

void ProtectableAgentStatus::unsetisOld()
{
    isOldIsSet_ = false;
}

std::string ProtectableAgentStatus::getMessage() const
{
    return message_;
}

void ProtectableAgentStatus::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ProtectableAgentStatus::messageIsSet() const
{
    return messageIsSet_;
}

void ProtectableAgentStatus::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ProtectableAgentStatus::getResourceId() const
{
    return resourceId_;
}

void ProtectableAgentStatus::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ProtectableAgentStatus::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ProtectableAgentStatus::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ProtectableAgentStatus::getVersion() const
{
    return version_;
}

void ProtectableAgentStatus::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ProtectableAgentStatus::versionIsSet() const
{
    return versionIsSet_;
}

void ProtectableAgentStatus::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


