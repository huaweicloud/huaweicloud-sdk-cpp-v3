

#include "huaweicloud/cce/v3/model/ResizeClusterRequestBody_extendParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResizeClusterRequestBody_extendParam::ResizeClusterRequestBody_extendParam()
{
    decMasterFlavor_ = "";
    decMasterFlavorIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

ResizeClusterRequestBody_extendParam::~ResizeClusterRequestBody_extendParam() = default;

void ResizeClusterRequestBody_extendParam::validate()
{
}

web::json::value ResizeClusterRequestBody_extendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(decMasterFlavorIsSet_) {
        val[utility::conversions::to_string_t("decMasterFlavor")] = ModelBase::toJson(decMasterFlavor_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("isAutoPay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool ResizeClusterRequestBody_extendParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("decMasterFlavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("decMasterFlavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDecMasterFlavor(refVal);
        }
    }
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


std::string ResizeClusterRequestBody_extendParam::getDecMasterFlavor() const
{
    return decMasterFlavor_;
}

void ResizeClusterRequestBody_extendParam::setDecMasterFlavor(const std::string& value)
{
    decMasterFlavor_ = value;
    decMasterFlavorIsSet_ = true;
}

bool ResizeClusterRequestBody_extendParam::decMasterFlavorIsSet() const
{
    return decMasterFlavorIsSet_;
}

void ResizeClusterRequestBody_extendParam::unsetdecMasterFlavor()
{
    decMasterFlavorIsSet_ = false;
}

std::string ResizeClusterRequestBody_extendParam::getIsAutoPay() const
{
    return isAutoPay_;
}

void ResizeClusterRequestBody_extendParam::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ResizeClusterRequestBody_extendParam::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ResizeClusterRequestBody_extendParam::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


