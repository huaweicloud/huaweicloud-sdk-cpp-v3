

#include "huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResizeInstanceVolumeRequestBody::ResizeInstanceVolumeRequestBody()
{
    size_ = 0;
    sizeIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

ResizeInstanceVolumeRequestBody::~ResizeInstanceVolumeRequestBody() = default;

void ResizeInstanceVolumeRequestBody::validate()
{
}

web::json::value ResizeInstanceVolumeRequestBody::toJson() const
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
bool ResizeInstanceVolumeRequestBody::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


int32_t ResizeInstanceVolumeRequestBody::getSize() const
{
    return size_;
}

void ResizeInstanceVolumeRequestBody::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ResizeInstanceVolumeRequestBody::sizeIsSet() const
{
    return sizeIsSet_;
}

void ResizeInstanceVolumeRequestBody::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ResizeInstanceVolumeRequestBody::getIsAutoPay() const
{
    return isAutoPay_;
}

void ResizeInstanceVolumeRequestBody::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ResizeInstanceVolumeRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ResizeInstanceVolumeRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


