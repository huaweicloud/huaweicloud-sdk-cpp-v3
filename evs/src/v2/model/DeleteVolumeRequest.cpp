

#include "huaweicloud/evs/v2/model/DeleteVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteVolumeRequest::DeleteVolumeRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

DeleteVolumeRequest::~DeleteVolumeRequest() = default;

void DeleteVolumeRequest::validate()
{
}

web::json::value DeleteVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}

bool DeleteVolumeRequest::fromJson(const web::json::value& val)
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

std::string DeleteVolumeRequest::getVolumeId() const
{
    return volumeId_;
}

void DeleteVolumeRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool DeleteVolumeRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void DeleteVolumeRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


