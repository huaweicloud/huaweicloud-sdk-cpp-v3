

#include "huaweicloud/metastudio/v1/model/PlatformLiveInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PlatformLiveInfo::PlatformLiveInfo()
{
    platformId_ = "";
    platformIdIsSet_ = false;
    liveId_ = "";
    liveIdIsSet_ = false;
}

PlatformLiveInfo::~PlatformLiveInfo() = default;

void PlatformLiveInfo::validate()
{
}

web::json::value PlatformLiveInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(platformIdIsSet_) {
        val[utility::conversions::to_string_t("platform_id")] = ModelBase::toJson(platformId_);
    }
    if(liveIdIsSet_) {
        val[utility::conversions::to_string_t("live_id")] = ModelBase::toJson(liveId_);
    }

    return val;
}
bool PlatformLiveInfo::fromJson(const web::json::value& val)
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


std::string PlatformLiveInfo::getPlatformId() const
{
    return platformId_;
}

void PlatformLiveInfo::setPlatformId(const std::string& value)
{
    platformId_ = value;
    platformIdIsSet_ = true;
}

bool PlatformLiveInfo::platformIdIsSet() const
{
    return platformIdIsSet_;
}

void PlatformLiveInfo::unsetplatformId()
{
    platformIdIsSet_ = false;
}

std::string PlatformLiveInfo::getLiveId() const
{
    return liveId_;
}

void PlatformLiveInfo::setLiveId(const std::string& value)
{
    liveId_ = value;
    liveIdIsSet_ = true;
}

bool PlatformLiveInfo::liveIdIsSet() const
{
    return liveIdIsSet_;
}

void PlatformLiveInfo::unsetliveId()
{
    liveIdIsSet_ = false;
}

}
}
}
}
}


