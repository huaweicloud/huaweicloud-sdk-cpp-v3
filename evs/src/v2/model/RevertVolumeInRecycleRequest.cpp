

#include "huaweicloud/evs/v2/model/RevertVolumeInRecycleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RevertVolumeInRecycleRequest::RevertVolumeInRecycleRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

RevertVolumeInRecycleRequest::~RevertVolumeInRecycleRequest() = default;

void RevertVolumeInRecycleRequest::validate()
{
}

web::json::value RevertVolumeInRecycleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool RevertVolumeInRecycleRequest::fromJson(const web::json::value& val)
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


std::string RevertVolumeInRecycleRequest::getVolumeId() const
{
    return volumeId_;
}

void RevertVolumeInRecycleRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool RevertVolumeInRecycleRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void RevertVolumeInRecycleRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


