

#include "huaweicloud/eip/v3/model/PublicipSingleShowResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




PublicipSingleShowResp::PublicipSingleShowResp()
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
    networkType_ = "";
    networkTypeIsSet_ = false;
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
    profileIsSet_ = false;
    fakeNetworkType_ = false;
    fakeNetworkTypeIsSet_ = false;
    tagsIsSet_ = false;
    associateInstanceMetadata_ = "";
    associateInstanceMetadataIsSet_ = false;
    associateMode_ = "";
    associateModeIsSet_ = false;
    allowShareBandwidthTypesIsSet_ = false;
    cascadeDeleteByInstance_ = false;
    cascadeDeleteByInstanceIsSet_ = false;
}

PublicipSingleShowResp::~PublicipSingleShowResp() = default;

void PublicipSingleShowResp::validate()
{
}

web::json::value PublicipSingleShowResp::toJson() const
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
    if(networkTypeIsSet_) {
        val[utility::conversions::to_string_t("network_type")] = ModelBase::toJson(networkType_);
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
    if(profileIsSet_) {
        val[utility::conversions::to_string_t("profile")] = ModelBase::toJson(profile_);
    }
    if(fakeNetworkTypeIsSet_) {
        val[utility::conversions::to_string_t("fake_network_type")] = ModelBase::toJson(fakeNetworkType_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(associateInstanceMetadataIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_metadata")] = ModelBase::toJson(associateInstanceMetadata_);
    }
    if(associateModeIsSet_) {
        val[utility::conversions::to_string_t("associate_mode")] = ModelBase::toJson(associateMode_);
    }
    if(allowShareBandwidthTypesIsSet_) {
        val[utility::conversions::to_string_t("allow_share_bandwidth_types")] = ModelBase::toJson(allowShareBandwidthTypes_);
    }
    if(cascadeDeleteByInstanceIsSet_) {
        val[utility::conversions::to_string_t("cascade_delete_by_instance")] = ModelBase::toJson(cascadeDeleteByInstance_);
    }

    return val;
}
bool PublicipSingleShowResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile"));
        if(!fieldValue.is_null())
        {
            ProfileInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fake_network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fake_network_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFakeNetworkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_metadata"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cascade_delete_by_instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cascade_delete_by_instance"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCascadeDeleteByInstance(refVal);
        }
    }
    return ok;
}


std::string PublicipSingleShowResp::getId() const
{
    return id_;
}

void PublicipSingleShowResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicipSingleShowResp::idIsSet() const
{
    return idIsSet_;
}

void PublicipSingleShowResp::unsetid()
{
    idIsSet_ = false;
}

std::string PublicipSingleShowResp::getProjectId() const
{
    return projectId_;
}

void PublicipSingleShowResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool PublicipSingleShowResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void PublicipSingleShowResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t PublicipSingleShowResp::getIpVersion() const
{
    return ipVersion_;
}

void PublicipSingleShowResp::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool PublicipSingleShowResp::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void PublicipSingleShowResp::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string PublicipSingleShowResp::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void PublicipSingleShowResp::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool PublicipSingleShowResp::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void PublicipSingleShowResp::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string PublicipSingleShowResp::getPublicIpv6Address() const
{
    return publicIpv6Address_;
}

void PublicipSingleShowResp::setPublicIpv6Address(const std::string& value)
{
    publicIpv6Address_ = value;
    publicIpv6AddressIsSet_ = true;
}

bool PublicipSingleShowResp::publicIpv6AddressIsSet() const
{
    return publicIpv6AddressIsSet_;
}

void PublicipSingleShowResp::unsetpublicIpv6Address()
{
    publicIpv6AddressIsSet_ = false;
}

std::string PublicipSingleShowResp::getNetworkType() const
{
    return networkType_;
}

void PublicipSingleShowResp::setNetworkType(const std::string& value)
{
    networkType_ = value;
    networkTypeIsSet_ = true;
}

bool PublicipSingleShowResp::networkTypeIsSet() const
{
    return networkTypeIsSet_;
}

void PublicipSingleShowResp::unsetnetworkType()
{
    networkTypeIsSet_ = false;
}

std::string PublicipSingleShowResp::getStatus() const
{
    return status_;
}

void PublicipSingleShowResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PublicipSingleShowResp::statusIsSet() const
{
    return statusIsSet_;
}

void PublicipSingleShowResp::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PublicipSingleShowResp::getDescription() const
{
    return description_;
}

void PublicipSingleShowResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PublicipSingleShowResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PublicipSingleShowResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PublicipSingleShowResp::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void PublicipSingleShowResp::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool PublicipSingleShowResp::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void PublicipSingleShowResp::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

utility::datetime PublicipSingleShowResp::getCreatedAt() const
{
    return createdAt_;
}

void PublicipSingleShowResp::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PublicipSingleShowResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PublicipSingleShowResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime PublicipSingleShowResp::getUpdatedAt() const
{
    return updatedAt_;
}

void PublicipSingleShowResp::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool PublicipSingleShowResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void PublicipSingleShowResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string PublicipSingleShowResp::getType() const
{
    return type_;
}

void PublicipSingleShowResp::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PublicipSingleShowResp::typeIsSet() const
{
    return typeIsSet_;
}

void PublicipSingleShowResp::unsettype()
{
    typeIsSet_ = false;
}

VnicInfo PublicipSingleShowResp::getVnic() const
{
    return vnic_;
}

void PublicipSingleShowResp::setVnic(const VnicInfo& value)
{
    vnic_ = value;
    vnicIsSet_ = true;
}

bool PublicipSingleShowResp::vnicIsSet() const
{
    return vnicIsSet_;
}

void PublicipSingleShowResp::unsetvnic()
{
    vnicIsSet_ = false;
}

PublicipBandwidthInfo PublicipSingleShowResp::getBandwidth() const
{
    return bandwidth_;
}

