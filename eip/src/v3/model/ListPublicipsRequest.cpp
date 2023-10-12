

#include "huaweicloud/eip/v3/model/ListPublicipsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListPublicipsRequest::ListPublicipsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    fieldsIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    idIsSet_ = false;
    ipVersionIsSet_ = false;
    publicIpAddressIsSet_ = false;
    publicIpAddressLike_ = "";
    publicIpAddressLikeIsSet_ = false;
    publicIpv6AddressIsSet_ = false;
    publicIpv6AddressLike_ = "";
    publicIpv6AddressLikeIsSet_ = false;
    typeIsSet_ = false;
    networkTypeIsSet_ = false;
    publicipPoolNameIsSet_ = false;
    statusIsSet_ = false;
    aliasLike_ = "";
    aliasLikeIsSet_ = false;
    aliasIsSet_ = false;
    descriptionIsSet_ = false;
    vnicPrivateIpAddressIsSet_ = false;
    vnicPrivateIpAddressLike_ = "";
    vnicPrivateIpAddressLikeIsSet_ = false;
    vnicDeviceIdIsSet_ = false;
    vnicDeviceOwnerIsSet_ = false;
    vnicVpcIdIsSet_ = false;
    vnicPortIdIsSet_ = false;
    vnicDeviceOwnerPrefixlike_ = "";
    vnicDeviceOwnerPrefixlikeIsSet_ = false;
    vnicInstanceTypeIsSet_ = false;
    vnicInstanceIdIsSet_ = false;
    bandwidthIdIsSet_ = false;
    bandwidthNameIsSet_ = false;
    bandwidthNameLikeIsSet_ = false;
    bandwidthSizeIsSet_ = false;
    bandwidthShareTypeIsSet_ = false;
    bandwidthChargeModeIsSet_ = false;
    billingInfoIsSet_ = false;
    billingMode_ = "";
    billingModeIsSet_ = false;
    associateInstanceTypeIsSet_ = false;
    associateInstanceIdIsSet_ = false;
    enterpriseProjectIdIsSet_ = false;
    publicBorderGroupIsSet_ = false;
    allowShareBandwidthTypeAnyIsSet_ = false;
}

ListPublicipsRequest::~ListPublicipsRequest() = default;

void ListPublicipsRequest::validate()
{
}

