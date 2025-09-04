

#include "huaweicloud/iotdm/v5/model/ForwardingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ForwardingInfo::ForwardingInfo()
{
    eip_ = "";
    eipIsSet_ = false;
    enableSnat_ = false;
    enableSnatIsSet_ = false;
}

ForwardingInfo::~ForwardingInfo() = default;

void ForwardingInfo::validate()
{
}

web::json::value ForwardingInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eipIsSet_) {
        val[utility::conversions::to_string_t("eip")] = ModelBase::toJson(eip_);
    }
    if(enableSnatIsSet_) {
        val[utility::conversions::to_string_t("enable_snat")] = ModelBase::toJson(enableSnat_);
    }

    return val;
}
bool ForwardingInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_snat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_snat"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSnat(refVal);
        }
    }
    return ok;
}


std::string ForwardingInfo::getEip() const
{
    return eip_;
}

void ForwardingInfo::setEip(const std::string& value)
{
    eip_ = value;
    eipIsSet_ = true;
}

bool ForwardingInfo::eipIsSet() const
{
    return eipIsSet_;
}

void ForwardingInfo::unseteip()
{
    eipIsSet_ = false;
}

bool ForwardingInfo::isEnableSnat() const
{
    return enableSnat_;
}

void ForwardingInfo::setEnableSnat(bool value)
{
    enableSnat_ = value;
    enableSnatIsSet_ = true;
}

bool ForwardingInfo::enableSnatIsSet() const
{
    return enableSnatIsSet_;
}

void ForwardingInfo::unsetenableSnat()
{
    enableSnatIsSet_ = false;
}

}
}
}
}
}


