

#include "huaweicloud/evs/v2/model/DeleteVolumeInRecycleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteVolumeInRecycleRequest::DeleteVolumeInRecycleRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

DeleteVolumeInRecycleRequest::~DeleteVolumeInRecycleRequest() = default;

void DeleteVolumeInRecycleRequest::validate()
{
}

web::json::value DeleteVolumeInRecycleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool DeleteVolumeInRecycleRequest::fromJson(const web::json::value& val)
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


std::string DeleteVolumeInRecycleRequest::getVolumeId() const
{
    return volumeId_;
}

void DeleteVolumeInRecycleRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool DeleteVolumeInRecycleRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void DeleteVolumeInRecycleRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


