

#include "huaweicloud/iotdm/v5/model/UpdateForwardingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




UpdateForwardingInfo::UpdateForwardingInfo()
{
    enableSnat_ = false;
    enableSnatIsSet_ = false;
}

UpdateForwardingInfo::~UpdateForwardingInfo() = default;

void UpdateForwardingInfo::validate()
{
}

web::json::value UpdateForwardingInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableSnatIsSet_) {
        val[utility::conversions::to_string_t("enable_snat")] = ModelBase::toJson(enableSnat_);
    }

    return val;
}
bool UpdateForwardingInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


bool UpdateForwardingInfo::isEnableSnat() const
{
    return enableSnat_;
}

void UpdateForwardingInfo::setEnableSnat(bool value)
{
    enableSnat_ = value;
    enableSnatIsSet_ = true;
}

bool UpdateForwardingInfo::enableSnatIsSet() const
{
    return enableSnatIsSet_;
}

void UpdateForwardingInfo::unsetenableSnat()
{
    enableSnatIsSet_ = false;
}

}
}
}
}
}


