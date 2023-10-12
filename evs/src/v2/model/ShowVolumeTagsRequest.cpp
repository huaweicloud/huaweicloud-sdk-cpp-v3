

#include "huaweicloud/evs/v2/model/ShowVolumeTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ShowVolumeTagsRequest::ShowVolumeTagsRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
}

ShowVolumeTagsRequest::~ShowVolumeTagsRequest() = default;

void ShowVolumeTagsRequest::validate()
{
}

web::json::value ShowVolumeTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }

    return val;
}
bool ShowVolumeTagsRequest::fromJson(const web::json::value& val)
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


std::string ShowVolumeTagsRequest::getVolumeId() const
{
    return volumeId_;
}

void ShowVolumeTagsRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ShowVolumeTagsRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ShowVolumeTagsRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

}
}
}
}
}


