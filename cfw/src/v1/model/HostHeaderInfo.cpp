

#include "huaweicloud/cfw/v1/model/HostHeaderInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




HostHeaderInfo::HostHeaderInfo()
{
    host_ = "";
    hostIsSet_ = false;
}

HostHeaderInfo::~HostHeaderInfo() = default;

void HostHeaderInfo::validate()
{
}

web::json::value HostHeaderInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIsSet_) {
        val[utility::conversions::to_string_t("Host")] = ModelBase::toJson(host_);
    }

    return val;
}
bool HostHeaderInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    return ok;
}


std::string HostHeaderInfo::getHost() const
{
    return host_;
}

void HostHeaderInfo::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool HostHeaderInfo::hostIsSet() const
{
    return hostIsSet_;
}

void HostHeaderInfo::unsethost()
{
    hostIsSet_ = false;
}

}
}
}
}
}


