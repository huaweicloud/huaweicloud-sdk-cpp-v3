

#include "huaweicloud/codehub/v4/model/BranchSimpleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BranchSimpleDto::BranchSimpleDto()
{
    name_ = "";
    nameIsSet_ = false;
    default_ = false;
    defaultIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canRead_ = false;
    canReadIsSet_ = false;
    canDownload_ = false;
    canDownloadIsSet_ = false;
    canPush_ = false;
    canPushIsSet_ = false;
}

BranchSimpleDto::~BranchSimpleDto() = default;

void BranchSimpleDto::validate()
{
}

web::json::value BranchSimpleDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(defaultIsSet_) {
        val[utility::conversions::to_string_t("default")] = ModelBase::toJson(default_);
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
    if(canPushIsSet_) {
        val[utility::conversions::to_string_t("can_push")] = ModelBase::toJson(canPush_);
    }

    return val;
}
bool BranchSimpleDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefault(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanPush(refVal);
        }
    }
    return ok;
}


std::string BranchSimpleDto::getName() const
{
    return name_;
}

void BranchSimpleDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BranchSimpleDto::nameIsSet() const
{
    return nameIsSet_;
}

void BranchSimpleDto::unsetname()
{
    nameIsSet_ = false;
}

bool BranchSimpleDto::isDefault() const
{
    return default_;
}

void BranchSimpleDto::setDefault(bool value)
{
    default_ = value;
    defaultIsSet_ = true;
}

bool BranchSimpleDto::defaultIsSet() const
{
    return defaultIsSet_;
}

void BranchSimpleDto::unsetdefault()
{
    defaultIsSet_ = false;
}

bool BranchSimpleDto::isCanDelete() const
{
    return canDelete_;
}

void BranchSimpleDto::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool BranchSimpleDto::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void BranchSimpleDto::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool BranchSimpleDto::isCanRead() const
{
    return canRead_;
}

void BranchSimpleDto::setCanRead(bool value)
{
    canRead_ = value;
    canReadIsSet_ = true;
}

bool BranchSimpleDto::canReadIsSet() const
{
    return canReadIsSet_;
}

void BranchSimpleDto::unsetcanRead()
{
    canReadIsSet_ = false;
}

bool BranchSimpleDto::isCanDownload() const
{
    return canDownload_;
}

void BranchSimpleDto::setCanDownload(bool value)
{
    canDownload_ = value;
    canDownloadIsSet_ = true;
}

bool BranchSimpleDto::canDownloadIsSet() const
{
    return canDownloadIsSet_;
}

void BranchSimpleDto::unsetcanDownload()
{
    canDownloadIsSet_ = false;
}

bool BranchSimpleDto::isCanPush() const
{
    return canPush_;
}

void BranchSimpleDto::setCanPush(bool value)
{
    canPush_ = value;
    canPushIsSet_ = true;
}

bool BranchSimpleDto::canPushIsSet() const
{
    return canPushIsSet_;
}

void BranchSimpleDto::unsetcanPush()
{
    canPushIsSet_ = false;
}

}
}
}
}
}


