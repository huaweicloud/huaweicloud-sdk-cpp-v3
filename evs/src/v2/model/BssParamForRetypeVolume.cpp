

#include "huaweicloud/evs/v2/model/BssParamForRetypeVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BssParamForRetypeVolume::BssParamForRetypeVolume()
{
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

BssParamForRetypeVolume::~BssParamForRetypeVolume() = default;

void BssParamForRetypeVolume::validate()
{
}

web::json::value BssParamForRetypeVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("isAutoPay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool BssParamForRetypeVolume::fromJson(const web::json::value& val)
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


std::string BssParamForRetypeVolume::getIsAutoPay() const
{
    return isAutoPay_;
}

void BssParamForRetypeVolume::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool BssParamForRetypeVolume::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void BssParamForRetypeVolume::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


