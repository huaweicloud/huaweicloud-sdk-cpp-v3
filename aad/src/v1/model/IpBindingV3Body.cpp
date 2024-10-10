

#include "huaweicloud/aad/v1/model/IpBindingV3Body.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




IpBindingV3Body::IpBindingV3Body()
{
    ipListIsSet_ = false;
}

IpBindingV3Body::~IpBindingV3Body() = default;

void IpBindingV3Body::validate()
{
}

web::json::value IpBindingV3Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipListIsSet_) {
        val[utility::conversions::to_string_t("ip_list")] = ModelBase::toJson(ipList_);
    }

    return val;
}
bool IpBindingV3Body::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& IpBindingV3Body::getIpList()
{
    return ipList_;
}

void IpBindingV3Body::setIpList(const std::vector<std::string>& value)
{
    ipList_ = value;
    ipListIsSet_ = true;
}

bool IpBindingV3Body::ipListIsSet() const
{
    return ipListIsSet_;
}

void IpBindingV3Body::unsetipList()
{
    ipListIsSet_ = false;
}

}
}
}
}
}


