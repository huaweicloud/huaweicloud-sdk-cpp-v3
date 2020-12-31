

#include "huaweicloud/evs/model/UpdateVolumeRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateVolumeRequestBody::UpdateVolumeRequestBody()
{
    volumeIsSet_ = false;
}

UpdateVolumeRequestBody::~UpdateVolumeRequestBody() = default;

void UpdateVolumeRequestBody::validate()
{
}

web::json::value UpdateVolumeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }

    return val;
}

bool UpdateVolumeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            UpdateVolumeOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    return ok;
}


UpdateVolumeOption UpdateVolumeRequestBody::getVolume() const
{
    return volume_;
}

void UpdateVolumeRequestBody::setVolume(const UpdateVolumeOption& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool UpdateVolumeRequestBody::volumeIsSet() const
{
    return volumeIsSet_;
}

void UpdateVolumeRequestBody::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


