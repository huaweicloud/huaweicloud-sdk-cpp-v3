

#include "huaweicloud/sdrs/v1/model/ProtectedInstanceAddNicRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ProtectedInstanceAddNicRequestBody::ProtectedInstanceAddNicRequestBody()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupsIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

ProtectedInstanceAddNicRequestBody::~ProtectedInstanceAddNicRequestBody() = default;

void ProtectedInstanceAddNicRequestBody::validate()
{
}

web::json::value ProtectedInstanceAddNicRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }

    return val;
}

bool ProtectedInstanceAddNicRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityGroupsParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    return ok;
}

std::string ProtectedInstanceAddNicRequestBody::getSubnetId() const
{
    return subnetId_;
}

void ProtectedInstanceAddNicRequestBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ProtectedInstanceAddNicRequestBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ProtectedInstanceAddNicRequestBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<SecurityGroupsParams>& ProtectedInstanceAddNicRequestBody::getSecurityGroups()
{
    return securityGroups_;
}

void ProtectedInstanceAddNicRequestBody::setSecurityGroups(const std::vector<SecurityGroupsParams>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool ProtectedInstanceAddNicRequestBody::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void ProtectedInstanceAddNicRequestBody::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string ProtectedInstanceAddNicRequestBody::getIpAddress() const
{
    return ipAddress_;
}

void ProtectedInstanceAddNicRequestBody::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool ProtectedInstanceAddNicRequestBody::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void ProtectedInstanceAddNicRequestBody::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


