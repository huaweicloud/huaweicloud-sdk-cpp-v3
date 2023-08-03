

#include "huaweicloud/rds/v3/model/MsdtcHostOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MsdtcHostOption::MsdtcHostOption()
{
    hostName_ = "";
    hostNameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

MsdtcHostOption::~MsdtcHostOption() = default;

void MsdtcHostOption::validate()
{
}

web::json::value MsdtcHostOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }

    return val;
}

bool MsdtcHostOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    return ok;
}

std::string MsdtcHostOption::getHostName() const
{
    return hostName_;
}

void MsdtcHostOption::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool MsdtcHostOption::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void MsdtcHostOption::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string MsdtcHostOption::getIp() const
{
    return ip_;
}

void MsdtcHostOption::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool MsdtcHostOption::ipIsSet() const
{
    return ipIsSet_;
}

void MsdtcHostOption::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


