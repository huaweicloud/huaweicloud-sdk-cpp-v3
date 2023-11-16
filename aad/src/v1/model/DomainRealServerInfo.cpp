

#include "huaweicloud/aad/v1/model/DomainRealServerInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




DomainRealServerInfo::DomainRealServerInfo()
{
    realServerType_ = 0;
    realServerTypeIsSet_ = false;
    realServers_ = "";
    realServersIsSet_ = false;
}

DomainRealServerInfo::~DomainRealServerInfo() = default;

void DomainRealServerInfo::validate()
{
}

web::json::value DomainRealServerInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(realServerTypeIsSet_) {
        val[utility::conversions::to_string_t("real_server_type")] = ModelBase::toJson(realServerType_);
    }
    if(realServersIsSet_) {
        val[utility::conversions::to_string_t("real_servers")] = ModelBase::toJson(realServers_);
    }

    return val;
}
bool DomainRealServerInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("real_server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_server_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("real_servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("real_servers"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRealServers(refVal);
        }
    }
    return ok;
}


int32_t DomainRealServerInfo::getRealServerType() const
{
    return realServerType_;
}

void DomainRealServerInfo::setRealServerType(int32_t value)
{
    realServerType_ = value;
    realServerTypeIsSet_ = true;
}

bool DomainRealServerInfo::realServerTypeIsSet() const
{
    return realServerTypeIsSet_;
}

void DomainRealServerInfo::unsetrealServerType()
{
    realServerTypeIsSet_ = false;
}

std::string DomainRealServerInfo::getRealServers() const
{
    return realServers_;
}

void DomainRealServerInfo::setRealServers(const std::string& value)
{
    realServers_ = value;
    realServersIsSet_ = true;
}

bool DomainRealServerInfo::realServersIsSet() const
{
    return realServersIsSet_;
}

void DomainRealServerInfo::unsetrealServers()
{
    realServersIsSet_ = false;
}

}
}
}
}
}


