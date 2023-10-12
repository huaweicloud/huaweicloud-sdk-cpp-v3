

#include "huaweicloud/evs/v2/model/ShowVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowVolumeRequest::ShowVolumeRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

ShowVolumeRequest::~ShowVolumeRequest() = default;

void ShowVolumeRequest::validate()
{
}

web::json::value ShowVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool ShowVolumeRequest::fromJson(const web::json::value& val)
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


std::string ShowVolumeRequest::getVolumeId() const
{
    return volumeId_;
}

void ShowVolumeRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ShowVolumeRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ShowVolumeRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


