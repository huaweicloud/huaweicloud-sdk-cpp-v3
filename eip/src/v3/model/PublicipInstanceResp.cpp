

#include "huaweicloud/eip/v3/model/PublicipInstanceResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




PublicipInstanceResp::PublicipInstanceResp()
{
    id_ = "";
    idIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    publicIpAddress_ = "";
    publicIpAddressIsSet_ = false;
    publicIpv6Address_ = "";
    publicIpv6AddressIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    vnicIsSet_ = false;
    bandwidthIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
    lockStatus_ = "";
    lockStatusIsSet_ = false;
    associateInstanceType_ = "";
    associateInstanceTypeIsSet_ = false;
    associateInstanceId_ = "";
    associateInstanceIdIsSet_ = false;
    publicipPoolId_ = "";
    publicipPoolIdIsSet_ = false;
    publicipPoolName_ = "";
    publicipPoolNameIsSet_ = false;
    alias_ = "";
    aliasIsSet_ = false;
}

PublicipInstanceResp::~PublicipInstanceResp() = default;

void PublicipInstanceResp::validate()
{
}

web::json::value PublicipInstanceResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(publicIpAddressIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address")] = ModelBase::toJson(publicIpAddress_);
    }
    if(publicIpv6AddressIsSet_) {
        val[utility::conversions::to_string_t("public_ipv6_address")] = ModelBase::toJson(publicIpv6Address_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(vnicIsSet_) {
        val[utility::conversions::to_string_t("vnic")] = ModelBase::toJson(vnic_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
    }
    if(lockStatusIsSet_) {
        val[utility::conversions::to_string_t("lock_status")] = ModelBase::toJson(lockStatus_);
    }
    if(associateInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_type")] = ModelBase::toJson(associateInstanceType_);
    }
    if(associateInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_id")] = ModelBase::toJson(associateInstanceId_);
    }
    if(publicipPoolIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_pool_id")] = ModelBase::toJson(publicipPoolId_);
    }
    if(publicipPoolNameIsSet_) {
        val[utility::conversions::to_string_t("publicip_pool_name")] = ModelBase::toJson(publicipPoolName_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }

    return val;
}
bool PublicipInstanceResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vnic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic"));
        if(!fieldValue.is_null())
        {
            VnicInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            PublicipBandwidthInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("billing_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipPoolName(refVal);
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


std::string PublicipInstanceResp::getId() const
{
    return id_;
}

void PublicipInstanceResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicipInstanceResp::idIsSet() const
{
    return idIsSet_;
}

void PublicipInstanceResp::unsetid()
{
    idIsSet_ = false;
}

std::string PublicipInstanceResp::getProjectId() const
{
    return projectId_;
}

void PublicipInstanceResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PublicipInstanceResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PublicipInstanceResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t PublicipInstanceResp::getIpVersion() const
{
    return ipVersion_;
}

void PublicipInstanceResp::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool PublicipInstanceResp::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void PublicipInstanceResp::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string PublicipInstanceResp::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void PublicipInstanceResp::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool PublicipInstanceResp::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void PublicipInstanceResp::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string PublicipInstanceResp::getPublicIpv6Address() const
{
    return publicIpv6Address_;
}

void PublicipInstanceResp::setPublicIpv6Address(const std::string& value)
{
    publicIpv6Address_ = value;
    publicIpv6AddressIsSet_ = true;
}

bool PublicipInstanceResp::publicIpv6AddressIsSet() const
{
    return publicIpv6AddressIsSet_;
}

void PublicipInstanceResp::unsetpublicIpv6Address()
{
    publicIpv6AddressIsSet_ = false;
}

std::string PublicipInstanceResp::getStatus() const
{
    return status_;
}

void PublicipInstanceResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PublicipInstanceResp::statusIsSet() const
{
    return statusIsSet_;
}

void PublicipInstanceResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PublicipInstanceResp::getDescription() const
{
    return description_;
}

void PublicipInstanceResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PublicipInstanceResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PublicipInstanceResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PublicipInstanceResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void PublicipInstanceResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool PublicipInstanceResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void PublicipInstanceResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

utility::datetime PublicipInstanceResp::getCreatedAt() const
{
    return createdAt_;
}

void PublicipInstanceResp::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PublicipInstanceResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PublicipInstanceResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime PublicipInstanceResp::getUpdatedAt() const
{
    return updatedAt_;
}

void PublicipInstanceResp::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool PublicipInstanceResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void PublicipInstanceResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string PublicipInstanceResp::getType() const
{
    return type_;
}

void PublicipInstanceResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicipInstanceResp::typeIsSet() const
{
    return typeIsSet_;
}

void PublicipInstanceResp::unsettype()
{
    typeIsSet_ = false;
}

VnicInfo PublicipInstanceResp::getVnic() const
{
    return vnic_;
}

void PublicipInstanceResp::setVnic(const VnicInfo& value)
{
    vnic_ = value;
    vnicIsSet_ = true;
}

bool PublicipInstanceResp::vnicIsSet() const
{
    return vnicIsSet_;
}

void PublicipInstanceResp::unsetvnic()
{
    vnicIsSet_ = false;
}

PublicipBandwidthInfo PublicipInstanceResp::getBandwidth() const
{
    return bandwidth_;
}

void PublicipInstanceResp::setBandwidth(const PublicipBandwidthInfo& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool PublicipInstanceResp::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void PublicipInstanceResp::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

std::string PublicipInstanceResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PublicipInstanceResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PublicipInstanceResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PublicipInstanceResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string PublicipInstanceResp::getBillingInfo() const
{
    return billingInfo_;
}

void PublicipInstanceResp::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool PublicipInstanceResp::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void PublicipInstanceResp::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string PublicipInstanceResp::getLockStatus() const
{
    return lockStatus_;
}

void PublicipInstanceResp::setLockStatus(const std::string& value)
{
    lockStatus_ = value;
    lockStatusIsSet_ = true;
}

bool PublicipInstanceResp::lockStatusIsSet() const
{
    return lockStatusIsSet_;
}

void PublicipInstanceResp::unsetlockStatus()
{
    lockStatusIsSet_ = false;
}

std::string PublicipInstanceResp::getAssociateInstanceType() const
{
    return associateInstanceType_;
}

void PublicipInstanceResp::setAssociateInstanceType(const std::string& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool PublicipInstanceResp::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void PublicipInstanceResp::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::string PublicipInstanceResp::getAssociateInstanceId() const
{
    return associateInstanceId_;
}

void PublicipInstanceResp::setAssociateInstanceId(const std::string& value)
{
    associateInstanceId_ = value;
    associateInstanceIdIsSet_ = true;
}

bool PublicipInstanceResp::associateInstanceIdIsSet() const
{
    return associateInstanceIdIsSet_;
}

void PublicipInstanceResp::unsetassociateInstanceId()
{
    associateInstanceIdIsSet_ = false;
}

std::string PublicipInstanceResp::getPublicipPoolId() const
{
    return publicipPoolId_;
}

void PublicipInstanceResp::setPublicipPoolId(const std::string& value)
{
    publicipPoolId_ = value;
    publicipPoolIdIsSet_ = true;
}

bool PublicipInstanceResp::publicipPoolIdIsSet() const
{
    return publicipPoolIdIsSet_;
}

void PublicipInstanceResp::unsetpublicipPoolId()
{
    publicipPoolIdIsSet_ = false;
}

std::string PublicipInstanceResp::getPublicipPoolName() const
{
    return publicipPoolName_;
}

void PublicipInstanceResp::setPublicipPoolName(const std::string& value)
{
    publicipPoolName_ = value;
    publicipPoolNameIsSet_ = true;
}

bool PublicipInstanceResp::publicipPoolNameIsSet() const
{
    return publicipPoolNameIsSet_;
}

void PublicipInstanceResp::unsetpublicipPoolName()
{
    publicipPoolNameIsSet_ = false;
}

std::string PublicipInstanceResp::getAlias() const
{
    return alias_;
}

void PublicipInstanceResp::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool PublicipInstanceResp::aliasIsSet() const
{
    return aliasIsSet_;
}

void PublicipInstanceResp::unsetalias()
{
    aliasIsSet_ = false;
}

}
}
}
}
}


