

#include "huaweicloud/gaussdbfornosql/v3/model/ResizeColdVolumeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResizeColdVolumeRequestBody::ResizeColdVolumeRequestBody()
{
    size_ = 0;
    sizeIsSet_ = false;
    isAutoPay_ = "";
    isAutoPayIsSet_ = false;
}

ResizeColdVolumeRequestBody::~ResizeColdVolumeRequestBody() = default;

void ResizeColdVolumeRequestBody::validate()
{
}

web::json::value ResizeColdVolumeRequestBody::toJson() const
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
bool ResizeColdVolumeRequestBody::fromJson(const web::json::value& val)
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


int32_t ResizeColdVolumeRequestBody::getSize() const
{
    return size_;
}

void ResizeColdVolumeRequestBody::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ResizeColdVolumeRequestBody::sizeIsSet() const
{
    return sizeIsSet_;
}

void ResizeColdVolumeRequestBody::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ResizeColdVolumeRequestBody::getIsAutoPay() const
{
    return isAutoPay_;
}

void ResizeColdVolumeRequestBody::setIsAutoPay(const std::string& value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool ResizeColdVolumeRequestBody::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void ResizeColdVolumeRequestBody::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


