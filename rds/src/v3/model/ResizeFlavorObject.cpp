

#include "huaweicloud/rds/v3/model/ResizeFlavorObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ResizeFlavorObject::ResizeFlavorObject()
{
    specCode_ = "";
    specCodeIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    isDelay_ = false;
    isDelayIsSet_ = false;
}

ResizeFlavorObject::~ResizeFlavorObject() = default;

void ResizeFlavorObject::validate()
{
}

web::json::value ResizeFlavorObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(isDelayIsSet_) {
        val[utility::conversions::to_string_t("is_delay")] = ModelBase::toJson(isDelay_);
    }

    return val;
}
bool ResizeFlavorObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDelay(refVal);
        }
    }
    return ok;
}


std::string ResizeFlavorObject::getSpecCode() const
{
    return specCode_;
}

void ResizeFlavorObject::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool ResizeFlavorObject::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void ResizeFlavorObject::unsetspecCode()
{
    specCodeIsSet_ = false;
}

bool ResizeFlavorObject::isIsAutoPay() const
{
    return isAutoPay_;
}

void ResizeFlavorObject::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ResizeFlavorObject::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ResizeFlavorObject::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

bool ResizeFlavorObject::isIsDelay() const
{
    return isDelay_;
}

void ResizeFlavorObject::setIsDelay(bool value)
{
    isDelay_ = value;
    isDelayIsSet_ = true;
}

bool ResizeFlavorObject::isDelayIsSet() const
{
    return isDelayIsSet_;
}

void ResizeFlavorObject::unsetisDelay()
{
    isDelayIsSet_ = false;
}

}
}
}
}
}


