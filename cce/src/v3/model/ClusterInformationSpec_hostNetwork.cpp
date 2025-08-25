

#include "huaweicloud/cce/v3/model/ClusterInformationSpec_hostNetwork.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterInformationSpec_hostNetwork::ClusterInformationSpec_hostNetwork()
{
    securityGroup_ = "";
    securityGroupIsSet_ = false;
}

ClusterInformationSpec_hostNetwork::~ClusterInformationSpec_hostNetwork() = default;

void ClusterInformationSpec_hostNetwork::validate()
{
}

web::json::value ClusterInformationSpec_hostNetwork::toJson() const
{
    web::json::value val = web::json::value::object();

    if(securityGroupIsSet_) {
        val[utility::conversions::to_string_t("SecurityGroup")] = ModelBase::toJson(securityGroup_);
    }

    return val;
}
bool ClusterInformationSpec_hostNetwork::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("SecurityGroup"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("SecurityGroup"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroup(refVal);
        }
    }
    return ok;
}


std::string ClusterInformationSpec_hostNetwork::getSecurityGroup() const
{
    return securityGroup_;
}

void ClusterInformationSpec_hostNetwork::setSecurityGroup(const std::string& value)
{
    securityGroup_ = value;
    securityGroupIsSet_ = true;
}

bool ClusterInformationSpec_hostNetwork::securityGroupIsSet() const
{
    return securityGroupIsSet_;
}

void ClusterInformationSpec_hostNetwork::unsetsecurityGroup()
{
    securityGroupIsSet_ = false;
}

}
}
}
}
}


