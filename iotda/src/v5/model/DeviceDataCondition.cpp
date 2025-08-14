

#include "huaweicloud/iotda/v5/model/DeviceDataCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceDataCondition::DeviceDataCondition()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    filtersIsSet_ = false;
}

DeviceDataCondition::~DeviceDataCondition() = default;

void DeviceDataCondition::validate()
{
}

web::json::value DeviceDataCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(filtersIsSet_) {
        val[utility::conversions::to_string_t("filters")] = ModelBase::toJson(filters_);
    }

    return val;
}
bool DeviceDataCondition::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filters"));
        if(!fieldValue.is_null())
        {
            std::vector<PropertyFilter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilters(refVal);
        }
    }
    return ok;
}


std::string DeviceDataCondition::getDeviceId() const
{
    return deviceId_;
}

void DeviceDataCondition::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool DeviceDataCondition::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void DeviceDataCondition::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string DeviceDataCondition::getProductId() const
{
    return productId_;
}

void DeviceDataCondition::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool DeviceDataCondition::productIdIsSet() const
{
    return productIdIsSet_;
}

void DeviceDataCondition::unsetproductId()
{
    productIdIsSet_ = false;
}

std::vector<PropertyFilter>& DeviceDataCondition::getFilters()
{
    return filters_;
}

void DeviceDataCondition::setFilters(const std::vector<PropertyFilter>& value)
{
    filters_ = value;
    filtersIsSet_ = true;
}

bool DeviceDataCondition::filtersIsSet() const
{
    return filtersIsSet_;
}

void DeviceDataCondition::unsetfilters()
{
    filtersIsSet_ = false;
}

}
}
}
}
}


