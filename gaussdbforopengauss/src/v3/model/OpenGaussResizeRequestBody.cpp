

#include "huaweicloud/gaussdbforopengauss/v3/model/OpenGaussResizeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




OpenGaussResizeRequestBody::OpenGaussResizeRequestBody()
{
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
    cnConcurrentResizeNum_ = 0;
    cnConcurrentResizeNumIsSet_ = false;
    dnConcurrentResizeNum_ = 0;
    dnConcurrentResizeNumIsSet_ = false;
}

OpenGaussResizeRequestBody::~OpenGaussResizeRequestBody() = default;

void OpenGaussResizeRequestBody::validate()
{
}

web::json::value OpenGaussResizeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }
    if(cnConcurrentResizeNumIsSet_) {
        val[utility::conversions::to_string_t("cn_concurrent_resize_num")] = ModelBase::toJson(cnConcurrentResizeNum_);
    }
    if(dnConcurrentResizeNumIsSet_) {
        val[utility::conversions::to_string_t("dn_concurrent_resize_num")] = ModelBase::toJson(dnConcurrentResizeNum_);
    }

    return val;
}
bool OpenGaussResizeRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cn_concurrent_resize_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cn_concurrent_resize_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCnConcurrentResizeNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dn_concurrent_resize_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dn_concurrent_resize_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDnConcurrentResizeNum(refVal);
        }
    }
    return ok;
}


std::string OpenGaussResizeRequestBody::getFlavorRef() const
{
    return flavorRef_;
}

void OpenGaussResizeRequestBody::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool OpenGaussResizeRequestBody::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void OpenGaussResizeRequestBody::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

bool OpenGaussResizeRequestBody::isIsAutoPay() const
{
    return isAutoPay_;
}

void OpenGaussResizeRequestBody::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool OpenGaussResizeRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void OpenGaussResizeRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

int32_t OpenGaussResizeRequestBody::getCnConcurrentResizeNum() const
{
    return cnConcurrentResizeNum_;
}

void OpenGaussResizeRequestBody::setCnConcurrentResizeNum(int32_t value)
{
    cnConcurrentResizeNum_ = value;
    cnConcurrentResizeNumIsSet_ = true;
}

bool OpenGaussResizeRequestBody::cnConcurrentResizeNumIsSet() const
{
    return cnConcurrentResizeNumIsSet_;
}

void OpenGaussResizeRequestBody::unsetcnConcurrentResizeNum()
{
    cnConcurrentResizeNumIsSet_ = false;
}

int32_t OpenGaussResizeRequestBody::getDnConcurrentResizeNum() const
{
    return dnConcurrentResizeNum_;
}

void OpenGaussResizeRequestBody::setDnConcurrentResizeNum(int32_t value)
{
    dnConcurrentResizeNum_ = value;
    dnConcurrentResizeNumIsSet_ = true;
}

bool OpenGaussResizeRequestBody::dnConcurrentResizeNumIsSet() const
{
    return dnConcurrentResizeNumIsSet_;
}

void OpenGaussResizeRequestBody::unsetdnConcurrentResizeNum()
{
    dnConcurrentResizeNumIsSet_ = false;
}

}
}
}
}
}


