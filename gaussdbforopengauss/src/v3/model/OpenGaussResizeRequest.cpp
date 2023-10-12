

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussResizeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussResizeRequest::OpenGaussResizeRequest()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

OpenGaussResizeRequest::~OpenGaussResizeRequest() = default;

void OpenGaussResizeRequest::validate()
{
}

web::json::value OpenGaussResizeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool OpenGaussResizeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
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
    return ok;
}


std::string OpenGaussResizeRequest::getFlavorRef() const
{
    return flavorRef_;
}

void OpenGaussResizeRequest::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool OpenGaussResizeRequest::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void OpenGaussResizeRequest::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

bool OpenGaussResizeRequest::isIsAutoPay() const
{
    return isAutoPay_;
}

void OpenGaussResizeRequest::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool OpenGaussResizeRequest::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void OpenGaussResizeRequest::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


