

#include "huaweicloud/metastudio/v1/model/ResourcesCount.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ResourcesCount::ResourcesCount()
{
    businessType_ = "";
    businessTypeIsSet_ = false;
    count_ = 0.0;
    countIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    resourceSource_ = "";
    resourceSourceIsSet_ = false;
}

ResourcesCount::~ResourcesCount() = default;

void ResourcesCount::validate()
{
}

web::json::value ResourcesCount::toJson() const
{
    web::json::value val = web::json::value::object();

    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(resourceSourceIsSet_) {
        val[utility::conversions::to_string_t("resource_source")] = ModelBase::toJson(resourceSource_);
    }

    return val;
}
bool ResourcesCount::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSource(refVal);
        }
    }
    return ok;
}


std::string ResourcesCount::getBusinessType() const
{
    return businessType_;
}

void ResourcesCount::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool ResourcesCount::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void ResourcesCount::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

double ResourcesCount::getCount() const
{
    return count_;
}

void ResourcesCount::setCount(double value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ResourcesCount::countIsSet() const
{
    return countIsSet_;
}

void ResourcesCount::unsetcount()
{
    countIsSet_ = false;
}

std::string ResourcesCount::getChargingMode() const
{
    return chargingMode_;
}

void ResourcesCount::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ResourcesCount::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ResourcesCount::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string ResourcesCount::getResourceSource() const
{
    return resourceSource_;
}

void ResourcesCount::setResourceSource(const std::string& value)
{
    resourceSource_ = value;
    resourceSourceIsSet_ = true;
}

bool ResourcesCount::resourceSourceIsSet() const
{
    return resourceSourceIsSet_;
}

void ResourcesCount::unsetresourceSource()
{
    resourceSourceIsSet_ = false;
}

}
}
}
}
}


