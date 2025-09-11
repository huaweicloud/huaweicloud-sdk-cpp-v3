

#include "huaweicloud/gaussdbforopengauss/v3/model/NodeDistributionOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




NodeDistributionOption::NodeDistributionOption()
{
    num_ = 0;
    numIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    flavorRef_ = "";
    flavorRefIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
}

NodeDistributionOption::~NodeDistributionOption() = default;

void NodeDistributionOption::validate()
{
}

web::json::value NodeDistributionOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numIsSet_) {
        val[utility::conversions::to_string_t("num")] = ModelBase::toJson(num_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(flavorRefIsSet_) {
        val[utility::conversions::to_string_t("flavor_ref")] = ModelBase::toJson(flavorRef_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }

    return val;
}
bool NodeDistributionOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor_ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor_ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavorRef(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    return ok;
}


int32_t NodeDistributionOption::getNum() const
{
    return num_;
}

void NodeDistributionOption::setNum(int32_t value)
{
    num_ = value;
    numIsSet_ = true;
}

bool NodeDistributionOption::numIsSet() const
{
    return numIsSet_;
}

void NodeDistributionOption::unsetnum()
{
    numIsSet_ = false;
}

std::string NodeDistributionOption::getAvailabilityZone() const
{
    return availabilityZone_;
}

void NodeDistributionOption::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool NodeDistributionOption::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void NodeDistributionOption::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string NodeDistributionOption::getFlavorRef() const
{
    return flavorRef_;
}

void NodeDistributionOption::setFlavorRef(const std::string& value)
{
    flavorRef_ = value;
    flavorRefIsSet_ = true;
}

bool NodeDistributionOption::flavorRefIsSet() const
{
    return flavorRefIsSet_;
}

void NodeDistributionOption::unsetflavorRef()
{
    flavorRefIsSet_ = false;
}

std::string NodeDistributionOption::getConfigurationId() const
{
    return configurationId_;
}

void NodeDistributionOption::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool NodeDistributionOption::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void NodeDistributionOption::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

}
}
}
}
}


