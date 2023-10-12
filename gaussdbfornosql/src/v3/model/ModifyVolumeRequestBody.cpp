

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyVolumeRequestBody::ModifyVolumeRequestBody()
{
    size_ = 0;
    sizeIsSet_ = false;
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

ModifyVolumeRequestBody::~ModifyVolumeRequestBody() = default;

void ModifyVolumeRequestBody::validate()
{
}

web::json::value ModifyVolumeRequestBody::toJson() const
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
bool ModifyVolumeRequestBody::fromJson(const web::json::value& val)
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


int32_t ModifyVolumeRequestBody::getSize() const
{
    return size_;
}

void ModifyVolumeRequestBody::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ModifyVolumeRequestBody::sizeIsSet() const
{
    return sizeIsSet_;
}

void ModifyVolumeRequestBody::unsetsize()
{
    sizeIsSet_ = false;
}

bool ModifyVolumeRequestBody::isIsAutoPay() const
{
    return isAutoPay_;
}

void ModifyVolumeRequestBody::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ModifyVolumeRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ModifyVolumeRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


