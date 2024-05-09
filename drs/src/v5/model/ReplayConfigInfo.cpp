

#include "huaweicloud/drs/v5/model/ReplayConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ReplayConfigInfo::ReplayConfigInfo()
{
    dbInstanceId_ = "";
    dbInstanceIdIsSet_ = false;
    cloudType_ = "";
    cloudTypeIsSet_ = false;
    ak_ = "";
    akIsSet_ = false;
    sk_ = "";
    skIsSet_ = false;
    dbSource_ = "";
    dbSourceIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    trafficSource_ = "";
    trafficSourceIsSet_ = false;
}

ReplayConfigInfo::~ReplayConfigInfo() = default;

void ReplayConfigInfo::validate()
{
}

web::json::value ReplayConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("db_instance_id")] = ModelBase::toJson(dbInstanceId_);
    }
    if(cloudTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_type")] = ModelBase::toJson(cloudType_);
    }
    if(akIsSet_) {
        val[utility::conversions::to_string_t("ak")] = ModelBase::toJson(ak_);
    }
    if(skIsSet_) {
        val[utility::conversions::to_string_t("sk")] = ModelBase::toJson(sk_);
    }
    if(dbSourceIsSet_) {
        val[utility::conversions::to_string_t("db_source")] = ModelBase::toJson(dbSource_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(trafficSourceIsSet_) {
        val[utility::conversions::to_string_t("traffic_source")] = ModelBase::toJson(trafficSource_);
    }

    return val;
}
bool ReplayConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ak"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficSource(refVal);
        }
    }
    return ok;
}


std::string ReplayConfigInfo::getDbInstanceId() const
{
    return dbInstanceId_;
}

void ReplayConfigInfo::setDbInstanceId(const std::string& value)
{
    dbInstanceId_ = value;
    dbInstanceIdIsSet_ = true;
}

bool ReplayConfigInfo::dbInstanceIdIsSet() const
{
    return dbInstanceIdIsSet_;
}

void ReplayConfigInfo::unsetdbInstanceId()
{
    dbInstanceIdIsSet_ = false;
}

std::string ReplayConfigInfo::getCloudType() const
{
    return cloudType_;
}

void ReplayConfigInfo::setCloudType(const std::string& value)
{
    cloudType_ = value;
    cloudTypeIsSet_ = true;
}

bool ReplayConfigInfo::cloudTypeIsSet() const
{
    return cloudTypeIsSet_;
}

void ReplayConfigInfo::unsetcloudType()
{
    cloudTypeIsSet_ = false;
}

std::string ReplayConfigInfo::getAk() const
{
    return ak_;
}

void ReplayConfigInfo::setAk(const std::string& value)
{
    ak_ = value;
    akIsSet_ = true;
}

bool ReplayConfigInfo::akIsSet() const
{
    return akIsSet_;
}

void ReplayConfigInfo::unsetak()
{
    akIsSet_ = false;
}

std::string ReplayConfigInfo::getSk() const
{
    return sk_;
}

void ReplayConfigInfo::setSk(const std::string& value)
{
    sk_ = value;
    skIsSet_ = true;
}

bool ReplayConfigInfo::skIsSet() const
{
    return skIsSet_;
}

void ReplayConfigInfo::unsetsk()
{
    skIsSet_ = false;
}

std::string ReplayConfigInfo::getDbSource() const
{
    return dbSource_;
}

void ReplayConfigInfo::setDbSource(const std::string& value)
{
    dbSource_ = value;
    dbSourceIsSet_ = true;
}

bool ReplayConfigInfo::dbSourceIsSet() const
{
    return dbSourceIsSet_;
}

void ReplayConfigInfo::unsetdbSource()
{
    dbSourceIsSet_ = false;
}

std::string ReplayConfigInfo::getRegion() const
{
    return region_;
}

void ReplayConfigInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ReplayConfigInfo::regionIsSet() const
{
    return regionIsSet_;
}

void ReplayConfigInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string ReplayConfigInfo::getTrafficSource() const
{
    return trafficSource_;
}

void ReplayConfigInfo::setTrafficSource(const std::string& value)
{
    trafficSource_ = value;
    trafficSourceIsSet_ = true;
}

bool ReplayConfigInfo::trafficSourceIsSet() const
{
    return trafficSourceIsSet_;
}

void ReplayConfigInfo::unsettrafficSource()
{
    trafficSourceIsSet_ = false;
}

}
}
}
}
}


