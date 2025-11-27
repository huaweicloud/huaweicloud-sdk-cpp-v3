

#include "huaweicloud/evs/v2/model/ShowVolumeInRecycleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowVolumeInRecycleResponse::ShowVolumeInRecycleResponse()
{
    volumeIsSet_ = false;
}

ShowVolumeInRecycleResponse::~ShowVolumeInRecycleResponse() = default;

void ShowVolumeInRecycleResponse::validate()
{
}

web::json::value ShowVolumeInRecycleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIsSet_) {
        val[utility::conversions::to_string_t("volume")] = ModelBase::toJson(volume_);
    }

    return val;
}
bool ShowVolumeInRecycleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume"));
        if(!fieldValue.is_null())
        {
            RecycleBinVolume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolume(refVal);
        }
    }
    return ok;
}


RecycleBinVolume ShowVolumeInRecycleResponse::getVolume() const
{
    return volume_;
}

void ShowVolumeInRecycleResponse::setVolume(const RecycleBinVolume& value)
{
    volume_ = value;
    volumeIsSet_ = true;
}

bool ShowVolumeInRecycleResponse::volumeIsSet() const
{
    return volumeIsSet_;
}

void ShowVolumeInRecycleResponse::unsetvolume()
{
    volumeIsSet_ = false;
}

}
}
}
}
}


