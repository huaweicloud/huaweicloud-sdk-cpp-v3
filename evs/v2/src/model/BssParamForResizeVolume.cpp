

#include "huaweicloud/evs/model/BssParamForResizeVolume.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BssParamForResizeVolume::BssParamForResizeVolume()
{
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

BssParamForResizeVolume::~BssParamForResizeVolume() = default;

void BssParamForResizeVolume::validate()
{
}

web::json::value BssParamForResizeVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("isAutoPay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool BssParamForResizeVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("isAutoPay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isAutoPay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


std::string BssParamForResizeVolume::getIsAutoPay() const
{
    return isAutoPay_;
}

void BssParamForResizeVolume::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool BssParamForResizeVolume::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void BssParamForResizeVolume::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


