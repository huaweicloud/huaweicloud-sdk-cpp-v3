

#include "huaweicloud/drs/v5/model/ShowLinkFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowLinkFlavorsResponse::ShowLinkFlavorsResponse()
{
    vmFlavorIsSet_ = false;
    volumeFlavorIsSet_ = false;
    flowFlavorIsSet_ = false;
}

ShowLinkFlavorsResponse::~ShowLinkFlavorsResponse() = default;

void ShowLinkFlavorsResponse::validate()
{
}

web::json::value ShowLinkFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vmFlavorIsSet_) {
        val[utility::conversions::to_string_t("vm_flavor")] = ModelBase::toJson(vmFlavor_);
    }
    if(volumeFlavorIsSet_) {
        val[utility::conversions::to_string_t("volume_flavor")] = ModelBase::toJson(volumeFlavor_);
    }
    if(flowFlavorIsSet_) {
        val[utility::conversions::to_string_t("flow_flavor")] = ModelBase::toJson(flowFlavor_);
    }

    return val;
}
bool ShowLinkFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vm_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vm_flavor"));
        if(!fieldValue.is_null())
        {
            FlavorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_flavor"));
        if(!fieldValue.is_null())
        {
            FlavorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow_flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow_flavor"));
        if(!fieldValue.is_null())
        {
            FlavorInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlowFlavor(refVal);
        }
    }
    return ok;
}


FlavorInfo ShowLinkFlavorsResponse::getVmFlavor() const
{
    return vmFlavor_;
}

void ShowLinkFlavorsResponse::setVmFlavor(const FlavorInfo& value)
{
    vmFlavor_ = value;
    vmFlavorIsSet_ = true;
}

bool ShowLinkFlavorsResponse::vmFlavorIsSet() const
{
    return vmFlavorIsSet_;
}

void ShowLinkFlavorsResponse::unsetvmFlavor()
{
    vmFlavorIsSet_ = false;
}

FlavorInfo ShowLinkFlavorsResponse::getVolumeFlavor() const
{
    return volumeFlavor_;
}

void ShowLinkFlavorsResponse::setVolumeFlavor(const FlavorInfo& value)
{
    volumeFlavor_ = value;
    volumeFlavorIsSet_ = true;
}

bool ShowLinkFlavorsResponse::volumeFlavorIsSet() const
{
    return volumeFlavorIsSet_;
}

void ShowLinkFlavorsResponse::unsetvolumeFlavor()
{
    volumeFlavorIsSet_ = false;
}

FlavorInfo ShowLinkFlavorsResponse::getFlowFlavor() const
{
    return flowFlavor_;
}

void ShowLinkFlavorsResponse::setFlowFlavor(const FlavorInfo& value)
{
    flowFlavor_ = value;
    flowFlavorIsSet_ = true;
}

bool ShowLinkFlavorsResponse::flowFlavorIsSet() const
{
    return flowFlavorIsSet_;
}

void ShowLinkFlavorsResponse::unsetflowFlavor()
{
    flowFlavorIsSet_ = false;
}

}
}
}
}
}