web::json::value ListPublicipsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(publicIpAddressIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address")] = ModelBase::toJson(publicIpAddress_);
    }
    if(publicIpAddressLikeIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address_like")] = ModelBase::toJson(publicIpAddressLike_);
    }
    if(publicIpv6AddressIsSet_) {
        val[utility::conversions::to_string_t("public_ipv6_address")] = ModelBase::toJson(publicIpv6Address_);
    }
    if(publicIpv6AddressLikeIsSet_) {
        val[utility::conversions::to_string_t("public_ipv6_address_like")] = ModelBase::toJson(publicIpv6AddressLike_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(networkTypeIsSet_) {
        val[utility::conversions::to_string_t("network_type")] = ModelBase::toJson(networkType_);
    }
    if(publicipPoolNameIsSet_) {
        val[utility::conversions::to_string_t("publicip_pool_name")] = ModelBase::toJson(publicipPoolName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(aliasLikeIsSet_) {
        val[utility::conversions::to_string_t("alias_like")] = ModelBase::toJson(aliasLike_);
    }
    if(aliasIsSet_) {
        val[utility::conversions::to_string_t("alias")] = ModelBase::toJson(alias_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(vnicPrivateIpAddressIsSet_) {
        val[utility::conversions::to_string_t("vnic.private_ip_address")] = ModelBase::toJson(vnicPrivateIpAddress_);
    }
    if(vnicPrivateIpAddressLikeIsSet_) {
        val[utility::conversions::to_string_t("vnic.private_ip_address_like")] = ModelBase::toJson(vnicPrivateIpAddressLike_);
    }
    if(vnicDeviceIdIsSet_) {
        val[utility::conversions::to_string_t("vnic.device_id")] = ModelBase::toJson(vnicDeviceId_);
    }
    if(vnicDeviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("vnic.device_owner")] = ModelBase::toJson(vnicDeviceOwner_);
    }
    if(vnicVpcIdIsSet_) {
        val[utility::conversions::to_string_t("vnic.vpc_id")] = ModelBase::toJson(vnicVpcId_);
    }
    if(vnicPortIdIsSet_) {
        val[utility::conversions::to_string_t("vnic.port_id")] = ModelBase::toJson(vnicPortId_);
    }
    if(vnicDeviceOwnerPrefixlikeIsSet_) {
        val[utility::conversions::to_string_t("vnic.device_owner_prefixlike")] = ModelBase::toJson(vnicDeviceOwnerPrefixlike_);
    }
    if(vnicInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("vnic.instance_type")] = ModelBase::toJson(vnicInstanceType_);
    }
    if(vnicInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("vnic.instance_id")] = ModelBase::toJson(vnicInstanceId_);
    }
    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth.id")] = ModelBase::toJson(bandwidthId_);
    }
    if(bandwidthNameIsSet_) {
        val[utility::conversions::to_string_t("bandwidth.name")] = ModelBase::toJson(bandwidthName_);
    }
    if(bandwidthNameLikeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth.name_like")] = ModelBase::toJson(bandwidthNameLike_);
    }
    if(bandwidthSizeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth.size")] = ModelBase::toJson(bandwidthSize_);
    }
    if(bandwidthShareTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth.share_type")] = ModelBase::toJson(bandwidthShareType_);
    }
    if(bandwidthChargeModeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth.charge_mode")] = ModelBase::toJson(bandwidthChargeMode_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
    }
    if(billingModeIsSet_) {
        val[utility::conversions::to_string_t("billing_mode")] = ModelBase::toJson(billingMode_);
    }
    if(associateInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_type")] = ModelBase::toJson(associateInstanceType_);
    }
    if(associateInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_id")] = ModelBase::toJson(associateInstanceId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(allowShareBandwidthTypeAnyIsSet_) {
        val[utility::conversions::to_string_t("allow_share_bandwidth_type_any")] = ModelBase::toJson(allowShareBandwidthTypeAny_);
    }

    return val;
}
bool ListPublicipsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ip_address_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddressLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ipv6_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ipv6_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpv6Address(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ipv6_address_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ipv6_address_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpv6AddressLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicip_pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_pool_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAliasLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alias"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.private_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.private_ip_address"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicPrivateIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.private_ip_address_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.private_ip_address_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicPrivateIpAddressLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.device_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.device_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.device_owner"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicDeviceOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.vpc_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.port_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.device_owner_prefixlike"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.device_owner_prefixlike"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicDeviceOwnerPrefixlike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.instance_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.instance_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth.id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth.name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth.name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth.name_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth.name_like"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthNameLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth.size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth.size"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth.share_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth.share_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthShareType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth.charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth.charge_mode"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_info"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associate_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associate_instance_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociateInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_border_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_border_group"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicBorderGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_share_bandwidth_type_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_share_bandwidth_type_any"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowShareBandwidthTypeAny(refVal);
        }
    }
    return ok;
}


std::string ListPublicipsRequest::getMarker() const
{
    return marker_;
}

void ListPublicipsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPublicipsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListPublicipsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListPublicipsRequest::getOffset() const
{
    return offset_;
}

void ListPublicipsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPublicipsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPublicipsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPublicipsRequest::getLimit() const
{
    return limit_;
}

void ListPublicipsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPublicipsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPublicipsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getFields()
{
    return fields_;
}

void ListPublicipsRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListPublicipsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListPublicipsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListPublicipsRequest::getSortKey() const
{
    return sortKey_;
}

void ListPublicipsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListPublicipsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListPublicipsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListPublicipsRequest::getSortDir() const
{
    return sortDir_;
}

void ListPublicipsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListPublicipsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListPublicipsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getId()
{
    return id_;
}

