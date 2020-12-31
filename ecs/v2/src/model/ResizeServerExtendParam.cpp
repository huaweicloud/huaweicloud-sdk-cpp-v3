

#include "huaweicloud/ecs/model/ResizeServerExtendParam.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizeServerExtendParam::ResizeServerExtendParam()
{
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

ResizeServerExtendParam::~ResizeServerExtendParam() = default;

void ResizeServerExtendParam::validate()
{
}

web::json::value ResizeServerExtendParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("isAutoPay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool ResizeServerExtendParam::fromJson(const web::json::value& val)
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


std::string ResizeServerExtendParam::getIsAutoPay() const
{
    return isAutoPay_;
}

void ResizeServerExtendParam::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ResizeServerExtendParam::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ResizeServerExtendParam::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


