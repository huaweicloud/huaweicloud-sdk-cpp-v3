

#include "huaweicloud/evs/v2/model/ShowVolumeInRecycleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowVolumeInRecycleRequest::ShowVolumeInRecycleRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

ShowVolumeInRecycleRequest::~ShowVolumeInRecycleRequest() = default;

void ShowVolumeInRecycleRequest::validate()
{
}

web::json::value ShowVolumeInRecycleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool ShowVolumeInRecycleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    return ok;
}


std::string ShowVolumeInRecycleRequest::getVolumeId() const
{
    return volumeId_;
}

void ShowVolumeInRecycleRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ShowVolumeInRecycleRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ShowVolumeInRecycleRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


