

#include "huaweicloud/eip/v2/model/UpdatePrePaidBandwidthExtendParamOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdatePrePaidBandwidthExtendParamOption::UpdatePrePaidBandwidthExtendParamOption()
{
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

UpdatePrePaidBandwidthExtendParamOption::~UpdatePrePaidBandwidthExtendParamOption() = default;

void UpdatePrePaidBandwidthExtendParamOption::validate()
{
}

web::json::value UpdatePrePaidBandwidthExtendParamOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool UpdatePrePaidBandwidthExtendParamOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


bool UpdatePrePaidBandwidthExtendParamOption::isIsAutoPay() const
{
    return isAutoPay_;
}

void UpdatePrePaidBandwidthExtendParamOption::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool UpdatePrePaidBandwidthExtendParamOption::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void UpdatePrePaidBandwidthExtendParamOption::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


