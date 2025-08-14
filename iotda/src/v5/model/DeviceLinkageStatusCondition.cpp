

#include "huaweicloud/iotda/v5/model/DeviceLinkageStatusCondition.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceLinkageStatusCondition::DeviceLinkageStatusCondition()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    statusListIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
}

DeviceLinkageStatusCondition::~DeviceLinkageStatusCondition() = default;

void DeviceLinkageStatusCondition::validate()
{
}

web::json::value DeviceLinkageStatusCondition::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(statusListIsSet_) {
        val[utility::conversions::to_string_t("status_list")] = ModelBase::toJson(statusList_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool DeviceLinkageStatusCondition::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    return ok;
}


std::string DeviceLinkageStatusCondition::getDeviceId() const
{
    return deviceId_;
}

void DeviceLinkageStatusCondition::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool DeviceLinkageStatusCondition::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void DeviceLinkageStatusCondition::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string DeviceLinkageStatusCondition::getProductId() const
{
    return productId_;
}

void DeviceLinkageStatusCondition::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool DeviceLinkageStatusCondition::productIdIsSet() const
{
    return productIdIsSet_;
}

void DeviceLinkageStatusCondition::unsetproductId()
{
    productIdIsSet_ = false;
}

std::vector<std::string>& DeviceLinkageStatusCondition::getStatusList()
{
    return statusList_;
}

void DeviceLinkageStatusCondition::setStatusList(const std::vector<std::string>& value)
{
    statusList_ = value;
    statusListIsSet_ = true;
}

bool DeviceLinkageStatusCondition::statusListIsSet() const
{
    return statusListIsSet_;
}

void DeviceLinkageStatusCondition::unsetstatusList()
{
    statusListIsSet_ = false;
}

int32_t DeviceLinkageStatusCondition::getDuration() const
{
    return duration_;
}

void DeviceLinkageStatusCondition::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool DeviceLinkageStatusCondition::durationIsSet() const
{
    return durationIsSet_;
}

void DeviceLinkageStatusCondition::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


