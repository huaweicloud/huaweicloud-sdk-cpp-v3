

#include "huaweicloud/cdn/v2/model/CdnIps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CdnIps::CdnIps()
{
    ip_ = "";
    ipIsSet_ = false;
    belongs_ = false;
    belongsIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
}

CdnIps::~CdnIps() = default;

void CdnIps::validate()
{
}

web::json::value CdnIps::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(belongsIsSet_) {
        val[utility::conversions::to_string_t("belongs")] = ModelBase::toJson(belongs_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }

    return val;
}
bool CdnIps::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belongs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belongs"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    return ok;
}


std::string CdnIps::getIp() const
{
    return ip_;
}

void CdnIps::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool CdnIps::ipIsSet() const
{
    return ipIsSet_;
}

void CdnIps::unsetip()
{
    ipIsSet_ = false;
}

bool CdnIps::isBelongs() const
{
    return belongs_;
}

void CdnIps::setBelongs(bool value)
{
    belongs_ = value;
    belongsIsSet_ = true;
}

bool CdnIps::belongsIsSet() const
{
    return belongsIsSet_;
}

void CdnIps::unsetbelongs()
{
    belongsIsSet_ = false;
}

std::string CdnIps::getRegion() const
{
    return region_;
}

void CdnIps::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CdnIps::regionIsSet() const
{
    return regionIsSet_;
}

void CdnIps::unsetregion()
{
    regionIsSet_ = false;
}

std::string CdnIps::getIsp() const
{
    return isp_;
}

void CdnIps::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool CdnIps::ispIsSet() const
{
    return ispIsSet_;
}

void CdnIps::unsetisp()
{
    ispIsSet_ = false;
}

std::string CdnIps::getPlatform() const
{
    return platform_;
}

void CdnIps::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool CdnIps::platformIsSet() const
{
    return platformIsSet_;
}

void CdnIps::unsetplatform()
{
    platformIsSet_ = false;
}

}
}
}
}
}


