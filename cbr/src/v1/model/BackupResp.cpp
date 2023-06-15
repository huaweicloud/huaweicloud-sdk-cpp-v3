

#include "huaweicloud/cbr/v1/model/BackupResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BackupResp::BackupResp()
{
    checkpointId_ = "";
    checkpointIdIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    expiredAt_ = utility::datetime();
    expiredAtIsSet_ = false;
    extendInfoIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    imageType_ = "";
    imageTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    protectedAtIsSet_ = false;
    resourceAz_ = "";
    resourceAzIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceSize_ = 0;
    resourceSizeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    vaultId_ = "";
    vaultIdIsSet_ = false;
    replicationRecordsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    providerId_ = "";
    providerIdIsSet_ = false;
    childrenIsSet_ = false;
}

BackupResp::~BackupResp() = default;

void BackupResp::validate()
{
}

web::json::value BackupResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(checkpointIdIsSet_) {
        val[utility::conversions::to_string_t("checkpoint_id")] = ModelBase::toJson(checkpointId_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(expiredAtIsSet_) {
        val[utility::conversions::to_string_t("expired_at")] = ModelBase::toJson(expiredAt_);
    }
    if(extendInfoIsSet_) {
        val[utility::conversions::to_string_t("extend_info")] = ModelBase::toJson(extendInfo_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(imageTypeIsSet_) {
        val[utility::conversions::to_string_t("image_type")] = ModelBase::toJson(imageType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(protectedAtIsSet_) {
        val[utility::conversions::to_string_t("protected_at")] = ModelBase::toJson(protectedAt_);
    }
    if(resourceAzIsSet_) {
        val[utility::conversions::to_string_t("resource_az")] = ModelBase::toJson(resourceAz_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceSizeIsSet_) {
        val[utility::conversions::to_string_t("resource_size")] = ModelBase::toJson(resourceSize_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(vaultIdIsSet_) {
        val[utility::conversions::to_string_t("vault_id")] = ModelBase::toJson(vaultId_);
    }
    if(replicationRecordsIsSet_) {
        val[utility::conversions::to_string_t("replication_records")] = ModelBase::toJson(replicationRecords_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(providerIdIsSet_) {
        val[utility::conversions::to_string_t("provider_id")] = ModelBase::toJson(providerId_);
    }
    if(childrenIsSet_) {
        val[utility::conversions::to_string_t("children")] = ModelBase::toJson(children_);
    }

    return val;
}

bool BackupResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("checkpoint_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkpoint_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckpointId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_info"));
        if(!fieldValue.is_null())
        {
            BackupExtendInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("image_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("protected_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceAz(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVaultId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_records"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplicationRecordGet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationRecords(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("provider_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProviderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("children"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("children"));
        if(!fieldValue.is_null())
        {
            std::vector<BackupResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChildren(refVal);
        }
    }
    return ok;
}


std::string BackupResp::getCheckpointId() const
{
    return checkpointId_;
}

void BackupResp::setCheckpointId(const std::string& value)
{
    checkpointId_ = value;
    checkpointIdIsSet_ = true;
}

bool BackupResp::checkpointIdIsSet() const
{
    return checkpointIdIsSet_;
}

void BackupResp::unsetcheckpointId()
{
    checkpointIdIsSet_ = false;
}

utility::datetime BackupResp::getCreatedAt() const
{
    return createdAt_;
}

void BackupResp::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool BackupResp::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void BackupResp::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string BackupResp::getDescription() const
{
    return description_;
}

void BackupResp::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BackupResp::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BackupResp::unsetdescription()
{
    descriptionIsSet_ = false;
}

utility::datetime BackupResp::getExpiredAt() const
{
    return expiredAt_;
}

void BackupResp::setExpiredAt(const utility::datetime& value)
{
    expiredAt_ = value;
    expiredAtIsSet_ = true;
}

bool BackupResp::expiredAtIsSet() const
{
    return expiredAtIsSet_;
}

void BackupResp::unsetexpiredAt()
{
    expiredAtIsSet_ = false;
}

BackupExtendInfo BackupResp::getExtendInfo() const
{
    return extendInfo_;
}

void BackupResp::setExtendInfo(const BackupExtendInfo& value)
{
    extendInfo_ = value;
    extendInfoIsSet_ = true;
}

bool BackupResp::extendInfoIsSet() const
{
    return extendInfoIsSet_;
}

void BackupResp::unsetextendInfo()
{
    extendInfoIsSet_ = false;
}

std::string BackupResp::getId() const
{
    return id_;
}

void BackupResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BackupResp::idIsSet() const
{
    return idIsSet_;
}

void BackupResp::unsetid()
{
    idIsSet_ = false;
}

std::string BackupResp::getImageType() const
{
    return imageType_;
}

void BackupResp::setImageType(const std::string& value)
{
    imageType_ = value;
    imageTypeIsSet_ = true;
}

bool BackupResp::imageTypeIsSet() const
{
    return imageTypeIsSet_;
}

void BackupResp::unsetimageType()
{
    imageTypeIsSet_ = false;
}

std::string BackupResp::getName() const
{
    return name_;
}

void BackupResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BackupResp::nameIsSet() const
{
    return nameIsSet_;
}

void BackupResp::unsetname()
{
    nameIsSet_ = false;
}

std::string BackupResp::getParentId() const
{
    return parentId_;
}

void BackupResp::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool BackupResp::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void BackupResp::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string BackupResp::getProjectId() const
{
    return projectId_;
}

void BackupResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BackupResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BackupResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

utility::datetime BackupResp::getProtectedAt() const
{
    return protectedAt_;
}

void BackupResp::setProtectedAt(const utility::datetime& value)
{
    protectedAt_ = value;
    protectedAtIsSet_ = true;
}

bool BackupResp::protectedAtIsSet() const
{
    return protectedAtIsSet_;
}

void BackupResp::unsetprotectedAt()
{
    protectedAtIsSet_ = false;
}

std::string BackupResp::getResourceAz() const
{
    return resourceAz_;
}

void BackupResp::setResourceAz(const std::string& value)
{
    resourceAz_ = value;
    resourceAzIsSet_ = true;
}

bool BackupResp::resourceAzIsSet() const
{
    return resourceAzIsSet_;
}

void BackupResp::unsetresourceAz()
{
    resourceAzIsSet_ = false;
}

std::string BackupResp::getResourceId() const
{
    return resourceId_;
}

void BackupResp::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool BackupResp::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void BackupResp::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string BackupResp::getResourceName() const
{
    return resourceName_;
}

void BackupResp::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool BackupResp::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void BackupResp::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

int32_t BackupResp::getResourceSize() const
{
    return resourceSize_;
}

void BackupResp::setResourceSize(int32_t value)
{
    resourceSize_ = value;
    resourceSizeIsSet_ = true;
}

bool BackupResp::resourceSizeIsSet() const
{
    return resourceSizeIsSet_;
}

void BackupResp::unsetresourceSize()
{
    resourceSizeIsSet_ = false;
}

std::string BackupResp::getResourceType() const
{
    return resourceType_;
}

void BackupResp::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool BackupResp::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void BackupResp::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string BackupResp::getStatus() const
{
    return status_;
}

void BackupResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BackupResp::statusIsSet() const
{
    return statusIsSet_;
}

void BackupResp::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime BackupResp::getUpdatedAt() const
{
    return updatedAt_;
}

void BackupResp::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool BackupResp::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void BackupResp::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string BackupResp::getVaultId() const
{
    return vaultId_;
}

void BackupResp::setVaultId(const std::string& value)
{
    vaultId_ = value;
    vaultIdIsSet_ = true;
}

bool BackupResp::vaultIdIsSet() const
{
    return vaultIdIsSet_;
}

void BackupResp::unsetvaultId()
{
    vaultIdIsSet_ = false;
}

std::vector<ReplicationRecordGet>& BackupResp::getReplicationRecords()
{
    return replicationRecords_;
}

void BackupResp::setReplicationRecords(const std::vector<ReplicationRecordGet>& value)
{
    replicationRecords_ = value;
    replicationRecordsIsSet_ = true;
}

bool BackupResp::replicationRecordsIsSet() const
{
    return replicationRecordsIsSet_;
}

void BackupResp::unsetreplicationRecords()
{
    replicationRecordsIsSet_ = false;
}

std::string BackupResp::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BackupResp::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BackupResp::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BackupResp::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BackupResp::getProviderId() const
{
    return providerId_;
}

void BackupResp::setProviderId(const std::string& value)
{
    providerId_ = value;
    providerIdIsSet_ = true;
}

bool BackupResp::providerIdIsSet() const
{
    return providerIdIsSet_;
}

void BackupResp::unsetproviderId()
{
    providerIdIsSet_ = false;
}

std::vector<BackupResp>& BackupResp::getChildren()
{
    return children_;
}

void BackupResp::setChildren(const std::vector<BackupResp>& value)
{
    children_ = value;
    childrenIsSet_ = true;
}

bool BackupResp::childrenIsSet() const
{
    return childrenIsSet_;
}

void BackupResp::unsetchildren()
{
    childrenIsSet_ = false;
}

}
}
}
}
}


