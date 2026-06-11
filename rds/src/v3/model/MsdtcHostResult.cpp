

#include "huaweicloud/rds/v3/model/MsdtcHostResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




MsdtcHostResult::MsdtcHostResult()
{
    hostName_ = "";
    hostNameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
}

MsdtcHostResult::~MsdtcHostResult() = default;

void MsdtcHostResult::validate()
{
}

web::json::value MsdtcHostResult::toJson() const
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
bool MsdtcHostResult::fromJson(const web::json::value& val)
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


std::string MsdtcHostResult::getHostName() const
{
    return hostName_;
}

void MsdtcHostResult::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool MsdtcHostResult::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void MsdtcHostResult::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string MsdtcHostResult::getIp() const
{
    return ip_;
}

void MsdtcHostResult::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool MsdtcHostResult::ipIsSet() const
{
    return ipIsSet_;
}

void MsdtcHostResult::unsetip()
{
    ipIsSet_ = false;
}

}
}
}
}
}