void PublicipSingleShowResp::setBandwidth(const PublicipBandwidthInfo& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool PublicipSingleShowResp::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void PublicipSingleShowResp::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

std::string PublicipSingleShowResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void PublicipSingleShowResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool PublicipSingleShowResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void PublicipSingleShowResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string PublicipSingleShowResp::getBillingInfo() const
{
    return billingInfo_;
}

void PublicipSingleShowResp::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool PublicipSingleShowResp::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void PublicipSingleShowResp::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string PublicipSingleShowResp::getLockStatus() const
{
    return lockStatus_;
}

void PublicipSingleShowResp::setLockStatus(const std::string& value)
{
    lockStatus_ = value;
    lockStatusIsSet_ = true;
}

bool PublicipSingleShowResp::lockStatusIsSet() const
{
    return lockStatusIsSet_;
}

void PublicipSingleShowResp::unsetlockStatus()
{
    lockStatusIsSet_ = false;
}

std::string PublicipSingleShowResp::getAssociateInstanceType() const
{
    return associateInstanceType_;
}

void PublicipSingleShowResp::setAssociateInstanceType(const std::string& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool PublicipSingleShowResp::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void PublicipSingleShowResp::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::string PublicipSingleShowResp::getAssociateInstanceId() const
{
    return associateInstanceId_;
}

void PublicipSingleShowResp::setAssociateInstanceId(const std::string& value)
{
    associateInstanceId_ = value;
    associateInstanceIdIsSet_ = true;
}

bool PublicipSingleShowResp::associateInstanceIdIsSet() const
{
    return associateInstanceIdIsSet_;
}

void PublicipSingleShowResp::unsetassociateInstanceId()
{
    associateInstanceIdIsSet_ = false;
}

std::string PublicipSingleShowResp::getPublicipPoolId() const
{
    return publicipPoolId_;
}

void PublicipSingleShowResp::setPublicipPoolId(const std::string& value)
{
    publicipPoolId_ = value;
    publicipPoolIdIsSet_ = true;
}

bool PublicipSingleShowResp::publicipPoolIdIsSet() const
{
    return publicipPoolIdIsSet_;
}

void PublicipSingleShowResp::unsetpublicipPoolId()
{
    publicipPoolIdIsSet_ = false;
}

std::string PublicipSingleShowResp::getPublicipPoolName() const
{
    return publicipPoolName_;
}

void PublicipSingleShowResp::setPublicipPoolName(const std::string& value)
{
    publicipPoolName_ = value;
    publicipPoolNameIsSet_ = true;
}

bool PublicipSingleShowResp::publicipPoolNameIsSet() const
{
    return publicipPoolNameIsSet_;
}

void PublicipSingleShowResp::unsetpublicipPoolName()
{
    publicipPoolNameIsSet_ = false;
}

std::string PublicipSingleShowResp::getAlias() const
{
    return alias_;
}

void PublicipSingleShowResp::setAlias(const std::string& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool PublicipSingleShowResp::aliasIsSet() const
{
    return aliasIsSet_;
}

void PublicipSingleShowResp::unsetalias()
{
    aliasIsSet_ = false;
}

ProfileInfo PublicipSingleShowResp::getProfile() const
{
    return profile_;
}

void PublicipSingleShowResp::setProfile(const ProfileInfo& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool PublicipSingleShowResp::profileIsSet() const
{
    return profileIsSet_;
}

void PublicipSingleShowResp::unsetprofile()
{
    profileIsSet_ = false;
}

bool PublicipSingleShowResp::isFakeNetworkType() const
{
    return fakeNetworkType_;
}

void PublicipSingleShowResp::setFakeNetworkType(bool value)
{
    fakeNetworkType_ = value;
    fakeNetworkTypeIsSet_ = true;
}

bool PublicipSingleShowResp::fakeNetworkTypeIsSet() const
{
    return fakeNetworkTypeIsSet_;
}

void PublicipSingleShowResp::unsetfakeNetworkType()
{
    fakeNetworkTypeIsSet_ = false;
}

std::vector<std::string>& PublicipSingleShowResp::getTags()
{
    return tags_;
}

void PublicipSingleShowResp::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool PublicipSingleShowResp::tagsIsSet() const
{
    return tagsIsSet_;
}

void PublicipSingleShowResp::unsettags()
{
    tagsIsSet_ = false;
}

std::string PublicipSingleShowResp::getAssociateInstanceMetadata() const
{
    return associateInstanceMetadata_;
}

void PublicipSingleShowResp::setAssociateInstanceMetadata(const std::string& value)
{
    associateInstanceMetadata_ = value;
    associateInstanceMetadataIsSet_ = true;
}

bool PublicipSingleShowResp::associateInstanceMetadataIsSet() const
{
    return associateInstanceMetadataIsSet_;
}

void PublicipSingleShowResp::unsetassociateInstanceMetadata()
{
    associateInstanceMetadataIsSet_ = false;
}

std::string PublicipSingleShowResp::getAssociateMode() const
{
    return associateMode_;
}

void PublicipSingleShowResp::setAssociateMode(const std::string& value)
{
    associateMode_ = value;
    associateModeIsSet_ = true;
}

bool PublicipSingleShowResp::associateModeIsSet() const
{
    return associateModeIsSet_;
}

void PublicipSingleShowResp::unsetassociateMode()
{
    associateModeIsSet_ = false;
}

std::vector<std::string>& PublicipSingleShowResp::getAllowShareBandwidthTypes()
{
    return allowShareBandwidthTypes_;
}

void PublicipSingleShowResp::setAllowShareBandwidthTypes(const std::vector<std::string>& value)
{
    allowShareBandwidthTypes_ = value;
    allowShareBandwidthTypesIsSet_ = true;
}

bool PublicipSingleShowResp::allowShareBandwidthTypesIsSet() const
{
    return allowShareBandwidthTypesIsSet_;
}

void PublicipSingleShowResp::unsetallowShareBandwidthTypes()
{
    allowShareBandwidthTypesIsSet_ = false;
}

bool PublicipSingleShowResp::isCascadeDeleteByInstance() const
{
    return cascadeDeleteByInstance_;
}

void PublicipSingleShowResp::setCascadeDeleteByInstance(bool value)
{
    cascadeDeleteByInstance_ = value;
    cascadeDeleteByInstanceIsSet_ = true;
}

bool PublicipSingleShowResp::cascadeDeleteByInstanceIsSet() const
{
    return cascadeDeleteByInstanceIsSet_;
}

void PublicipSingleShowResp::unsetcascadeDeleteByInstance()
{
    cascadeDeleteByInstanceIsSet_ = false;
}

}
}
}
}
}


