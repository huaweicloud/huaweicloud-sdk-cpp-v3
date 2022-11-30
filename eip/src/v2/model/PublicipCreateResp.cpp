

#include "huaweicloud/eip/v2/model/PublicipCreateResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




PublicipCreateResp::PublicipCreateResp()
{
    bandwidthSize_ = 0;
    bandwidthSizeIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
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
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
}

PublicipCreateResp::~PublicipCreateResp() = default;

void PublicipCreateResp::validate()
{
}

web::json::value PublicipCreateResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthSizeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_size")] = ModelBase::toJson(bandwidthSize_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}

bool PublicipCreateResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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


int32_t PublicipCreateResp::getBandwidthSize() const
{
    return bandwidthSize_;
}

void PublicipCreateResp::setBandwidthSize(int32_t value)
{
    bandwidthSize_ = value;
    bandwidthSizeIsSet_ = true;
}

bool PublicipCreateResp::bandwidthSizeIsSet() const
{
    return bandwidthSizeIsSet_;
}

void PublicipCreateResp::unsetbandwidthSize()
{
    bandwidthSizeIsSet_ = false;
}

utility::datetime PublicipCreateResp::getCreateTime() const
{
    return createTime_;
}

void PublicipCreateResp::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool PublicipCreateResp::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void PublicipCreateResp::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string PublicipCreateResp::getId() const
{
    return id_;
}

void PublicipCreateResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicipCreateResp::idIsSet() const
{
    return idIsSet_;
}

void PublicipCreateResp::unsetid()
{
    idIsSet_ = false;
}

std::string PublicipCreateResp::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void PublicipCreateResp::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool PublicipCreateResp::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void PublicipCreateResp::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string PublicipCreateResp::getStatus() const
{
    return status_;
}

void PublicipCreateResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PublicipCreateResp::statusIsSet() const
{
    return statusIsSet_;
}

void PublicipCreateResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PublicipCreateResp::getTenantId() const
{
    return tenantId_;
}

void PublicipCreateResp::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool PublicipCreateResp::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void PublicipCreateResp::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string PublicipCreateResp::getType() const
{
    return type_;
}

void PublicipCreateResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicipCreateResp::typeIsSet() const
{
    return typeIsSet_;
}

void PublicipCreateResp::unsettype()
{
    typeIsSet_ = false;
}

std::string PublicipCreateResp::getPublicIpv6Address() const
{
    return publicIpv6Address_;
}

void PublicipCreateResp::setPublicIpv6Address(const std::string& value)
{
    publicIpv6Address_ = value;
    publicIpv6AddressIsSet_ = true;
}

bool PublicipCreateResp::publicIpv6AddressIsSet() const
{
    return publicIpv6AddressIsSet_;
}

void PublicipCreateResp::unsetpublicIpv6Address()
{
    publicIpv6AddressIsSet_ = false;
}

int32_t PublicipCreateResp::getIpVersion() const
{
    return ipVersion_;
}

void PublicipCreateResp::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool PublicipCreateResp::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void PublicipCreateResp::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string PublicipCreateResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PublicipCreateResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PublicipCreateResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PublicipCreateResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string PublicipCreateResp::getAlias() const
{
    return alias_;
}

void PublicipCreateResp::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool PublicipCreateResp::aliasIsSet() const
{
    return aliasIsSet_;
}

void PublicipCreateResp::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


