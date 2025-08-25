

#include "huaweicloud/cce/v3/model/AddonInstanceStatus.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddonInstanceStatus::AddonInstanceStatus()
{
    status_ = "";
    statusIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    targetVersionsIsSet_ = false;
    currentVersionIsSet_ = false;
    isRollbackable_ = false;
    isRollbackableIsSet_ = false;
    previousVersion_ = "";
    previousVersionIsSet_ = false;
}

AddonInstanceStatus::~AddonInstanceStatus() = default;

void AddonInstanceStatus::validate()
{
}

web::json::value AddonInstanceStatus::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("Reason")] = ModelBase::toJson(reason_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(targetVersionsIsSet_) {
        val[utility::conversions::to_string_t("targetVersions")] = ModelBase::toJson(targetVersions_);
    }
    if(currentVersionIsSet_) {
        val[utility::conversions::to_string_t("currentVersion")] = ModelBase::toJson(currentVersion_);
    }
    if(isRollbackableIsSet_) {
        val[utility::conversions::to_string_t("isRollbackable")] = ModelBase::toJson(isRollbackable_);
    }
    if(previousVersionIsSet_) {
        val[utility::conversions::to_string_t("previousVersion")] = ModelBase::toJson(previousVersion_);
    }

    return val;
}
bool AddonInstanceStatus::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("targetVersions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("targetVersions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetVersions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("currentVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("currentVersion"));
        if(!fieldValue.is_null())
        {
            Versions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isRollbackable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isRollbackable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRollbackable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("previousVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("previousVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPreviousVersion(refVal);
        }
    }
    return ok;
}


std::string AddonInstanceStatus::getStatus() const
{
    return status_;
}

void AddonInstanceStatus::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddonInstanceStatus::statusIsSet() const
{
    return statusIsSet_;
}

void AddonInstanceStatus::unsetstatus()
{
    statusIsSet_ = false;
}

std::string AddonInstanceStatus::getReason() const
{
    return reason_;
}

void AddonInstanceStatus::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool AddonInstanceStatus::reasonIsSet() const
{
    return reasonIsSet_;
}

void AddonInstanceStatus::unsetreason()
{
    reasonIsSet_ = false;
}

std::string AddonInstanceStatus::getMessage() const
{
    return message_;
}

void AddonInstanceStatus::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AddonInstanceStatus::messageIsSet() const
{
    return messageIsSet_;
}

void AddonInstanceStatus::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<std::string>& AddonInstanceStatus::getTargetVersions()
{
    return targetVersions_;
}

void AddonInstanceStatus::setTargetVersions(const std::vector<std::string>& value)
{
    targetVersions_ = value;
    targetVersionsIsSet_ = true;
}

bool AddonInstanceStatus::targetVersionsIsSet() const
{
    return targetVersionsIsSet_;
}

void AddonInstanceStatus::unsettargetVersions()
{
    targetVersionsIsSet_ = false;
}

Versions AddonInstanceStatus::getCurrentVersion() const
{
    return currentVersion_;
}

void AddonInstanceStatus::setCurrentVersion(const Versions& value)
{
    currentVersion_ = value;
    currentVersionIsSet_ = true;
}

bool AddonInstanceStatus::currentVersionIsSet() const
{
    return currentVersionIsSet_;
}

void AddonInstanceStatus::unsetcurrentVersion()
{
    currentVersionIsSet_ = false;
}

bool AddonInstanceStatus::isIsRollbackable() const
{
    return isRollbackable_;
}

void AddonInstanceStatus::setIsRollbackable(bool value)
{
    isRollbackable_ = value;
    isRollbackableIsSet_ = true;
}

bool AddonInstanceStatus::isRollbackableIsSet() const
{
    return isRollbackableIsSet_;
}

void AddonInstanceStatus::unsetisRollbackable()
{
    isRollbackableIsSet_ = false;
}

std::string AddonInstanceStatus::getPreviousVersion() const
{
    return previousVersion_;
}

void AddonInstanceStatus::setPreviousVersion(const std::string& value)
{
    previousVersion_ = value;
    previousVersionIsSet_ = true;
}

bool AddonInstanceStatus::previousVersionIsSet() const
{
    return previousVersionIsSet_;
}

void AddonInstanceStatus::unsetpreviousVersion()
{
    previousVersionIsSet_ = false;
}

}
}
}
}
}


