

#include "huaweicloud/cfw/v1/model/CoveredIPVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CoveredIPVO::CoveredIPVO()
{
    ip_ = "";
    ipIsSet_ = false;
    coveredIp_ = "";
    coveredIpIsSet_ = false;
}

CoveredIPVO::~CoveredIPVO() = default;

void CoveredIPVO::validate()
{
}

web::json::value CoveredIPVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(coveredIpIsSet_) {
        val[utility::conversions::to_string_t("covered_Ip")] = ModelBase::toJson(coveredIp_);
    }

    return val;
}
bool CoveredIPVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("covered_Ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("covered_Ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoveredIp(refVal);
        }
    }
    return ok;
}


std::string CoveredIPVO::getIp() const
{
    return ip_;
}

void CoveredIPVO::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool CoveredIPVO::ipIsSet() const
{
    return ipIsSet_;
}

void CoveredIPVO::unsetip()
{
    ipIsSet_ = false;
}

std::string CoveredIPVO::getCoveredIp() const
{
    return coveredIp_;
}

void CoveredIPVO::setCoveredIp(const std::string& value)
{
    coveredIp_ = value;
    coveredIpIsSet_ = true;
}

bool CoveredIPVO::coveredIpIsSet() const
{
    return coveredIpIsSet_;
}

void CoveredIPVO::unsetcoveredIp()
{
    coveredIpIsSet_ = false;
}

}
}
}
}
}


