

#include "huaweicloud/cpcs/v1/model/AssociationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




AssociationInfo::AssociationInfo()
{
    id_ = "";
    idIsSet_ = false;
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    vpcName_ = "";
    vpcNameIsSet_ = false;
    subnetName_ = "";
    subnetNameIsSet_ = false;
    clusterServerType_ = "";
    clusterServerTypeIsSet_ = false;
    vpcepAddress_ = "";
    vpcepAddressIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
}

AssociationInfo::~AssociationInfo() = default;

void AssociationInfo::validate()
{
}

web::json::value AssociationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(vpcNameIsSet_) {
        val[utility::conversions::to_string_t("vpc_name")] = ModelBase::toJson(vpcName_);
    }
    if(subnetNameIsSet_) {
        val[utility::conversions::to_string_t("subnet_name")] = ModelBase::toJson(subnetName_);
    }
    if(clusterServerTypeIsSet_) {
        val[utility::conversions::to_string_t("cluster_server_type")] = ModelBase::toJson(clusterServerType_);
    }
    if(vpcepAddressIsSet_) {
        val[utility::conversions::to_string_t("vpcep_address")] = ModelBase::toJson(vpcepAddress_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }

    return val;
}
bool AssociationInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_server_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_server_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterServerType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpcep_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpcep_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcepAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
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


std::string AssociationInfo::getId() const
{
    return id_;
}

void AssociationInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AssociationInfo::idIsSet() const
{
    return idIsSet_;
}

void AssociationInfo::unsetid()
{
    idIsSet_ = false;
}

std::string AssociationInfo::getClusterId() const
{
    return clusterId_;
}

void AssociationInfo::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AssociationInfo::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AssociationInfo::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string AssociationInfo::getClusterName() const
{
    return clusterName_;
}

void AssociationInfo::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool AssociationInfo::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void AssociationInfo::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string AssociationInfo::getAppId() const
{
    return appId_;
}

void AssociationInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool AssociationInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void AssociationInfo::unsetappId()
{
    appIdIsSet_ = false;
}

std::string AssociationInfo::getAppName() const
{
    return appName_;
}

void AssociationInfo::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AssociationInfo::appNameIsSet() const
{
    return appNameIsSet_;
}

void AssociationInfo::unsetappName()
{
    appNameIsSet_ = false;
}

std::string AssociationInfo::getVpcName() const
{
    return vpcName_;
}

void AssociationInfo::setVpcName(const std::string& value)
{
    vpcName_ = value;
    vpcNameIsSet_ = true;
}

bool AssociationInfo::vpcNameIsSet() const
{
    return vpcNameIsSet_;
}

void AssociationInfo::unsetvpcName()
{
    vpcNameIsSet_ = false;
}

std::string AssociationInfo::getSubnetName() const
{
    return subnetName_;
}

void AssociationInfo::setSubnetName(const std::string& value)
{
    subnetName_ = value;
    subnetNameIsSet_ = true;
}

bool AssociationInfo::subnetNameIsSet() const
{
    return subnetNameIsSet_;
}

void AssociationInfo::unsetsubnetName()
{
    subnetNameIsSet_ = false;
}

std::string AssociationInfo::getClusterServerType() const
{
    return clusterServerType_;
}

void AssociationInfo::setClusterServerType(const std::string& value)
{
    clusterServerType_ = value;
    clusterServerTypeIsSet_ = true;
}

bool AssociationInfo::clusterServerTypeIsSet() const
{
    return clusterServerTypeIsSet_;
}

void AssociationInfo::unsetclusterServerType()
{
    clusterServerTypeIsSet_ = false;
}

std::string AssociationInfo::getVpcepAddress() const
{
    return vpcepAddress_;
}

void AssociationInfo::setVpcepAddress(const std::string& value)
{
    vpcepAddress_ = value;
    vpcepAddressIsSet_ = true;
}

bool AssociationInfo::vpcepAddressIsSet() const
{
    return vpcepAddressIsSet_;
}

void AssociationInfo::unsetvpcepAddress()
{
    vpcepAddressIsSet_ = false;
}

int64_t AssociationInfo::getUpdateTime() const
{
    return updateTime_;
}

void AssociationInfo::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool AssociationInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void AssociationInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int64_t AssociationInfo::getCreateTime() const
{
    return createTime_;
}

void AssociationInfo::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AssociationInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AssociationInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

}
}
}
}
}


