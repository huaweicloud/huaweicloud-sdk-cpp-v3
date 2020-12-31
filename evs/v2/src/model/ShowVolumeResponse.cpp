

#include "huaweicloud/evs/model/ShowVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowVolumeResponse::ShowVolumeResponse()
{
    volumeIsSet_ = false;
}

ShowVolumeResponse::~ShowVolumeResponse() = default;

void ShowVolumeResponse::validate()
{
}

web::json::value ShowVolumeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }

    return val;
}

bool ShowVolumeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            VolumeDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    return ok;
}


VolumeDetail ShowVolumeResponse::getVolume() const
{
    return volume_;
}

void ShowVolumeResponse::setVolume(const VolumeDetail& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ShowVolumeResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void ShowVolumeResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


