

#include "huaweicloud/ecs/v2/model/ShowServerBlockDeviceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerBlockDeviceResponse::ShowServerBlockDeviceResponse()
{
    volumeAttachmentIsSet_ = false;
}

ShowServerBlockDeviceResponse::~ShowServerBlockDeviceResponse() = default;

void ShowServerBlockDeviceResponse::validate()
{
}

web::json::value ShowServerBlockDeviceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeAttachmentIsSet_) {
        val[utility::conversions::to_string_t("volumeAttachment")] = ModelBase::toJson(volumeAttachment_);
    }

    return val;
}

bool ShowServerBlockDeviceResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volumeAttachment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeAttachment"));
        if(!fieldValue.is_null())
        {
            ServerBlockDevice refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeAttachment(refVal);
        }
    }
    return ok;
}

ServerBlockDevice ShowServerBlockDeviceResponse::getVolumeAttachment() const
{
    return volumeAttachment_;
}

void ShowServerBlockDeviceResponse::setVolumeAttachment(const ServerBlockDevice& value)
{
    volumeAttachment_ = value;
    volumeAttachmentIsSet_ = true;
}

bool ShowServerBlockDeviceResponse::volumeAttachmentIsSet() const
{
    return volumeAttachmentIsSet_;
}

void ShowServerBlockDeviceResponse::unsetvolumeAttachment()
{
    volumeAttachmentIsSet_ = false;
}

}
}
}
}
}


