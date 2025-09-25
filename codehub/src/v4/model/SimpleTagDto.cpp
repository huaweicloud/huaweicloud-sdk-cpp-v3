

#include "huaweicloud/codehub/v4/model/SimpleTagDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




SimpleTagDto::SimpleTagDto()
{
    name_ = "";
    nameIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    target_ = "";
    targetIsSet_ = false;
    gpgKeyIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canRead_ = false;
    canReadIsSet_ = false;
    canDownload_ = false;
    canDownloadIsSet_ = false;
}

SimpleTagDto::~SimpleTagDto() = default;

void SimpleTagDto::validate()
{
}

web::json::value SimpleTagDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(gpgKeyIsSet_) {
        val[utility::conversions::to_string_t("gpgKey")] = ModelBase::toJson(gpgKey_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("can_delete")] = ModelBase::toJson(canDelete_);
    }
    if(canReadIsSet_) {
        val[utility::conversions::to_string_t("can_read")] = ModelBase::toJson(canRead_);
    }
    if(canDownloadIsSet_) {
        val[utility::conversions::to_string_t("can_download")] = ModelBase::toJson(canDownload_);
    }

    return val;
}
bool SimpleTagDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gpgKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gpgKey"));
        if(!fieldValue.is_null())
        {
            GpgKeyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGpgKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_delete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_delete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_read"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_read"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanRead(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_download"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_download"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDownload(refVal);
        }
    }
    return ok;
}


std::string SimpleTagDto::getName() const
{
    return name_;
}

void SimpleTagDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SimpleTagDto::nameIsSet() const
{
    return nameIsSet_;
}

void SimpleTagDto::unsetname()
{
    nameIsSet_ = false;
}

std::string SimpleTagDto::getMessage() const
{
    return message_;
}

void SimpleTagDto::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool SimpleTagDto::messageIsSet() const
{
    return messageIsSet_;
}

void SimpleTagDto::unsetmessage()
{
    messageIsSet_ = false;
}

std::string SimpleTagDto::getTarget() const
{
    return target_;
}

void SimpleTagDto::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool SimpleTagDto::targetIsSet() const
{
    return targetIsSet_;
}

void SimpleTagDto::unsettarget()
{
    targetIsSet_ = false;
}

GpgKeyDto SimpleTagDto::getGpgKey() const
{
    return gpgKey_;
}

void SimpleTagDto::setGpgKey(const GpgKeyDto& value)
{
    gpgKey_ = value;
    gpgKeyIsSet_ = true;
}

bool SimpleTagDto::gpgKeyIsSet() const
{
    return gpgKeyIsSet_;
}

void SimpleTagDto::unsetgpgKey()
{
    gpgKeyIsSet_ = false;
}

bool SimpleTagDto::isCanDelete() const
{
    return canDelete_;
}

void SimpleTagDto::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool SimpleTagDto::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void SimpleTagDto::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool SimpleTagDto::isCanRead() const
{
    return canRead_;
}

void SimpleTagDto::setCanRead(bool value)
{
    canRead_ = value;
    canReadIsSet_ = true;
}

bool SimpleTagDto::canReadIsSet() const
{
    return canReadIsSet_;
}

void SimpleTagDto::unsetcanRead()
{
    canReadIsSet_ = false;
}

bool SimpleTagDto::isCanDownload() const
{
    return canDownload_;
}

void SimpleTagDto::setCanDownload(bool value)
{
    canDownload_ = value;
    canDownloadIsSet_ = true;
}

bool SimpleTagDto::canDownloadIsSet() const
{
    return canDownloadIsSet_;
}

void SimpleTagDto::unsetcanDownload()
{
    canDownloadIsSet_ = false;
}

}
}
}
}
}


