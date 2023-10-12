

#include "huaweicloud/eip/v2/model/PublicipUpdateResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




PublicipUpdateResp::PublicipUpdateResp()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    bandwidthName_ = "";
    bandwidthNameIsSet_ = false;
    bandwidthShareType_ = "";
    bandwidthShareTypeIsSet_ = false;
    bandwidthSize_ = 0;
    bandwidthSizeIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    privateIpAddress_ = "";
    privateIpAddressIsSet_ = false;
    profileIsSet_ = false;
    publicIpAddress_ = "";
    publicIpAddressIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    publicIpv6Address_ = "";
    publicIpv6AddressIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
}

PublicipUpdateResp::~PublicipUpdateResp() = default;

void PublicipUpdateResp::validate()
{
}

web::json::value PublicipUpdateResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }
    if(bandwidthNameIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_name")] = ModelBase::toJson(bandwidthName_);
    }
    if(bandwidthShareTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_share_type")] = ModelBase::toJson(bandwidthShareType_);
    }
    if(bandwidthSizeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_size")] = ModelBase::toJson(bandwidthSize_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(privateIpAddressIsSet_) {
        val[utility::conversions::to_string_t("private_ip_address")] = ModelBase::toJson(privateIpAddress_);
    }
    if(profileIsSet_) {
        val[utility::conversions::to_string_t("profile")] = ModelBase::toJson(profile_);
    }
    if(publicIpAddressIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address")] = ModelBase::toJson(publicIpAddress_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(publicIpv6AddressIsSet_) {
        val[utility::conversions::to_string_t("public_ipv6_address")] = ModelBase::toJson(publicIpv6Address_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool PublicipUpdateResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_share_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthShareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("private_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("private_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivateIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile"));
        if(!fieldValue.is_null())
        {
            ProfileResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ipv6_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ipv6_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpv6Address(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    return ok;
}


std::string PublicipUpdateResp::getBandwidthId() const
{
    return bandwidthId_;
}

void PublicipUpdateResp::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool PublicipUpdateResp::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void PublicipUpdateResp::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

std::string PublicipUpdateResp::getBandwidthName() const
{
    return bandwidthName_;
}

void PublicipUpdateResp::setBandwidthName(const std::string& value)
{
    bandwidthName_ = value;
    bandwidthNameIsSet_ = true;
}

bool PublicipUpdateResp::bandwidthNameIsSet() const
{
    return bandwidthNameIsSet_;
}

void PublicipUpdateResp::unsetbandwidthName()
{
    bandwidthNameIsSet_ = false;
}

std::string PublicipUpdateResp::getBandwidthShareType() const
{
    return bandwidthShareType_;
}

void PublicipUpdateResp::setBandwidthShareType(const std::string& value)
{
    bandwidthShareType_ = value;
    bandwidthShareTypeIsSet_ = true;
}

bool PublicipUpdateResp::bandwidthShareTypeIsSet() const
{
    return bandwidthShareTypeIsSet_;
}

void PublicipUpdateResp::unsetbandwidthShareType()
{
    bandwidthShareTypeIsSet_ = false;
}

int32_t PublicipUpdateResp::getBandwidthSize() const
{
    return bandwidthSize_;
}

void PublicipUpdateResp::setBandwidthSize(int32_t value)
{
    bandwidthSize_ = value;
    bandwidthSizeIsSet_ = true;
}

bool PublicipUpdateResp::bandwidthSizeIsSet() const
{
    return bandwidthSizeIsSet_;
}

void PublicipUpdateResp::unsetbandwidthSize()
{
    bandwidthSizeIsSet_ = false;
}

utility::datetime PublicipUpdateResp::getCreateTime() const
{
    return createTime_;
}

void PublicipUpdateResp::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PublicipUpdateResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PublicipUpdateResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string PublicipUpdateResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PublicipUpdateResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PublicipUpdateResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PublicipUpdateResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string PublicipUpdateResp::getId() const
{
    return id_;
}

void PublicipUpdateResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicipUpdateResp::idIsSet() const
{
    return idIsSet_;
}

void PublicipUpdateResp::unsetid()
{
    idIsSet_ = false;
}

std::string PublicipUpdateResp::getPortId() const
{
    return portId_;
}

void PublicipUpdateResp::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool PublicipUpdateResp::portIdIsSet() const
{
    return portIdIsSet_;
}

void PublicipUpdateResp::unsetportId()
{
    portIdIsSet_ = false;
}

std::string PublicipUpdateResp::getPrivateIpAddress() const
{
    return privateIpAddress_;
}

void PublicipUpdateResp::setPrivateIpAddress(const std::string& value)
{
    privateIpAddress_ = value;
    privateIpAddressIsSet_ = true;
}

bool PublicipUpdateResp::privateIpAddressIsSet() const
{
    return privateIpAddressIsSet_;
}

void PublicipUpdateResp::unsetprivateIpAddress()
{
    privateIpAddressIsSet_ = false;
}

ProfileResp PublicipUpdateResp::getProfile() const
{
    return profile_;
}

void PublicipUpdateResp::setProfile(const ProfileResp& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool PublicipUpdateResp::profileIsSet() const
{
    return profileIsSet_;
}

void PublicipUpdateResp::unsetprofile()
{
    profileIsSet_ = false;
}

std::string PublicipUpdateResp::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void PublicipUpdateResp::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool PublicipUpdateResp::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void PublicipUpdateResp::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string PublicipUpdateResp::getStatus() const
{
    return status_;
}

void PublicipUpdateResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PublicipUpdateResp::statusIsSet() const
{
    return statusIsSet_;
}

void PublicipUpdateResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PublicipUpdateResp::getTenantId() const
{
    return tenantId_;
}

void PublicipUpdateResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool PublicipUpdateResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void PublicipUpdateResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string PublicipUpdateResp::getType() const
{
    return type_;
}

void PublicipUpdateResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicipUpdateResp::typeIsSet() const
{
    return typeIsSet_;
}

void PublicipUpdateResp::unsettype()
{
    typeIsSet_ = false;
}

std::string PublicipUpdateResp::getPublicIpv6Address() const
{
    return publicIpv6Address_;
}

void PublicipUpdateResp::setPublicIpv6Address(const std::string& value)
{
    publicIpv6Address_ = value;
    publicIpv6AddressIsSet_ = true;
}

bool PublicipUpdateResp::publicIpv6AddressIsSet() const
{
    return publicIpv6AddressIsSet_;
}

void PublicipUpdateResp::unsetpublicIpv6Address()
{
    publicIpv6AddressIsSet_ = false;
}

int32_t PublicipUpdateResp::getIpVersion() const
{
    return ipVersion_;
}

void PublicipUpdateResp::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool PublicipUpdateResp::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void PublicipUpdateResp::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string PublicipUpdateResp::getAlias() const
{
    return alias_;
}

void PublicipUpdateResp::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool PublicipUpdateResp::aliasIsSet() const
{
    return aliasIsSet_;
}

void PublicipUpdateResp::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


