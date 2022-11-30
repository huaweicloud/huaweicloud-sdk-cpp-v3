

#include "huaweicloud/eip/v2/model/PublicipShowResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




PublicipShowResp::PublicipShowResp()
{
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    bandwidthName_ = "";
    bandwidthNameIsSet_ = false;
    bandwidthShareType_ = "";
    bandwidthShareTypeIsSet_ = false;
    bandwidthSize_ = 0;
    bandwidthSizeIsSet_ = false;
    createTime_ = "";
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
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    allowShareBandwidthTypesIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
}

PublicipShowResp::~PublicipShowResp() = default;

void PublicipShowResp::validate()
{
}

web::json::value PublicipShowResp::toJson() const
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
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(allowShareBandwidthTypesIsSet_) {
        val[utility::conversions::to_string_t("allow_share_bandwidth_types")] = ModelBase::toJson(allowShareBandwidthTypes_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}

bool PublicipShowResp::fromJson(const web::json::value& val)
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
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_share_bandwidth_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_share_bandwidth_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowShareBandwidthTypes(refVal);
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


std::string PublicipShowResp::getBandwidthId() const
{
    return bandwidthId_;
}

void PublicipShowResp::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool PublicipShowResp::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void PublicipShowResp::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

std::string PublicipShowResp::getBandwidthName() const
{
    return bandwidthName_;
}

void PublicipShowResp::setBandwidthName(const std::string& value)
{
    bandwidthName_ = value;
    bandwidthNameIsSet_ = true;
}

bool PublicipShowResp::bandwidthNameIsSet() const
{
    return bandwidthNameIsSet_;
}

void PublicipShowResp::unsetbandwidthName()
{
    bandwidthNameIsSet_ = false;
}

std::string PublicipShowResp::getBandwidthShareType() const
{
    return bandwidthShareType_;
}

void PublicipShowResp::setBandwidthShareType(const std::string& value)
{
    bandwidthShareType_ = value;
    bandwidthShareTypeIsSet_ = true;
}

bool PublicipShowResp::bandwidthShareTypeIsSet() const
{
    return bandwidthShareTypeIsSet_;
}

void PublicipShowResp::unsetbandwidthShareType()
{
    bandwidthShareTypeIsSet_ = false;
}

int32_t PublicipShowResp::getBandwidthSize() const
{
    return bandwidthSize_;
}

void PublicipShowResp::setBandwidthSize(int32_t value)
{
    bandwidthSize_ = value;
    bandwidthSizeIsSet_ = true;
}

bool PublicipShowResp::bandwidthSizeIsSet() const
{
    return bandwidthSizeIsSet_;
}

void PublicipShowResp::unsetbandwidthSize()
{
    bandwidthSizeIsSet_ = false;
}

std::string PublicipShowResp::getCreateTime() const
{
    return createTime_;
}

void PublicipShowResp::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PublicipShowResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PublicipShowResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string PublicipShowResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PublicipShowResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PublicipShowResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PublicipShowResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string PublicipShowResp::getId() const
{
    return id_;
}

void PublicipShowResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicipShowResp::idIsSet() const
{
    return idIsSet_;
}

void PublicipShowResp::unsetid()
{
    idIsSet_ = false;
}

std::string PublicipShowResp::getPortId() const
{
    return portId_;
}

void PublicipShowResp::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool PublicipShowResp::portIdIsSet() const
{
    return portIdIsSet_;
}

void PublicipShowResp::unsetportId()
{
    portIdIsSet_ = false;
}

std::string PublicipShowResp::getPrivateIpAddress() const
{
    return privateIpAddress_;
}

void PublicipShowResp::setPrivateIpAddress(const std::string& value)
{
    privateIpAddress_ = value;
    privateIpAddressIsSet_ = true;
}

bool PublicipShowResp::privateIpAddressIsSet() const
{
    return privateIpAddressIsSet_;
}

void PublicipShowResp::unsetprivateIpAddress()
{
    privateIpAddressIsSet_ = false;
}

ProfileResp PublicipShowResp::getProfile() const
{
    return profile_;
}

void PublicipShowResp::setProfile(const ProfileResp& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool PublicipShowResp::profileIsSet() const
{
    return profileIsSet_;
}

void PublicipShowResp::unsetprofile()
{
    profileIsSet_ = false;
}

std::string PublicipShowResp::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void PublicipShowResp::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool PublicipShowResp::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void PublicipShowResp::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string PublicipShowResp::getStatus() const
{
    return status_;
}

void PublicipShowResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PublicipShowResp::statusIsSet() const
{
    return statusIsSet_;
}

void PublicipShowResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PublicipShowResp::getTenantId() const
{
    return tenantId_;
}

void PublicipShowResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool PublicipShowResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void PublicipShowResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string PublicipShowResp::getType() const
{
    return type_;
}

void PublicipShowResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicipShowResp::typeIsSet() const
{
    return typeIsSet_;
}

void PublicipShowResp::unsettype()
{
    typeIsSet_ = false;
}

std::string PublicipShowResp::getPublicIpv6Address() const
{
    return publicIpv6Address_;
}

void PublicipShowResp::setPublicIpv6Address(const std::string& value)
{
    publicIpv6Address_ = value;
    publicIpv6AddressIsSet_ = true;
}

bool PublicipShowResp::publicIpv6AddressIsSet() const
{
    return publicIpv6AddressIsSet_;
}

void PublicipShowResp::unsetpublicIpv6Address()
{
    publicIpv6AddressIsSet_ = false;
}

int32_t PublicipShowResp::getIpVersion() const
{
    return ipVersion_;
}

void PublicipShowResp::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool PublicipShowResp::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void PublicipShowResp::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string PublicipShowResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void PublicipShowResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool PublicipShowResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void PublicipShowResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::vector<std::string>& PublicipShowResp::getAllowShareBandwidthTypes()
{
    return allowShareBandwidthTypes_;
}

void PublicipShowResp::setAllowShareBandwidthTypes(const std::vector<std::string>& value)
{
    allowShareBandwidthTypes_ = value;
    allowShareBandwidthTypesIsSet_ = true;
}

bool PublicipShowResp::allowShareBandwidthTypesIsSet() const
{
    return allowShareBandwidthTypesIsSet_;
}

void PublicipShowResp::unsetallowShareBandwidthTypes()
{
    allowShareBandwidthTypesIsSet_ = false;
}

std::string PublicipShowResp::getAlias() const
{
    return alias_;
}

void PublicipShowResp::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool PublicipShowResp::aliasIsSet() const
{
    return aliasIsSet_;
}

void PublicipShowResp::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


