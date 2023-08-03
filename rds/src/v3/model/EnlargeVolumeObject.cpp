

#include "huaweicloud/rds/v3/model/EnlargeVolumeObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




EnlargeVolumeObject::EnlargeVolumeObject()
{
    size_ = 0;
    sizeIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

EnlargeVolumeObject::~EnlargeVolumeObject() = default;

void EnlargeVolumeObject::validate()
{
}

web::json::value EnlargeVolumeObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}

bool EnlargeVolumeObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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

int32_t EnlargeVolumeObject::getSize() const
{
    return size_;
}

void EnlargeVolumeObject::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool EnlargeVolumeObject::sizeIsSet() const
{
    return sizeIsSet_;
}

void EnlargeVolumeObject::unsetsize()
{
    sizeIsSet_ = false;
}

bool EnlargeVolumeObject::isIsAutoPay() const
{
    return isAutoPay_;
}

void EnlargeVolumeObject::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool EnlargeVolumeObject::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void EnlargeVolumeObject::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


