

#include "huaweicloud/gaussdb/v3/model/MysqlProxyFlavorGroups.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




MysqlProxyFlavorGroups::MysqlProxyFlavorGroups()
{
    groupType_ = "";
    groupTypeIsSet_ = false;
    proxyFlavorsIsSet_ = false;
}

MysqlProxyFlavorGroups::~MysqlProxyFlavorGroups() = default;

void MysqlProxyFlavorGroups::validate()
{
}

web::json::value MysqlProxyFlavorGroups::toJson() const
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

bool MysqlProxyFlavorGroups::fromJson(const web::json::value& val)
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
            std::vector<MysqlProxyComputeFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyFlavors(refVal);
        }
    }
    return ok;
}

std::string MysqlProxyFlavorGroups::getGroupType() const
{
    return groupType_;
}

void MysqlProxyFlavorGroups::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool MysqlProxyFlavorGroups::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void MysqlProxyFlavorGroups::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::vector<MysqlProxyComputeFlavor>& MysqlProxyFlavorGroups::getProxyFlavors()
{
    return proxyFlavors_;
}

void MysqlProxyFlavorGroups::setProxyFlavors(const std::vector<MysqlProxyComputeFlavor>& value)
{
    proxyFlavors_ = value;
    proxyFlavorsIsSet_ = true;
}

bool MysqlProxyFlavorGroups::proxyFlavorsIsSet() const
{
    return proxyFlavorsIsSet_;
}

void MysqlProxyFlavorGroups::unsetproxyFlavors()
{
    proxyFlavorsIsSet_ = false;
}

}
}
}
}
}


