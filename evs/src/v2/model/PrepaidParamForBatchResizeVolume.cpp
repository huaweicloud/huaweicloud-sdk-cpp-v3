

#include "huaweicloud/evs/v2/model/PrepaidParamForBatchResizeVolume.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




PrepaidParamForBatchResizeVolume::PrepaidParamForBatchResizeVolume()
{
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

PrepaidParamForBatchResizeVolume::~PrepaidParamForBatchResizeVolume() = default;

void PrepaidParamForBatchResizeVolume::validate()
{
}

web::json::value PrepaidParamForBatchResizeVolume::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool PrepaidParamForBatchResizeVolume::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


std::string PrepaidParamForBatchResizeVolume::getIsAutoPay() const
{
    return isAutoPay_;
}

void PrepaidParamForBatchResizeVolume::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool PrepaidParamForBatchResizeVolume::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void PrepaidParamForBatchResizeVolume::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


