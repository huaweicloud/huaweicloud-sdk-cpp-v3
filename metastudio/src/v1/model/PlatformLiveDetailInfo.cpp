

#include "huaweicloud/metastudio/v1/model/PlatformLiveDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PlatformLiveDetailInfo::PlatformLiveDetailInfo()
{
    platformId_ = "";
    platformIdIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
    liveId_ = "";
    liveIdIsSet_ = false;
}

PlatformLiveDetailInfo::~PlatformLiveDetailInfo() = default;

void PlatformLiveDetailInfo::validate()
{
}

web::json::value PlatformLiveDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformIdIsSet_) {
        val[utility::conversions::to_string_t("platform_id")] = ModelBase::toJson(platformId_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }
    if(liveIdIsSet_) {
        val[utility::conversions::to_string_t("live_id")] = ModelBase::toJson(liveId_);
    }

    return val;
}
bool PlatformLiveDetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("platform_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveId(refVal);
        }
    }
    return ok;
}


std::string PlatformLiveDetailInfo::getPlatformId() const
{
    return platformId_;
}

void PlatformLiveDetailInfo::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool PlatformLiveDetailInfo::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void PlatformLiveDetailInfo::unsetplatformId()
{
    platformIdIsSet_ = false;
}

std::string PlatformLiveDetailInfo::getPlatform() const
{
    return platform_;
}

void PlatformLiveDetailInfo::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool PlatformLiveDetailInfo::platformIsSet() const
{
    return platformIsSet_;
}

void PlatformLiveDetailInfo::unsetplatform()
{
    platformIsSet_ = false;
}

std::string PlatformLiveDetailInfo::getAccount() const
{
    return account_;
}

void PlatformLiveDetailInfo::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool PlatformLiveDetailInfo::accountIsSet() const
{
    return accountIsSet_;
}

void PlatformLiveDetailInfo::unsetaccount()
{
    accountIsSet_ = false;
}

std::string PlatformLiveDetailInfo::getLiveId() const
{
    return liveId_;
}

void PlatformLiveDetailInfo::setLiveId(const std::string& value)
{
    liveId_ = value;
    liveIdIsSet_ = true;
}

bool PlatformLiveDetailInfo::liveIdIsSet() const
{
    return liveIdIsSet_;
}

void PlatformLiveDetailInfo::unsetliveId()
{
    liveIdIsSet_ = false;
}

}
}
}
}
}


