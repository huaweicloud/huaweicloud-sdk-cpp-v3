

#include "huaweicloud/dds/v3/model/ResizeInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ResizeInstanceRequestBody::ResizeInstanceRequestBody()
{
    resizeIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

ResizeInstanceRequestBody::~ResizeInstanceRequestBody() = default;

void ResizeInstanceRequestBody::validate()
{
}

web::json::value ResizeInstanceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resizeIsSet_) {
        val[utility::conversions::to_string_t("resize")] = ModelBase::toJson(resize_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool ResizeInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resize"));
        if(!fieldValue.is_null())
        {
            ResizeInstanceOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResize(refVal);
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


ResizeInstanceOption ResizeInstanceRequestBody::getResize() const
{
    return resize_;
}

void ResizeInstanceRequestBody::setResize(const ResizeInstanceOption& value)
{
    resize_ = value;
    resizeIsSet_ = true;
}

bool ResizeInstanceRequestBody::resizeIsSet() const
{
    return resizeIsSet_;
}

void ResizeInstanceRequestBody::unsetresize()
{
    resizeIsSet_ = false;
}

bool ResizeInstanceRequestBody::isIsAutoPay() const
{
    return isAutoPay_;
}

void ResizeInstanceRequestBody::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ResizeInstanceRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ResizeInstanceRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


