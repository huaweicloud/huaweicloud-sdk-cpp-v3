

#include "huaweicloud/rds/v3/model/SupabaseAppBasicConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SupabaseAppBasicConfig::SupabaseAppBasicConfig()
{
    region_ = "";
    regionIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    timeZone_ = "";
    timeZoneIsSet_ = false;
}

SupabaseAppBasicConfig::~SupabaseAppBasicConfig() = default;

void SupabaseAppBasicConfig::validate()
{
}

web::json::value SupabaseAppBasicConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(timeZoneIsSet_) {
        val[utility::conversions::to_string_t("time_zone")] = ModelBase::toJson(timeZone_);
    }

    return val;
}
bool SupabaseAppBasicConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZone(refVal);
        }
    }
    return ok;
}


std::string SupabaseAppBasicConfig::getRegion() const
{
    return region_;
}

void SupabaseAppBasicConfig::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool SupabaseAppBasicConfig::regionIsSet() const
{
    return regionIsSet_;
}

void SupabaseAppBasicConfig::unsetregion()
{
    regionIsSet_ = false;
}

std::string SupabaseAppBasicConfig::getVpcId() const
{
    return vpcId_;
}

void SupabaseAppBasicConfig::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool SupabaseAppBasicConfig::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void SupabaseAppBasicConfig::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string SupabaseAppBasicConfig::getSubnetId() const
{
    return subnetId_;
}

void SupabaseAppBasicConfig::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool SupabaseAppBasicConfig::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void SupabaseAppBasicConfig::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string SupabaseAppBasicConfig::getTimeZone() const
{
    return timeZone_;
}

void SupabaseAppBasicConfig::setTimeZone(const std::string& value)
{
    timeZone_ = value;
    timeZoneIsSet_ = true;
}

bool SupabaseAppBasicConfig::timeZoneIsSet() const
{
    return timeZoneIsSet_;
}

void SupabaseAppBasicConfig::unsettimeZone()
{
    timeZoneIsSet_ = false;
}

}
}
}
}
}


