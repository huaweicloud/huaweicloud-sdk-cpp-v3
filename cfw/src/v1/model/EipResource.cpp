

#include "huaweicloud/cfw/v1/model/EipResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




EipResource::EipResource()
{
    id_ = "";
    idIsSet_ = false;
    publicIp_ = "";
    publicIpIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    publicIpv6_ = "";
    publicIpv6IsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    deviceId_ = "";
    deviceIdIsSet_ = false;
    deviceName_ = "";
    deviceNameIsSet_ = false;
    deviceOwner_ = "";
    deviceOwnerIsSet_ = false;
    associateInstanceType_ = "";
    associateInstanceTypeIsSet_ = false;
    fwInstanceName_ = "";
    fwInstanceNameIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    fwEnterpriseProjectId_ = "";
    fwEnterpriseProjectIdIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    fwDomainId_ = "";
    fwDomainIdIsSet_ = false;
    bypassStatus_ = 0;
    bypassStatusIsSet_ = false;
}

EipResource::~EipResource() = default;

void EipResource::validate()
{
}

web::json::value EipResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(publicIpIsSet_) {
        val[utility::conversions::to_string_t("public_ip")] = ModelBase::toJson(publicIp_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(publicIpv6IsSet_) {
        val[utility::conversions::to_string_t("public_ipv6")] = ModelBase::toJson(publicIpv6_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(deviceNameIsSet_) {
        val[utility::conversions::to_string_t("device_name")] = ModelBase::toJson(deviceName_);
    }
    if(deviceOwnerIsSet_) {
        val[utility::conversions::to_string_t("device_owner")] = ModelBase::toJson(deviceOwner_);
    }
    if(associateInstanceTypeIsSet_) {
        val[utility::conversions::to_string_t("associate_instance_type")] = ModelBase::toJson(associateInstanceType_);
    }
    if(fwInstanceNameIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_name")] = ModelBase::toJson(fwInstanceName_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(fwEnterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("fw_enterprise_project_id")] = ModelBase::toJson(fwEnterpriseProjectId_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(fwDomainIdIsSet_) {
        val[utility::conversions::to_string_t("fw_domain_id")] = ModelBase::toJson(fwDomainId_);
    }
    if(bypassStatusIsSet_) {
        val[utility::conversions::to_string_t("bypass_status")] = ModelBase::toJson(bypassStatus_);
    }

    return val;
}
bool EipResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("public_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("public_ipv6"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_ipv6"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIpv6(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("device_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceOwner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fw_instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bypass_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bypass_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBypassStatus(refVal);
        }
    }
    return ok;
}


std::string EipResource::getId() const
{
    return id_;
}

void EipResource::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EipResource::idIsSet() const
{
    return idIsSet_;
}

void EipResource::unsetid()
{
    idIsSet_ = false;
}

std::string EipResource::getPublicIp() const
{
    return publicIp_;
}

void EipResource::setPublicIp(const std::string& value)
{
    publicIp_ = value;
    publicIpIsSet_ = true;
}

bool EipResource::publicIpIsSet() const
{
    return publicIpIsSet_;
}

void EipResource::unsetpublicIp()
{
    publicIpIsSet_ = false;
}

int32_t EipResource::getStatus() const
{
    return status_;
}

void EipResource::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool EipResource::statusIsSet() const
{
    return statusIsSet_;
}

void EipResource::unsetstatus()
{
    statusIsSet_ = false;
}

std::string EipResource::getPublicIpv6() const
{
    return publicIpv6_;
}

void EipResource::setPublicIpv6(const std::string& value)
{
    publicIpv6_ = value;
    publicIpv6IsSet_ = true;
}

bool EipResource::publicIpv6IsSet() const
{
    return publicIpv6IsSet_;
}

void EipResource::unsetpublicIpv6()
{
    publicIpv6IsSet_ = false;
}

std::string EipResource::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void EipResource::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool EipResource::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void EipResource::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string EipResource::getDeviceId() const
{
    return deviceId_;
}

void EipResource::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool EipResource::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void EipResource::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string EipResource::getDeviceName() const
{
    return deviceName_;
}

void EipResource::setDeviceName(const std::string& value)
{
    deviceName_ = value;
    deviceNameIsSet_ = true;
}

bool EipResource::deviceNameIsSet() const
{
    return deviceNameIsSet_;
}

void EipResource::unsetdeviceName()
{
    deviceNameIsSet_ = false;
}

std::string EipResource::getDeviceOwner() const
{
    return deviceOwner_;
}

void EipResource::setDeviceOwner(const std::string& value)
{
    deviceOwner_ = value;
    deviceOwnerIsSet_ = true;
}

bool EipResource::deviceOwnerIsSet() const
{
    return deviceOwnerIsSet_;
}

void EipResource::unsetdeviceOwner()
{
    deviceOwnerIsSet_ = false;
}

std::string EipResource::getAssociateInstanceType() const
{
    return associateInstanceType_;
}

void EipResource::setAssociateInstanceType(const std::string& value)
{
    associateInstanceType_ = value;
    associateInstanceTypeIsSet_ = true;
}

bool EipResource::associateInstanceTypeIsSet() const
{
    return associateInstanceTypeIsSet_;
}

void EipResource::unsetassociateInstanceType()
{
    associateInstanceTypeIsSet_ = false;
}

std::string EipResource::getFwInstanceName() const
{
    return fwInstanceName_;
}

void EipResource::setFwInstanceName(const std::string& value)
{
    fwInstanceName_ = value;
    fwInstanceNameIsSet_ = true;
}

bool EipResource::fwInstanceNameIsSet() const
{
    return fwInstanceNameIsSet_;
}

void EipResource::unsetfwInstanceName()
{
    fwInstanceNameIsSet_ = false;
}

std::string EipResource::getFwInstanceId() const
{
    return fwInstanceId_;
}

void EipResource::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool EipResource::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void EipResource::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string EipResource::getFwEnterpriseProjectId() const
{
    return fwEnterpriseProjectId_;
}

void EipResource::setFwEnterpriseProjectId(const std::string& value)
{
    fwEnterpriseProjectId_ = value;
    fwEnterpriseProjectIdIsSet_ = true;
}

bool EipResource::fwEnterpriseProjectIdIsSet() const
{
    return fwEnterpriseProjectIdIsSet_;
}

void EipResource::unsetfwEnterpriseProjectId()
{
    fwEnterpriseProjectIdIsSet_ = false;
}

std::string EipResource::getObjectId() const
{
    return objectId_;
}

void EipResource::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool EipResource::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void EipResource::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string EipResource::getTags() const
{
    return tags_;
}

void EipResource::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool EipResource::tagsIsSet() const
{
    return tagsIsSet_;
}

void EipResource::unsettags()
{
    tagsIsSet_ = false;
}

std::string EipResource::getDomainId() const
{
    return domainId_;
}

void EipResource::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool EipResource::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void EipResource::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string EipResource::getFwDomainId() const
{
    return fwDomainId_;
}

void EipResource::setFwDomainId(const std::string& value)
{
    fwDomainId_ = value;
    fwDomainIdIsSet_ = true;
}

bool EipResource::fwDomainIdIsSet() const
{
    return fwDomainIdIsSet_;
}

void EipResource::unsetfwDomainId()
{
    fwDomainIdIsSet_ = false;
}

int32_t EipResource::getBypassStatus() const
{
    return bypassStatus_;
}

void EipResource::setBypassStatus(int32_t value)
{
    bypassStatus_ = value;
    bypassStatusIsSet_ = true;
}

bool EipResource::bypassStatusIsSet() const
{
    return bypassStatusIsSet_;
}

void EipResource::unsetbypassStatus()
{
    bypassStatusIsSet_ = false;
}

}
}
}
}
}


