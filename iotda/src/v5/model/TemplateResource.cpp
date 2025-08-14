

#include "huaweicloud/iotda/v5/model/TemplateResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




TemplateResource::TemplateResource()
{
    deviceIsSet_ = false;
    policyIsSet_ = false;
}

TemplateResource::~TemplateResource() = default;

void TemplateResource::validate()
{
}

web::json::value TemplateResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIsSet_) {
        val[utility::conversions::to_string_t("device")] = ModelBase::toJson(device_);
    }
    if(policyIsSet_) {
        val[utility::conversions::to_string_t("policy")] = ModelBase::toJson(policy_);
    }

    return val;
}
bool TemplateResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device"));
        if(!fieldValue.is_null())
        {
            DeviceResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy"));
        if(!fieldValue.is_null())
        {
            PolicyResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicy(refVal);
        }
    }
    return ok;
}


DeviceResource TemplateResource::getDevice() const
{
    return device_;
}

void TemplateResource::setDevice(const DeviceResource& value)
{
    device_ = value;
    deviceIsSet_ = true;
}

bool TemplateResource::deviceIsSet() const
{
    return deviceIsSet_;
}

void TemplateResource::unsetdevice()
{
    deviceIsSet_ = false;
}

PolicyResource TemplateResource::getPolicy() const
{
    return policy_;
}

void TemplateResource::setPolicy(const PolicyResource& value)
{
    policy_ = value;
    policyIsSet_ = true;
}

bool TemplateResource::policyIsSet() const
{
    return policyIsSet_;
}

void TemplateResource::unsetpolicy()
{
    policyIsSet_ = false;
}

}
}
}
}
}


