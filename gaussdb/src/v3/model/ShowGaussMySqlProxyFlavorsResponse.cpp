

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlProxyFlavorsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlProxyFlavorsResponse::ShowGaussMySqlProxyFlavorsResponse()
{
    proxyFlavorGroupsIsSet_ = false;
}

ShowGaussMySqlProxyFlavorsResponse::~ShowGaussMySqlProxyFlavorsResponse() = default;

void ShowGaussMySqlProxyFlavorsResponse::validate()
{
}

web::json::value ShowGaussMySqlProxyFlavorsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(proxyFlavorGroupsIsSet_) {
        val[utility::conversions::to_string_t("proxy_flavor_groups")] = ModelBase::toJson(proxyFlavorGroups_);
    }

    return val;
}

bool ShowGaussMySqlProxyFlavorsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("proxy_flavor_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_flavor_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<MysqlProxyFlavorGroups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyFlavorGroups(refVal);
        }
    }
    return ok;
}

std::vector<MysqlProxyFlavorGroups>& ShowGaussMySqlProxyFlavorsResponse::getProxyFlavorGroups()
{
    return proxyFlavorGroups_;
}

void ShowGaussMySqlProxyFlavorsResponse::setProxyFlavorGroups(const std::vector<MysqlProxyFlavorGroups>& value)
{
    proxyFlavorGroups_ = value;
    proxyFlavorGroupsIsSet_ = true;
}

bool ShowGaussMySqlProxyFlavorsResponse::proxyFlavorGroupsIsSet() const
{
    return proxyFlavorGroupsIsSet_;
}

void ShowGaussMySqlProxyFlavorsResponse::unsetproxyFlavorGroups()
{
    proxyFlavorGroupsIsSet_ = false;
}

}
}
}
}
}


