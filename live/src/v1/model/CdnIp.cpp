

#include "huaweicloud/live/v1/model/CdnIp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CdnIp::CdnIp()
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

CdnIp::~CdnIp() = default;

void CdnIp::validate()
{
}

web::json::value CdnIp::toJson() const
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
bool CdnIp::fromJson(const web::json::value& val)
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


std::string CdnIp::getIp() const
{
    return ip_;
}

void CdnIp::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool CdnIp::ipIsSet() const
{
    return ipIsSet_;
}

void CdnIp::unsetip()
{
    ipIsSet_ = false;
}

bool CdnIp::isBelongs() const
{
    return belongs_;
}

void CdnIp::setBelongs(bool value)
{
    belongs_ = value;
    belongsIsSet_ = true;
}

bool CdnIp::belongsIsSet() const
{
    return belongsIsSet_;
}

void CdnIp::unsetbelongs()
{
    belongsIsSet_ = false;
}

std::string CdnIp::getRegion() const
{
    return region_;
}

void CdnIp::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CdnIp::regionIsSet() const
{
    return regionIsSet_;
}

void CdnIp::unsetregion()
{
    regionIsSet_ = false;
}

std::string CdnIp::getIsp() const
{
    return isp_;
}

void CdnIp::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool CdnIp::ispIsSet() const
{
    return ispIsSet_;
}

void CdnIp::unsetisp()
{
    ispIsSet_ = false;
}

std::string CdnIp::getPlatform() const
{
    return platform_;
}

void CdnIp::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool CdnIp::platformIsSet() const
{
    return platformIsSet_;
}

void CdnIp::unsetplatform()
{
    platformIsSet_ = false;
}

}
}
}
}
}


