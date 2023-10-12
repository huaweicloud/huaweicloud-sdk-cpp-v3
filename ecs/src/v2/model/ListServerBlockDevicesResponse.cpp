

#include "huaweicloud/ecs/v2/model/ListServerBlockDevicesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServerBlockDevicesResponse::ListServerBlockDevicesResponse()
{
    attachableQuantityIsSet_ = false;
    volumeAttachmentsIsSet_ = false;
}

ListServerBlockDevicesResponse::~ListServerBlockDevicesResponse() = default;

void ListServerBlockDevicesResponse::validate()
{
}

web::json::value ListServerBlockDevicesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachableQuantityIsSet_) {
        val[utility::conversions::to_string_t("attachableQuantity")] = ModelBase::toJson(attachableQuantity_);
    }
    if(volumeAttachmentsIsSet_) {
        val[utility::conversions::to_string_t("volumeAttachments")] = ModelBase::toJson(volumeAttachments_);
    }

    return val;
}
bool ListServerBlockDevicesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attachableQuantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attachableQuantity"));
        if(!fieldValue.is_null())
        {
            BlockDeviceAttachableQuantity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachableQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeAttachments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeAttachments"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerBlockDevice> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeAttachments(refVal);
        }
    }
    return ok;
}


BlockDeviceAttachableQuantity ListServerBlockDevicesResponse::getAttachableQuantity() const
{
    return attachableQuantity_;
}

void ListServerBlockDevicesResponse::setAttachableQuantity(const BlockDeviceAttachableQuantity& value)
{
    attachableQuantity_ = value;
    attachableQuantityIsSet_ = true;
}

bool ListServerBlockDevicesResponse::attachableQuantityIsSet() const
{
    return attachableQuantityIsSet_;
}

void ListServerBlockDevicesResponse::unsetattachableQuantity()
{
    attachableQuantityIsSet_ = false;
}

std::vector<ServerBlockDevice>& ListServerBlockDevicesResponse::getVolumeAttachments()
{
    return volumeAttachments_;
}

void ListServerBlockDevicesResponse::setVolumeAttachments(const std::vector<ServerBlockDevice>& value)
{
    volumeAttachments_ = value;
    volumeAttachmentsIsSet_ = true;
}

bool ListServerBlockDevicesResponse::volumeAttachmentsIsSet() const
{
    return volumeAttachmentsIsSet_;
}

void ListServerBlockDevicesResponse::unsetvolumeAttachments()
{
    volumeAttachmentsIsSet_ = false;
}

}
}
}
}
}


