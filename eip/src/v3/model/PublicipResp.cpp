

#include "huaweicloud/eip/v3/model/PublicipResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




PublicipResp::PublicipResp()
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
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
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
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
}

PublicipResp::~PublicipResp() = default;

void PublicipResp::validate()
{
}

web::json::value PublicipResp::toJson() const
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
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }

    return val;
}
bool PublicipResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
            VnicResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            BandwidthResp refVal;
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
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    return ok;
}


std::string PublicipResp::getId() const
{
    return id_;
}

void PublicipResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicipResp::idIsSet() const
{
    return idIsSet_;
}

void PublicipResp::unsetid()
{
    idIsSet_ = false;
}

std::string PublicipResp::getProjectId() const
{
    return projectId_;
}

void PublicipResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PublicipResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PublicipResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t PublicipResp::getIpVersion() const
{
    return ipVersion_;
}

void PublicipResp::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool PublicipResp::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void PublicipResp::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string PublicipResp::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void PublicipResp::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool PublicipResp::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void PublicipResp::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string PublicipResp::getPublicIpv6Address() const
{
    return publicIpv6Address_;
}

void PublicipResp::setPublicIpv6Address(const std::string& value)
{
    publicIpv6Address_ = value;
    publicIpv6AddressIsSet_ = true;
}

bool PublicipResp::publicIpv6AddressIsSet() const
{
    return publicIpv6AddressIsSet_;
}

void PublicipResp::unsetpublicIpv6Address()
{
    publicIpv6AddressIsSet_ = false;
}

std::string PublicipResp::getStatus() const
{
    return status_;
}

void PublicipResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PublicipResp::statusIsSet() const
{
    return statusIsSet_;
}

void PublicipResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PublicipResp::getDescription() const
{
    return description_;
}

void PublicipResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PublicipResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PublicipResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PublicipResp::getCreatedAt() const
{
    return createdAt_;
}

void PublicipResp::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PublicipResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PublicipResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string PublicipResp::getUpdatedAt() const
{
    return updatedAt_;
}

void PublicipResp::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool PublicipResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void PublicipResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string PublicipResp::getType() const
{
    return type_;
}

void PublicipResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicipResp::typeIsSet() const
{
    return typeIsSet_;
}

void PublicipResp::unsettype()
{
    typeIsSet_ = false;
}

VnicResp PublicipResp::getVnic() const
{
    return vnic_;
}

void PublicipResp::setVnic(const VnicResp& value)
{
    vnic_ = value;
    vnicIsSet_ = true;
}

bool PublicipResp::vnicIsSet() const
{
    return vnicIsSet_;
}

void PublicipResp::unsetvnic()
{
    vnicIsSet_ = false;
}

BandwidthResp PublicipResp::getBandwidth() const
{
    return bandwidth_;
}

void PublicipResp::setBandwidth(const BandwidthResp& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool PublicipResp::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void PublicipResp::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

std::string PublicipResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PublicipResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PublicipResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PublicipResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string PublicipResp::getBillingInfo() const
{
    return billingInfo_;
}

void PublicipResp::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool PublicipResp::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void PublicipResp::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string PublicipResp::getLockStatus() const
{
    return lockStatus_;
}

void PublicipResp::setLockStatus(const std::string& value)
{
    lockStatus_ = value;
    lockStatusIsSet_ = true;
}

bool PublicipResp::lockStatusIsSet() const
{
    return lockStatusIsSet_;
}

void PublicipResp::unsetlockStatus()
{
    lockStatusIsSet_ = false;
}

std::string PublicipResp::getAssociateInstanceType() const
{
    return associateInstanceType_;
}

void PublicipResp::setAssociateInstanceType(const std::string& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool PublicipResp::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void PublicipResp::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::string PublicipResp::getAssociateInstanceId() const
{
    return associateInstanceId_;
}

void PublicipResp::setAssociateInstanceId(const std::string& value)
{
    associateInstanceId_ = value;
    associateInstanceIdIsSet_ = true;
}

bool PublicipResp::associateInstanceIdIsSet() const
{
    return associateInstanceIdIsSet_;
}

void PublicipResp::unsetassociateInstanceId()
{
    associateInstanceIdIsSet_ = false;
}

std::string PublicipResp::getPublicipPoolId() const
{
    return publicipPoolId_;
}

void PublicipResp::setPublicipPoolId(const std::string& value)
{
    publicipPoolId_ = value;
    publicipPoolIdIsSet_ = true;
}

bool PublicipResp::publicipPoolIdIsSet() const
{
    return publicipPoolIdIsSet_;
}

void PublicipResp::unsetpublicipPoolId()
{
    publicipPoolIdIsSet_ = false;
}

std::string PublicipResp::getPublicipPoolName() const
{
    return publicipPoolName_;
}

void PublicipResp::setPublicipPoolName(const std::string& value)
{
    publicipPoolName_ = value;
    publicipPoolNameIsSet_ = true;
}

bool PublicipResp::publicipPoolNameIsSet() const
{
    return publicipPoolNameIsSet_;
}

void PublicipResp::unsetpublicipPoolName()
{
    publicipPoolNameIsSet_ = false;
}

std::string PublicipResp::getAlias() const
{
    return alias_;
}

void PublicipResp::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool PublicipResp::aliasIsSet() const
{
    return aliasIsSet_;
}

void PublicipResp::unsetalias()
{
    aliasIsSet_ = false;
}

std::string PublicipResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void PublicipResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool PublicipResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void PublicipResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

}
}
}
}
}


