

#include "huaweicloud/aad/v2/model/WafGeoIpRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




WafGeoIpRule::WafGeoIpRule()
{
    geoip_ = "";
    geoipIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    overseasType_ = 0;
    overseasTypeIsSet_ = false;
    timestamp_ = 0;
    timestampIsSet_ = false;
    white_ = 0;
    whiteIsSet_ = false;
}

WafGeoIpRule::~WafGeoIpRule() = default;

void WafGeoIpRule::validate()
{
}

web::json::value WafGeoIpRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(geoipIsSet_) {
        val[utility::conversions::to_string_t("geoip")] = ModelBase::toJson(geoip_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(overseasTypeIsSet_) {
        val[utility::conversions::to_string_t("overseas_type")] = ModelBase::toJson(overseasType_);
    }
    if(timestampIsSet_) {
        val[utility::conversions::to_string_t("timestamp")] = ModelBase::toJson(timestamp_);
    }
    if(whiteIsSet_) {
        val[utility::conversions::to_string_t("white")] = ModelBase::toJson(white_);
    }

    return val;
}
bool WafGeoIpRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("geoip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geoip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeoip(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("overseas_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("overseas_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOverseasType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timestamp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("white"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("white"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhite(refVal);
        }
    }
    return ok;
}


std::string WafGeoIpRule::getGeoip() const
{
    return geoip_;
}

void WafGeoIpRule::setGeoip(const std::string& value)
{
    geoip_ = value;
    geoipIsSet_ = true;
}

bool WafGeoIpRule::geoipIsSet() const
{
    return geoipIsSet_;
}

void WafGeoIpRule::unsetgeoip()
{
    geoipIsSet_ = false;
}

std::string WafGeoIpRule::getId() const
{
    return id_;
}

void WafGeoIpRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WafGeoIpRule::idIsSet() const
{
    return idIsSet_;
}

void WafGeoIpRule::unsetid()
{
    idIsSet_ = false;
}

std::string WafGeoIpRule::getName() const
{
    return name_;
}

void WafGeoIpRule::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WafGeoIpRule::nameIsSet() const
{
    return nameIsSet_;
}

void WafGeoIpRule::unsetname()
{
    nameIsSet_ = false;
}

int32_t WafGeoIpRule::getOverseasType() const
{
    return overseasType_;
}

void WafGeoIpRule::setOverseasType(int32_t value)
{
    overseasType_ = value;
    overseasTypeIsSet_ = true;
}

bool WafGeoIpRule::overseasTypeIsSet() const
{
    return overseasTypeIsSet_;
}

void WafGeoIpRule::unsetoverseasType()
{
    overseasTypeIsSet_ = false;
}

int32_t WafGeoIpRule::getTimestamp() const
{
    return timestamp_;
}

void WafGeoIpRule::setTimestamp(int32_t value)
{
    timestamp_ = value;
    timestampIsSet_ = true;
}

bool WafGeoIpRule::timestampIsSet() const
{
    return timestampIsSet_;
}

void WafGeoIpRule::unsettimestamp()
{
    timestampIsSet_ = false;
}

int32_t WafGeoIpRule::getWhite() const
{
    return white_;
}

void WafGeoIpRule::setWhite(int32_t value)
{
    white_ = value;
    whiteIsSet_ = true;
}

bool WafGeoIpRule::whiteIsSet() const
{
    return whiteIsSet_;
}

void WafGeoIpRule::unsetwhite()
{
    whiteIsSet_ = false;
}

}
}
}
}
}


