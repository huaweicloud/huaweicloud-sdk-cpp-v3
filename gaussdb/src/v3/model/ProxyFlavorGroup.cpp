

#include "huaweicloud/gaussdb/v3/model/ProxyFlavorGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ProxyFlavorGroup::ProxyFlavorGroup()
{
    groupType_ = "";
    groupTypeIsSet_ = false;
    proxyFlavorsIsSet_ = false;
}

ProxyFlavorGroup::~ProxyFlavorGroup() = default;

void ProxyFlavorGroup::validate()
{
}

web::json::value ProxyFlavorGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(proxyFlavorsIsSet_) {
        val[utility::conversions::to_string_t("proxy_flavors")] = ModelBase::toJson(proxyFlavors_);
    }

    return val;
}
bool ProxyFlavorGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<ProxyFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyFlavors(refVal);
        }
    }
    return ok;
}


std::string ProxyFlavorGroup::getGroupType() const
{
    return groupType_;
}

void ProxyFlavorGroup::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool ProxyFlavorGroup::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void ProxyFlavorGroup::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::vector<ProxyFlavor>& ProxyFlavorGroup::getProxyFlavors()
{
    return proxyFlavors_;
}

void ProxyFlavorGroup::setProxyFlavors(const std::vector<ProxyFlavor>& value)
{
    proxyFlavors_ = value;
    proxyFlavorsIsSet_ = true;
}

bool ProxyFlavorGroup::proxyFlavorsIsSet() const
{
    return proxyFlavorsIsSet_;
}

void ProxyFlavorGroup::unsetproxyFlavors()
{
    proxyFlavorsIsSet_ = false;
}

}
}
}
}
}


