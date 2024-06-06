

#include "huaweicloud/gaussdb/v3/model/ShowInstanceEipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceEipResponse::ShowInstanceEipResponse()
{
    canEnablePublicAccess_ = false;
    canEnablePublicAccessIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    publicIpAddress_ = "";
    publicIpAddressIsSet_ = false;
    privateIpAddress_ = "";
    privateIpAddressIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    bandwidthId_ = "";
    bandwidthIdIsSet_ = false;
    bandwidthName_ = "";
    bandwidthNameIsSet_ = false;
    bandwidthSize_ = "";
    bandwidthSizeIsSet_ = false;
    bandwidthShareType_ = "";
    bandwidthShareTypeIsSet_ = false;
    profileIsSet_ = false;
}

ShowInstanceEipResponse::~ShowInstanceEipResponse() = default;

void ShowInstanceEipResponse::validate()
{
}

web::json::value ShowInstanceEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canEnablePublicAccessIsSet_) {
        val[utility::conversions::to_string_t("can_enable_public_access")] = ModelBase::toJson(canEnablePublicAccess_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(publicIpAddressIsSet_) {
        val[utility::conversions::to_string_t("public_ip_address")] = ModelBase::toJson(publicIpAddress_);
    }
    if(privateIpAddressIsSet_) {
        val[utility::conversions::to_string_t("private_ip_address")] = ModelBase::toJson(privateIpAddress_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(bandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_id")] = ModelBase::toJson(bandwidthId_);
    }
    if(bandwidthNameIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_name")] = ModelBase::toJson(bandwidthName_);
    }
    if(bandwidthSizeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_size")] = ModelBase::toJson(bandwidthSize_);
    }
    if(bandwidthShareTypeIsSet_) {
        val[utility::conversions::to_string_t("bandwidth_share_type")] = ModelBase::toJson(bandwidthShareType_);
    }
    if(profileIsSet_) {
        val[utility::conversions::to_string_t("profile")] = ModelBase::toJson(profile_);
    }

    return val;
}
bool ShowInstanceEipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_enable_public_access"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_enable_public_access"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanEnablePublicAccess(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("public_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("bandwidth_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidthSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfile(refVal);
        }
    }
    return ok;
}


bool ShowInstanceEipResponse::isCanEnablePublicAccess() const
{
    return canEnablePublicAccess_;
}

void ShowInstanceEipResponse::setCanEnablePublicAccess(bool value)
{
    canEnablePublicAccess_ = value;
    canEnablePublicAccessIsSet_ = true;
}

bool ShowInstanceEipResponse::canEnablePublicAccessIsSet() const
{
    return canEnablePublicAccessIsSet_;
}

void ShowInstanceEipResponse::unsetcanEnablePublicAccess()
{
    canEnablePublicAccessIsSet_ = false;
}

std::string ShowInstanceEipResponse::getId() const
{
    return id_;
}

void ShowInstanceEipResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowInstanceEipResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowInstanceEipResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowInstanceEipResponse::getType() const
{
    return type_;
}

void ShowInstanceEipResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowInstanceEipResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowInstanceEipResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowInstanceEipResponse::getPortId() const
{
    return portId_;
}

void ShowInstanceEipResponse::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool ShowInstanceEipResponse::portIdIsSet() const
{
    return portIdIsSet_;
}

void ShowInstanceEipResponse::unsetportId()
{
    portIdIsSet_ = false;
}

std::string ShowInstanceEipResponse::getPublicIpAddress() const
{
    return publicIpAddress_;
}

void ShowInstanceEipResponse::setPublicIpAddress(const std::string& value)
{
    publicIpAddress_ = value;
    publicIpAddressIsSet_ = true;
}

bool ShowInstanceEipResponse::publicIpAddressIsSet() const
{
    return publicIpAddressIsSet_;
}

void ShowInstanceEipResponse::unsetpublicIpAddress()
{
    publicIpAddressIsSet_ = false;
}

std::string ShowInstanceEipResponse::getPrivateIpAddress() const
{
    return privateIpAddress_;
}

void ShowInstanceEipResponse::setPrivateIpAddress(const std::string& value)
{
    privateIpAddress_ = value;
    privateIpAddressIsSet_ = true;
}

bool ShowInstanceEipResponse::privateIpAddressIsSet() const
{
    return privateIpAddressIsSet_;
}

void ShowInstanceEipResponse::unsetprivateIpAddress()
{
    privateIpAddressIsSet_ = false;
}

std::string ShowInstanceEipResponse::getStatus() const
{
    return status_;
}

void ShowInstanceEipResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowInstanceEipResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowInstanceEipResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowInstanceEipResponse::getTenantId() const
{
    return tenantId_;
}

void ShowInstanceEipResponse::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ShowInstanceEipResponse::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ShowInstanceEipResponse::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ShowInstanceEipResponse::getCreateTime() const
{
    return createTime_;
}

void ShowInstanceEipResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowInstanceEipResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowInstanceEipResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowInstanceEipResponse::getBandwidthId() const
{
    return bandwidthId_;
}

void ShowInstanceEipResponse::setBandwidthId(const std::string& value)
{
    bandwidthId_ = value;
    bandwidthIdIsSet_ = true;
}

bool ShowInstanceEipResponse::bandwidthIdIsSet() const
{
    return bandwidthIdIsSet_;
}

void ShowInstanceEipResponse::unsetbandwidthId()
{
    bandwidthIdIsSet_ = false;
}

std::string ShowInstanceEipResponse::getBandwidthName() const
{
    return bandwidthName_;
}

void ShowInstanceEipResponse::setBandwidthName(const std::string& value)
{
    bandwidthName_ = value;
    bandwidthNameIsSet_ = true;
}

bool ShowInstanceEipResponse::bandwidthNameIsSet() const
{
    return bandwidthNameIsSet_;
}

void ShowInstanceEipResponse::unsetbandwidthName()
{
    bandwidthNameIsSet_ = false;
}

std::string ShowInstanceEipResponse::getBandwidthSize() const
{
    return bandwidthSize_;
}

void ShowInstanceEipResponse::setBandwidthSize(const std::string& value)
{
    bandwidthSize_ = value;
    bandwidthSizeIsSet_ = true;
}

bool ShowInstanceEipResponse::bandwidthSizeIsSet() const
{
    return bandwidthSizeIsSet_;
}

void ShowInstanceEipResponse::unsetbandwidthSize()
{
    bandwidthSizeIsSet_ = false;
}

std::string ShowInstanceEipResponse::getBandwidthShareType() const
{
    return bandwidthShareType_;
}

void ShowInstanceEipResponse::setBandwidthShareType(const std::string& value)
{
    bandwidthShareType_ = value;
    bandwidthShareTypeIsSet_ = true;
}

bool ShowInstanceEipResponse::bandwidthShareTypeIsSet() const
{
    return bandwidthShareTypeIsSet_;
}

void ShowInstanceEipResponse::unsetbandwidthShareType()
{
    bandwidthShareTypeIsSet_ = false;
}

Object ShowInstanceEipResponse::getProfile() const
{
    return profile_;
}

void ShowInstanceEipResponse::setProfile(const Object& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool ShowInstanceEipResponse::profileIsSet() const
{
    return profileIsSet_;
}

void ShowInstanceEipResponse::unsetprofile()
{
    profileIsSet_ = false;
}

}
}
}
}
}