void ListPublicipsRequest::setId(const std::vector<std::string>& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListPublicipsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListPublicipsRequest::unsetid()
{
    idIsSet_ = false;
}

std::vector<int32_t>& ListPublicipsRequest::getIpVersion()
{
    return ipVersion_;
}

void ListPublicipsRequest::setIpVersion(std::vector<int32_t> value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool ListPublicipsRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void ListPublicipsRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getPublicIpAddress()
{
    return publicIpAddress_;
}

void ListPublicipsRequest::setPublicIpAddress(const std::vector<std::string>& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool ListPublicipsRequest::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void ListPublicipsRequest::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string ListPublicipsRequest::getPublicIpAddressLike() const
{
    return publicIpAddressLike_;
}

void ListPublicipsRequest::setPublicIpAddressLike(const std::string& value)
{
    publicIpAddressLike_ = value;
    publicIpAddressLikeIsSet_ = true;
}

bool ListPublicipsRequest::publicIpAddressLikeIsSet() const
{
    return publicIpAddressLikeIsSet_;
}

void ListPublicipsRequest::unsetpublicIpAddressLike()
{
    publicIpAddressLikeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getPublicIpv6Address()
{
    return publicIpv6Address_;
}

void ListPublicipsRequest::setPublicIpv6Address(const std::vector<std::string>& value)
{
    publicIpv6Address_ = value;
    publicIpv6AddressIsSet_ = true;
}

bool ListPublicipsRequest::publicIpv6AddressIsSet() const
{
    return publicIpv6AddressIsSet_;
}

void ListPublicipsRequest::unsetpublicIpv6Address()
{
    publicIpv6AddressIsSet_ = false;
}

std::string ListPublicipsRequest::getPublicIpv6AddressLike() const
{
    return publicIpv6AddressLike_;
}

void ListPublicipsRequest::setPublicIpv6AddressLike(const std::string& value)
{
    publicIpv6AddressLike_ = value;
    publicIpv6AddressLikeIsSet_ = true;
}

bool ListPublicipsRequest::publicIpv6AddressLikeIsSet() const
{
    return publicIpv6AddressLikeIsSet_;
}

void ListPublicipsRequest::unsetpublicIpv6AddressLike()
{
    publicIpv6AddressLikeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getType()
{
    return type_;
}

void ListPublicipsRequest::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListPublicipsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListPublicipsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getNetworkType()
{
    return networkType_;
}

void ListPublicipsRequest::setNetworkType(const std::vector<std::string>& value)
{
    networkType_ = value;
    networkTypeIsSet_ = true;
}

bool ListPublicipsRequest::networkTypeIsSet() const
{
    return networkTypeIsSet_;
}

void ListPublicipsRequest::unsetnetworkType()
{
    networkTypeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getPublicipPoolName()
{
    return publicipPoolName_;
}

void ListPublicipsRequest::setPublicipPoolName(const std::vector<std::string>& value)
{
    publicipPoolName_ = value;
    publicipPoolNameIsSet_ = true;
}

bool ListPublicipsRequest::publicipPoolNameIsSet() const
{
    return publicipPoolNameIsSet_;
}

void ListPublicipsRequest::unsetpublicipPoolName()
{
    publicipPoolNameIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getStatus()
{
    return status_;
}

void ListPublicipsRequest::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPublicipsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListPublicipsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListPublicipsRequest::getAliasLike() const
{
    return aliasLike_;
}

void ListPublicipsRequest::setAliasLike(const std::string& value)
{
    aliasLike_ = value;
    aliasLikeIsSet_ = true;
}

bool ListPublicipsRequest::aliasLikeIsSet() const
{
    return aliasLikeIsSet_;
}

void ListPublicipsRequest::unsetaliasLike()
{
    aliasLikeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getAlias()
{
    return alias_;
}

void ListPublicipsRequest::setAlias(const std::vector<std::string>& value)
{
    alias_ = value;
    aliasIsSet_ = true;
}

bool ListPublicipsRequest::aliasIsSet() const
{
    return aliasIsSet_;
}

void ListPublicipsRequest::unsetalias()
{
    aliasIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getDescription()
{
    return description_;
}

void ListPublicipsRequest::setDescription(const std::vector<std::string>& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ListPublicipsRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ListPublicipsRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getVnicPrivateIpAddress()
{
    return vnicPrivateIpAddress_;
}

void ListPublicipsRequest::setVnicPrivateIpAddress(const std::vector<std::string>& value)
{
    vnicPrivateIpAddress_ = value;
    vnicPrivateIpAddressIsSet_ = true;
}

bool ListPublicipsRequest::vnicPrivateIpAddressIsSet() const
{
    return vnicPrivateIpAddressIsSet_;
}

void ListPublicipsRequest::unsetvnicPrivateIpAddress()
{
    vnicPrivateIpAddressIsSet_ = false;
}

std::string ListPublicipsRequest::getVnicPrivateIpAddressLike() const
{
    return vnicPrivateIpAddressLike_;
}

void ListPublicipsRequest::setVnicPrivateIpAddressLike(const std::string& value)
{
    vnicPrivateIpAddressLike_ = value;
    vnicPrivateIpAddressLikeIsSet_ = true;
}

bool ListPublicipsRequest::vnicPrivateIpAddressLikeIsSet() const
{
    return vnicPrivateIpAddressLikeIsSet_;
}

void ListPublicipsRequest::unsetvnicPrivateIpAddressLike()
{
    vnicPrivateIpAddressLikeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getVnicDeviceId()
{
    return vnicDeviceId_;
}

void ListPublicipsRequest::setVnicDeviceId(const std::vector<std::string>& value)
{
    vnicDeviceId_ = value;
    vnicDeviceIdIsSet_ = true;
}

bool ListPublicipsRequest::vnicDeviceIdIsSet() const
{
    return vnicDeviceIdIsSet_;
}

void ListPublicipsRequest::unsetvnicDeviceId()
{
    vnicDeviceIdIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getVnicDeviceOwner()
{
    return vnicDeviceOwner_;
}

void ListPublicipsRequest::setVnicDeviceOwner(const std::vector<std::string>& value)
{
    vnicDeviceOwner_ = value;
    vnicDeviceOwnerIsSet_ = true;
}

bool ListPublicipsRequest::vnicDeviceOwnerIsSet() const
{
    return vnicDeviceOwnerIsSet_;
}

void ListPublicipsRequest::unsetvnicDeviceOwner()
{
    vnicDeviceOwnerIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getVnicVpcId()
{
    return vnicVpcId_;
}

void ListPublicipsRequest::setVnicVpcId(const std::vector<std::string>& value)
{
    vnicVpcId_ = value;
    vnicVpcIdIsSet_ = true;
}

bool ListPublicipsRequest::vnicVpcIdIsSet() const
{
    return vnicVpcIdIsSet_;
}

void ListPublicipsRequest::unsetvnicVpcId()
{
    vnicVpcIdIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getVnicPortId()
{
    return vnicPortId_;
}

void ListPublicipsRequest::setVnicPortId(const std::vector<std::string>& value)
{
    vnicPortId_ = value;
    vnicPortIdIsSet_ = true;
}

bool ListPublicipsRequest::vnicPortIdIsSet() const
{
    return vnicPortIdIsSet_;
}

void ListPublicipsRequest::unsetvnicPortId()
{
    vnicPortIdIsSet_ = false;
}

std::string ListPublicipsRequest::getVnicDeviceOwnerPrefixlike() const
{
    return vnicDeviceOwnerPrefixlike_;
}

void ListPublicipsRequest::setVnicDeviceOwnerPrefixlike(const std::string& value)
{
    vnicDeviceOwnerPrefixlike_ = value;
    vnicDeviceOwnerPrefixlikeIsSet_ = true;
}

bool ListPublicipsRequest::vnicDeviceOwnerPrefixlikeIsSet() const
{
    return vnicDeviceOwnerPrefixlikeIsSet_;
}

void ListPublicipsRequest::unsetvnicDeviceOwnerPrefixlike()
{
    vnicDeviceOwnerPrefixlikeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getVnicInstanceType()
{
    return vnicInstanceType_;
}

void ListPublicipsRequest::setVnicInstanceType(const std::vector<std::string>& value)
{
    vnicInstanceType_ = value;
    vnicInstanceTypeIsSet_ = true;
}

bool ListPublicipsRequest::vnicInstanceTypeIsSet() const
{
    return vnicInstanceTypeIsSet_;
}

void ListPublicipsRequest::unsetvnicInstanceType()
{
    vnicInstanceTypeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getVnicInstanceId()
{
    return vnicInstanceId_;
}

void ListPublicipsRequest::setVnicInstanceId(const std::vector<std::string>& value)
{
    vnicInstanceId_ = value;
    vnicInstanceIdIsSet_ = true;
}

bool ListPublicipsRequest::vnicInstanceIdIsSet() const
{
    return vnicInstanceIdIsSet_;
}

void ListPublicipsRequest::unsetvnicInstanceId()
{
    vnicInstanceIdIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getBandwidthId()
{
    return bandwidthId_;
}

void ListPublicipsRequest::setBandwidthId(const std::vector<std::string>& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool ListPublicipsRequest::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void ListPublicipsRequest::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getBandwidthName()
{
    return bandwidthName_;
}

void ListPublicipsRequest::setBandwidthName(const std::vector<std::string>& value)
{
    bandwidthName_ = value;
    bandwidthNameIsSet_ = true;
}

bool ListPublicipsRequest::bandwidthNameIsSet() const
{
    return bandwidthNameIsSet_;
}

void ListPublicipsRequest::unsetbandwidthName()
{
    bandwidthNameIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getBandwidthNameLike()
{
    return bandwidthNameLike_;
}

void ListPublicipsRequest::setBandwidthNameLike(const std::vector<std::string>& value)
{
    bandwidthNameLike_ = value;
    bandwidthNameLikeIsSet_ = true;
}

bool ListPublicipsRequest::bandwidthNameLikeIsSet() const
{
    return bandwidthNameLikeIsSet_;
}

void ListPublicipsRequest::unsetbandwidthNameLike()
{
    bandwidthNameLikeIsSet_ = false;
}

std::vector<int32_t>& ListPublicipsRequest::getBandwidthSize()
{
    return bandwidthSize_;
}

void ListPublicipsRequest::setBandwidthSize(std::vector<int32_t> value)
{
    bandwidthSize_ = value;
    bandwidthSizeIsSet_ = true;
}

bool ListPublicipsRequest::bandwidthSizeIsSet() const
{
    return bandwidthSizeIsSet_;
}

void ListPublicipsRequest::unsetbandwidthSize()
{
    bandwidthSizeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getBandwidthShareType()
{
    return bandwidthShareType_;
}

void ListPublicipsRequest::setBandwidthShareType(const std::vector<std::string>& value)
{
    bandwidthShareType_ = value;
    bandwidthShareTypeIsSet_ = true;
}

bool ListPublicipsRequest::bandwidthShareTypeIsSet() const
{
    return bandwidthShareTypeIsSet_;
}

void ListPublicipsRequest::unsetbandwidthShareType()
{
    bandwidthShareTypeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getBandwidthChargeMode()
{
    return bandwidthChargeMode_;
}

void ListPublicipsRequest::setBandwidthChargeMode(const std::vector<std::string>& value)
{
    bandwidthChargeMode_ = value;
    bandwidthChargeModeIsSet_ = true;
}

bool ListPublicipsRequest::bandwidthChargeModeIsSet() const
{
    return bandwidthChargeModeIsSet_;
}

void ListPublicipsRequest::unsetbandwidthChargeMode()
{
    bandwidthChargeModeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getBillingInfo()
{
    return billingInfo_;
}

void ListPublicipsRequest::setBillingInfo(const std::vector<std::string>& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool ListPublicipsRequest::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void ListPublicipsRequest::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string ListPublicipsRequest::getBillingMode() const
{
    return billingMode_;
}

void ListPublicipsRequest::setBillingMode(const std::string& value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool ListPublicipsRequest::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void ListPublicipsRequest::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getAssociateInstanceType()
{
    return associateInstanceType_;
}

void ListPublicipsRequest::setAssociateInstanceType(const std::vector<std::string>& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool ListPublicipsRequest::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void ListPublicipsRequest::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getAssociateInstanceId()
{
    return associateInstanceId_;
}

void ListPublicipsRequest::setAssociateInstanceId(const std::vector<std::string>& value)
{
    associateInstanceId_ = value;
    associateInstanceIdIsSet_ = true;
}

bool ListPublicipsRequest::associateInstanceIdIsSet() const
{
    return associateInstanceIdIsSet_;
}

void ListPublicipsRequest::unsetassociateInstanceId()
{
    associateInstanceIdIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getEnterpriseProjectId()
{
    return enterpriseProjectId_;
}

void ListPublicipsRequest::setEnterpriseProjectId(const std::vector<std::string>& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListPublicipsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListPublicipsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getPublicBorderGroup()
{
    return publicBorderGroup_;
}

void ListPublicipsRequest::setPublicBorderGroup(const std::vector<std::string>& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListPublicipsRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListPublicipsRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::vector<std::string>& ListPublicipsRequest::getAllowShareBandwidthTypeAny()
{
    return allowShareBandwidthTypeAny_;
}

void ListPublicipsRequest::setAllowShareBandwidthTypeAny(const std::vector<std::string>& value)
{
    allowShareBandwidthTypeAny_ = value;
    allowShareBandwidthTypeAnyIsSet_ = true;
}

bool ListPublicipsRequest::allowShareBandwidthTypeAnyIsSet() const
{
    return allowShareBandwidthTypeAnyIsSet_;
}

void ListPublicipsRequest::unsetallowShareBandwidthTypeAny()
{
    allowShareBandwidthTypeAnyIsSet_ = false;
}

}
}
}
}
}


