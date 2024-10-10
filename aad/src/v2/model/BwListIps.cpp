

#include "huaweicloud/aad/v2/model/BwListIps.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




BwListIps::BwListIps()
{
    ip_ = "";
    ipIsSet_ = false;
    desc_ = "";
    descIsSet_ = false;
}

BwListIps::~BwListIps() = default;

void BwListIps::validate()
{
}

web::json::value BwListIps::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(descIsSet_) {
        val[utility::conversions::to_string_t("desc")] = ModelBase::toJson(desc_);
    }

    return val;
}
bool BwListIps::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDesc(refVal);
        }
    }
    return ok;
}


std::string BwListIps::getIp() const
{
    return ip_;
}

void BwListIps::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool BwListIps::ipIsSet() const
{
    return ipIsSet_;
}

void BwListIps::unsetip()
{
    ipIsSet_ = false;
}

std::string BwListIps::getDesc() const
{
    return desc_;
}

void BwListIps::setDesc(const std::string& value)
{
    desc_ = value;
    descIsSet_ = true;
}

bool BwListIps::descIsSet() const
{
    return descIsSet_;
}

void BwListIps::unsetdesc()
{
    descIsSet_ = false;
}

}
}
}
}
}


