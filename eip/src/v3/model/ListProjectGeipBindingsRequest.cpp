

#include "huaweicloud/eip/v3/model/ListProjectGeipBindingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListProjectGeipBindingsRequest::ListProjectGeipBindingsRequest()
{
    fields_ = "";
    fieldsIsSet_ = false;
    geipId_ = "";
    geipIdIsSet_ = false;
    geipIpAddress_ = "";
    geipIpAddressIsSet_ = false;
    publicBorderGroup_ = "";
    publicBorderGroupIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceVpcId_ = "";
    instanceVpcIdIsSet_ = false;
    gcbandwidthId_ = "";
    gcbandwidthIdIsSet_ = false;
    gcbandwidthAdminStatus_ = "";
    gcbandwidthAdminStatusIsSet_ = false;
    gcbandwidthSize_ = 0;
    gcbandwidthSizeIsSet_ = false;
    gcbandwidthSlaLevel_ = "";
    gcbandwidthSlaLevelIsSet_ = false;
    gcbandwidthDscp_ = 0;
    gcbandwidthDscpIsSet_ = false;
    vnicPrivateIpAddress_ = "";
    vnicPrivateIpAddressIsSet_ = false;
    vnicVpcId_ = "";
    vnicVpcIdIsSet_ = false;
    vnicPortId_ = "";
    vnicPortIdIsSet_ = false;
    vnicDeviceId_ = "";
    vnicDeviceIdIsSet_ = false;
    vnicDeviceOwner_ = "";
    vnicDeviceOwnerIsSet_ = false;
    vnicDeviceOwnerPrefixlike_ = "";
    vnicDeviceOwnerPrefixlikeIsSet_ = false;
    vnicInstanceType_ = "";
    vnicInstanceTypeIsSet_ = false;
    vnicInstanceId_ = "";
    vnicInstanceIdIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectGeipBindingsRequest::~ListProjectGeipBindingsRequest() = default;

void ListProjectGeipBindingsRequest::validate()
{
}

web::json::value ListProjectGeipBindingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(geipIdIsSet_) {
        val[utility::conversions::to_string_t("geip_id")] = ModelBase::toJson(geipId_);
    }
    if(geipIpAddressIsSet_) {
        val[utility::conversions::to_string_t("geip_ip_address")] = ModelBase::toJson(geipIpAddress_);
    }
    if(publicBorderGroupIsSet_) {
        val[utility::conversions::to_string_t("public_border_group")] = ModelBase::toJson(publicBorderGroup_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceVpcIdIsSet_) {
        val[utility::conversions::to_string_t("instance_vpc_id")] = ModelBase::toJson(instanceVpcId_);
    }
    if(gcbandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("gcbandwidth.id")] = ModelBase::toJson(gcbandwidthId_);
    }
    if(gcbandwidthAdminStatusIsSet_) {
        val[utility::conversions::to_string_t("gcbandwidth.admin_status")] = ModelBase::toJson(gcbandwidthAdminStatus_);
    }
    if(gcbandwidthSizeIsSet_) {
        val[utility::conversions::to_string_t("gcbandwidth.size")] = ModelBase::toJson(gcbandwidthSize_);
    }
    if(gcbandwidthSlaLevelIsSet_) {
        val[utility::conversions::to_string_t("gcbandwidth.sla_level")] = ModelBase::toJson(gcbandwidthSlaLevel_);
    }
    if(gcbandwidthDscpIsSet_) {
        val[utility::conversions::to_string_t("gcbandwidth.dscp")] = ModelBase::toJson(gcbandwidthDscp_);
    }
    if(vnicPrivateIpAddressIsSet_) {
        val[utility::conversions::to_string_t("vnic.private_ip_address")] = ModelBase::toJson(vnicPrivateIpAddress_);
    }
    if(vnicVpcIdIsSet_) {
        val[utility::conversions::to_string_t("vnic.vpc_id")] = ModelBase::toJson(vnicVpcId_);
    }
    if(vnicPortIdIsSet_) {
        val[utility::conversions::to_string_t("vnic.port_id")] = ModelBase::toJson(vnicPortId_);
    }
    if(vnicDeviceIdIsSet_) {
        val[utility::conversions::to_string_t("vnic.device_id")] = ModelBase::toJson(vnicDeviceId_);
    }
    if(vnicDeviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("vnic.device_owner")] = ModelBase::toJson(vnicDeviceOwner_);
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
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListProjectGeipBindingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("geip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("geip_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipIpAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gcbandwidth.id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcbandwidth.id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gcbandwidth.admin_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcbandwidth.admin_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbandwidthAdminStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gcbandwidth.size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcbandwidth.size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbandwidthSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gcbandwidth.sla_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcbandwidth.sla_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbandwidthSlaLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gcbandwidth.dscp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gcbandwidth.dscp"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGcbandwidthDscp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.private_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.private_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicPrivateIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.device_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.device_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicDeviceOwner(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicInstanceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vnic.instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vnic.instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVnicInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListProjectGeipBindingsRequest::getFields() const
{
    return fields_;
}

void ListProjectGeipBindingsRequest::setFields(const std::string& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListProjectGeipBindingsRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getGeipId() const
{
    return geipId_;
}

void ListProjectGeipBindingsRequest::setGeipId(const std::string& value)
{
    geipId_ = value;
    geipIdIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::geipIdIsSet() const
{
    return geipIdIsSet_;
}

void ListProjectGeipBindingsRequest::unsetgeipId()
{
    geipIdIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getGeipIpAddress() const
{
    return geipIpAddress_;
}

void ListProjectGeipBindingsRequest::setGeipIpAddress(const std::string& value)
{
    geipIpAddress_ = value;
    geipIpAddressIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::geipIpAddressIsSet() const
{
    return geipIpAddressIsSet_;
}

void ListProjectGeipBindingsRequest::unsetgeipIpAddress()
{
    geipIpAddressIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getPublicBorderGroup() const
{
    return publicBorderGroup_;
}

void ListProjectGeipBindingsRequest::setPublicBorderGroup(const std::string& value)
{
    publicBorderGroup_ = value;
    publicBorderGroupIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::publicBorderGroupIsSet() const
{
    return publicBorderGroupIsSet_;
}

void ListProjectGeipBindingsRequest::unsetpublicBorderGroup()
{
    publicBorderGroupIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getInstanceType() const
{
    return instanceType_;
}

void ListProjectGeipBindingsRequest::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void ListProjectGeipBindingsRequest::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListProjectGeipBindingsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListProjectGeipBindingsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getInstanceVpcId() const
{
    return instanceVpcId_;
}

void ListProjectGeipBindingsRequest::setInstanceVpcId(const std::string& value)
{
    instanceVpcId_ = value;
    instanceVpcIdIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::instanceVpcIdIsSet() const
{
    return instanceVpcIdIsSet_;
}

void ListProjectGeipBindingsRequest::unsetinstanceVpcId()
{
    instanceVpcIdIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getGcbandwidthId() const
{
    return gcbandwidthId_;
}

void ListProjectGeipBindingsRequest::setGcbandwidthId(const std::string& value)
{
    gcbandwidthId_ = value;
    gcbandwidthIdIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::gcbandwidthIdIsSet() const
{
    return gcbandwidthIdIsSet_;
}

void ListProjectGeipBindingsRequest::unsetgcbandwidthId()
{
    gcbandwidthIdIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getGcbandwidthAdminStatus() const
{
    return gcbandwidthAdminStatus_;
}

void ListProjectGeipBindingsRequest::setGcbandwidthAdminStatus(const std::string& value)
{
    gcbandwidthAdminStatus_ = value;
    gcbandwidthAdminStatusIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::gcbandwidthAdminStatusIsSet() const
{
    return gcbandwidthAdminStatusIsSet_;
}

void ListProjectGeipBindingsRequest::unsetgcbandwidthAdminStatus()
{
    gcbandwidthAdminStatusIsSet_ = false;
}

int32_t ListProjectGeipBindingsRequest::getGcbandwidthSize() const
{
    return gcbandwidthSize_;
}

void ListProjectGeipBindingsRequest::setGcbandwidthSize(int32_t value)
{
    gcbandwidthSize_ = value;
    gcbandwidthSizeIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::gcbandwidthSizeIsSet() const
{
    return gcbandwidthSizeIsSet_;
}

void ListProjectGeipBindingsRequest::unsetgcbandwidthSize()
{
    gcbandwidthSizeIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getGcbandwidthSlaLevel() const
{
    return gcbandwidthSlaLevel_;
}

void ListProjectGeipBindingsRequest::setGcbandwidthSlaLevel(const std::string& value)
{
    gcbandwidthSlaLevel_ = value;
    gcbandwidthSlaLevelIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::gcbandwidthSlaLevelIsSet() const
{
    return gcbandwidthSlaLevelIsSet_;
}

void ListProjectGeipBindingsRequest::unsetgcbandwidthSlaLevel()
{
    gcbandwidthSlaLevelIsSet_ = false;
}

int32_t ListProjectGeipBindingsRequest::getGcbandwidthDscp() const
{
    return gcbandwidthDscp_;
}

void ListProjectGeipBindingsRequest::setGcbandwidthDscp(int32_t value)
{
    gcbandwidthDscp_ = value;
    gcbandwidthDscpIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::gcbandwidthDscpIsSet() const
{
    return gcbandwidthDscpIsSet_;
}

void ListProjectGeipBindingsRequest::unsetgcbandwidthDscp()
{
    gcbandwidthDscpIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getVnicPrivateIpAddress() const
{
    return vnicPrivateIpAddress_;
}

void ListProjectGeipBindingsRequest::setVnicPrivateIpAddress(const std::string& value)
{
    vnicPrivateIpAddress_ = value;
    vnicPrivateIpAddressIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::vnicPrivateIpAddressIsSet() const
{
    return vnicPrivateIpAddressIsSet_;
}

void ListProjectGeipBindingsRequest::unsetvnicPrivateIpAddress()
{
    vnicPrivateIpAddressIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getVnicVpcId() const
{
    return vnicVpcId_;
}

void ListProjectGeipBindingsRequest::setVnicVpcId(const std::string& value)
{
    vnicVpcId_ = value;
    vnicVpcIdIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::vnicVpcIdIsSet() const
{
    return vnicVpcIdIsSet_;
}

void ListProjectGeipBindingsRequest::unsetvnicVpcId()
{
    vnicVpcIdIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getVnicPortId() const
{
    return vnicPortId_;
}

void ListProjectGeipBindingsRequest::setVnicPortId(const std::string& value)
{
    vnicPortId_ = value;
    vnicPortIdIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::vnicPortIdIsSet() const
{
    return vnicPortIdIsSet_;
}

void ListProjectGeipBindingsRequest::unsetvnicPortId()
{
    vnicPortIdIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getVnicDeviceId() const
{
    return vnicDeviceId_;
}

void ListProjectGeipBindingsRequest::setVnicDeviceId(const std::string& value)
{
    vnicDeviceId_ = value;
    vnicDeviceIdIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::vnicDeviceIdIsSet() const
{
    return vnicDeviceIdIsSet_;
}

void ListProjectGeipBindingsRequest::unsetvnicDeviceId()
{
    vnicDeviceIdIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getVnicDeviceOwner() const
{
    return vnicDeviceOwner_;
}

void ListProjectGeipBindingsRequest::setVnicDeviceOwner(const std::string& value)
{
    vnicDeviceOwner_ = value;
    vnicDeviceOwnerIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::vnicDeviceOwnerIsSet() const
{
    return vnicDeviceOwnerIsSet_;
}

void ListProjectGeipBindingsRequest::unsetvnicDeviceOwner()
{
    vnicDeviceOwnerIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getVnicDeviceOwnerPrefixlike() const
{
    return vnicDeviceOwnerPrefixlike_;
}

void ListProjectGeipBindingsRequest::setVnicDeviceOwnerPrefixlike(const std::string& value)
{
    vnicDeviceOwnerPrefixlike_ = value;
    vnicDeviceOwnerPrefixlikeIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::vnicDeviceOwnerPrefixlikeIsSet() const
{
    return vnicDeviceOwnerPrefixlikeIsSet_;
}

void ListProjectGeipBindingsRequest::unsetvnicDeviceOwnerPrefixlike()
{
    vnicDeviceOwnerPrefixlikeIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getVnicInstanceType() const
{
    return vnicInstanceType_;
}

void ListProjectGeipBindingsRequest::setVnicInstanceType(const std::string& value)
{
    vnicInstanceType_ = value;
    vnicInstanceTypeIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::vnicInstanceTypeIsSet() const
{
    return vnicInstanceTypeIsSet_;
}

void ListProjectGeipBindingsRequest::unsetvnicInstanceType()
{
    vnicInstanceTypeIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getVnicInstanceId() const
{
    return vnicInstanceId_;
}

void ListProjectGeipBindingsRequest::setVnicInstanceId(const std::string& value)
{
    vnicInstanceId_ = value;
    vnicInstanceIdIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::vnicInstanceIdIsSet() const
{
    return vnicInstanceIdIsSet_;
}

void ListProjectGeipBindingsRequest::unsetvnicInstanceId()
{
    vnicInstanceIdIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getSortKey() const
{
    return sortKey_;
}

void ListProjectGeipBindingsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListProjectGeipBindingsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListProjectGeipBindingsRequest::getSortDir() const
{
    return sortDir_;
}

void ListProjectGeipBindingsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListProjectGeipBindingsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

int32_t ListProjectGeipBindingsRequest::getLimit() const
{
    return limit_;
}

void ListProjectGeipBindingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectGeipBindingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectGeipBindingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


