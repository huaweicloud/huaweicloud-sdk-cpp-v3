

#include "huaweicloud/ecs/v2/model/TemplateNetworkInterfaceAttachmentOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




TemplateNetworkInterfaceAttachmentOption::TemplateNetworkInterfaceAttachmentOption()
{
    deviceIndex_ = 0;
    deviceIndexIsSet_ = false;
}

TemplateNetworkInterfaceAttachmentOption::~TemplateNetworkInterfaceAttachmentOption() = default;

void TemplateNetworkInterfaceAttachmentOption::validate()
{
}

web::json::value TemplateNetworkInterfaceAttachmentOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIndexIsSet_) {
        val[utility::conversions::to_string_t("device_index")] = ModelBase::toJson(deviceIndex_);
    }

    return val;
}
bool TemplateNetworkInterfaceAttachmentOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceIndex(refVal);
        }
    }
    return ok;
}


int32_t TemplateNetworkInterfaceAttachmentOption::getDeviceIndex() const
{
    return deviceIndex_;
}

void TemplateNetworkInterfaceAttachmentOption::setDeviceIndex(int32_t value)
{
    deviceIndex_ = value;
    deviceIndexIsSet_ = true;
}

bool TemplateNetworkInterfaceAttachmentOption::deviceIndexIsSet() const
{
    return deviceIndexIsSet_;
}

void TemplateNetworkInterfaceAttachmentOption::unsetdeviceIndex()
{
    deviceIndexIsSet_ = false;
}

}
}
}
}
}


