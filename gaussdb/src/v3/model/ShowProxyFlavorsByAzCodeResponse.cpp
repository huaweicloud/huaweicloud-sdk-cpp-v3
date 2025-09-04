

#include "huaweicloud/gaussdb/v3/model/ShowProxyFlavorsByAzCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowProxyFlavorsByAzCodeResponse::ShowProxyFlavorsByAzCodeResponse()
{
    proxyFlavorGroupsIsSet_ = false;
}

ShowProxyFlavorsByAzCodeResponse::~ShowProxyFlavorsByAzCodeResponse() = default;

void ShowProxyFlavorsByAzCodeResponse::validate()
{
}

web::json::value ShowProxyFlavorsByAzCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyFlavorGroupsIsSet_) {
        val[utility::conversions::to_string_t("proxy_flavor_groups")] = ModelBase::toJson(proxyFlavorGroups_);
    }

    return val;
}
bool ShowProxyFlavorsByAzCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_flavor_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_flavor_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ProxyFlavorGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyFlavorGroups(refVal);
        }
    }
    return ok;
}


std::vector<ProxyFlavorGroup>& ShowProxyFlavorsByAzCodeResponse::getProxyFlavorGroups()
{
    return proxyFlavorGroups_;
}

void ShowProxyFlavorsByAzCodeResponse::setProxyFlavorGroups(const std::vector<ProxyFlavorGroup>& value)
{
    proxyFlavorGroups_ = value;
    proxyFlavorGroupsIsSet_ = true;
}

bool ShowProxyFlavorsByAzCodeResponse::proxyFlavorGroupsIsSet() const
{
    return proxyFlavorGroupsIsSet_;
}

void ShowProxyFlavorsByAzCodeResponse::unsetproxyFlavorGroups()
{
    proxyFlavorGroupsIsSet_ = false;
}

}
}
}
}
}


