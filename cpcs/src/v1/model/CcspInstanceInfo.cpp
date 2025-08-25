

#include "huaweicloud/cpcs/v1/model/CcspInstanceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




CcspInstanceInfo::CcspInstanceInfo()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    isNormal_ = false;
    isNormalIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    imageName_ = "";
    imageNameIsSet_ = false;
    specification_ = "";
    specificationIsSet_ = false;
    az_ = "";
    azIsSet_ = false;
    expiredTime_ = 0L;
    expiredTimeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

CcspInstanceInfo::~CcspInstanceInfo() = default;

void CcspInstanceInfo::validate()
{
}

web::json::value CcspInstanceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(isNormalIsSet_) {
        val[utility::conversions::to_string_t("is_normal")] = ModelBase::toJson(isNormal_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(imageNameIsSet_) {
        val[utility::conversions::to_string_t("image_name")] = ModelBase::toJson(imageName_);
    }
    if(specificationIsSet_) {
        val[utility::conversions::to_string_t("specification")] = ModelBase::toJson(specification_);
    }
    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }
    if(expiredTimeIsSet_) {
        val[utility::conversions::to_string_t("expired_time")] = ModelBase::toJson(expiredTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool CcspInstanceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_normal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_normal"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNormal(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("specification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specification"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecification(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    return ok;
}


std::string CcspInstanceInfo::getInstanceId() const
{
    return instanceId_;
}

void CcspInstanceInfo::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CcspInstanceInfo::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CcspInstanceInfo::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string CcspInstanceInfo::getResourceId() const
{
    return resourceId_;
}

void CcspInstanceInfo::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CcspInstanceInfo::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CcspInstanceInfo::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CcspInstanceInfo::getInstanceName() const
{
    return instanceName_;
}

void CcspInstanceInfo::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool CcspInstanceInfo::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void CcspInstanceInfo::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::string CcspInstanceInfo::getServiceType() const
{
    return serviceType_;
}

void CcspInstanceInfo::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool CcspInstanceInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void CcspInstanceInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::string CcspInstanceInfo::getClusterId() const
{
    return clusterId_;
}

void CcspInstanceInfo::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool CcspInstanceInfo::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void CcspInstanceInfo::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

bool CcspInstanceInfo::isIsNormal() const
{
    return isNormal_;
}

void CcspInstanceInfo::setIsNormal(bool value)
{
    isNormal_ = value;
    isNormalIsSet_ = true;
}

bool CcspInstanceInfo::isNormalIsSet() const
{
    return isNormalIsSet_;
}

void CcspInstanceInfo::unsetisNormal()
{
    isNormalIsSet_ = false;
}

std::string CcspInstanceInfo::getStatus() const
{
    return status_;
}

void CcspInstanceInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CcspInstanceInfo::statusIsSet() const
{
    return statusIsSet_;
}

void CcspInstanceInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CcspInstanceInfo::getImageName() const
{
    return imageName_;
}

void CcspInstanceInfo::setImageName(const std::string& value)
{
    imageName_ = value;
    imageNameIsSet_ = true;
}

bool CcspInstanceInfo::imageNameIsSet() const
{
    return imageNameIsSet_;
}

void CcspInstanceInfo::unsetimageName()
{
    imageNameIsSet_ = false;
}

std::string CcspInstanceInfo::getSpecification() const
{
    return specification_;
}

void CcspInstanceInfo::setSpecification(const std::string& value)
{
    specification_ = value;
    specificationIsSet_ = true;
}

bool CcspInstanceInfo::specificationIsSet() const
{
    return specificationIsSet_;
}

void CcspInstanceInfo::unsetspecification()
{
    specificationIsSet_ = false;
}

std::string CcspInstanceInfo::getAz() const
{
    return az_;
}

void CcspInstanceInfo::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool CcspInstanceInfo::azIsSet() const
{
    return azIsSet_;
}

void CcspInstanceInfo::unsetaz()
{
    azIsSet_ = false;
}

int64_t CcspInstanceInfo::getExpiredTime() const
{
    return expiredTime_;
}

void CcspInstanceInfo::setExpiredTime(int64_t value)
{
    expiredTime_ = value;
    expiredTimeIsSet_ = true;
}

bool CcspInstanceInfo::expiredTimeIsSet() const
{
    return expiredTimeIsSet_;
}

void CcspInstanceInfo::unsetexpiredTime()
{
    expiredTimeIsSet_ = false;
}

int64_t CcspInstanceInfo::getCreateTime() const
{
    return createTime_;
}

void CcspInstanceInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CcspInstanceInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CcspInstanceInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


