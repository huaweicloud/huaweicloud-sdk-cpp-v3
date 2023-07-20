

#include "huaweicloud/dds/v3/model/ResizeInstanceVolumeRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ResizeInstanceVolumeRequestBody::ResizeInstanceVolumeRequestBody()
{
    volumeIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

ResizeInstanceVolumeRequestBody::~ResizeInstanceVolumeRequestBody() = default;

void ResizeInstanceVolumeRequestBody::validate()
{
}

web::json::value ResizeInstanceVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool ResizeInstanceVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            ResizeInstanceVolumeOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}

ResizeInstanceVolumeOption ResizeInstanceVolumeRequestBody::getVolume() const
{
    return volume_;
}

void ResizeInstanceVolumeRequestBody::setVolume(const ResizeInstanceVolumeOption& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ResizeInstanceVolumeRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void ResizeInstanceVolumeRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

bool ResizeInstanceVolumeRequestBody::isIsAutoPay() const
{
    return isAutoPay_;
}

void ResizeInstanceVolumeRequestBody::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ResizeInstanceVolumeRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ResizeInstanceVolumeRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


