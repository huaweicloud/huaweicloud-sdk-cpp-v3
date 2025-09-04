

#include "huaweicloud/gaussdb/v3/model/UpdateProxyPrivateDnsName.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateProxyPrivateDnsName::UpdateProxyPrivateDnsName()
{
    newDnsName_ = "";
    newDnsNameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
}

UpdateProxyPrivateDnsName::~UpdateProxyPrivateDnsName() = default;

void UpdateProxyPrivateDnsName::validate()
{
}

web::json::value UpdateProxyPrivateDnsName::toJson() const
{
    web::json::value val = web::json::value::object();

    if(newDnsNameIsSet_) {
        val[utility::conversions::to_string_t("new_dns_name")] = ModelBase::toJson(newDnsName_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }

    return val;
}
bool UpdateProxyPrivateDnsName::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("new_dns_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_dns_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewDnsName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    return ok;
}


std::string UpdateProxyPrivateDnsName::getNewDnsName() const
{
    return newDnsName_;
}

void UpdateProxyPrivateDnsName::setNewDnsName(const std::string& value)
{
    newDnsName_ = value;
    newDnsNameIsSet_ = true;
}

bool UpdateProxyPrivateDnsName::newDnsNameIsSet() const
{
    return newDnsNameIsSet_;
}

void UpdateProxyPrivateDnsName::unsetnewDnsName()
{
    newDnsNameIsSet_ = false;
}

std::string UpdateProxyPrivateDnsName::getVpcId() const
{
    return vpcId_;
}

void UpdateProxyPrivateDnsName::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool UpdateProxyPrivateDnsName::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void UpdateProxyPrivateDnsName::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

}
}
}
}
}


