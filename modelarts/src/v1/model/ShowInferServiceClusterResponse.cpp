

#include "huaweicloud/modelarts/v1/model/ShowInferServiceClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferServiceClusterResponse::ShowInferServiceClusterResponse()
{
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    logicClusterId_ = "";
    logicClusterIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    resourceCategoriesIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    createAt_ = 0L;
    createAtIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    flavorsIsSet_ = false;
    poolType_ = "";
    poolTypeIsSet_ = false;
    physicalPoolId_ = "";
    physicalPoolIdIsSet_ = false;
}

ShowInferServiceClusterResponse::~ShowInferServiceClusterResponse() = default;

void ShowInferServiceClusterResponse::validate()
{
}

web::json::value ShowInferServiceClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(logicClusterIdIsSet_) {
        val[utility::conversions::to_string_t("logic_cluster_id")] = ModelBase::toJson(logicClusterId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(resourceCategoriesIsSet_) {
        val[utility::conversions::to_string_t("resource_categories")] = ModelBase::toJson(resourceCategories_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }
    if(poolTypeIsSet_) {
        val[utility::conversions::to_string_t("pool_type")] = ModelBase::toJson(poolType_);
    }
    if(physicalPoolIdIsSet_) {
        val[utility::conversions::to_string_t("physical_pool_id")] = ModelBase::toJson(physicalPoolId_);
    }

    return val;
}
bool ShowInferServiceClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logic_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logic_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogicClusterId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_categories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_categories"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCategories(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<NotebookFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pool_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("physical_pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("physical_pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhysicalPoolId(refVal);
        }
    }
    return ok;
}


std::string ShowInferServiceClusterResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowInferServiceClusterResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowInferServiceClusterResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowInferServiceClusterResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ShowInferServiceClusterResponse::getLogicClusterId() const
{
    return logicClusterId_;
}

void ShowInferServiceClusterResponse::setLogicClusterId(const std::string& value)
{
    logicClusterId_ = value;
    logicClusterIdIsSet_ = true;
}

bool ShowInferServiceClusterResponse::logicClusterIdIsSet() const
{
    return logicClusterIdIsSet_;
}

void ShowInferServiceClusterResponse::unsetlogicClusterId()
{
    logicClusterIdIsSet_ = false;
}

std::string ShowInferServiceClusterResponse::getStatus() const
{
    return status_;
}

void ShowInferServiceClusterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowInferServiceClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowInferServiceClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowInferServiceClusterResponse::getPoolId() const
{
    return poolId_;
}

void ShowInferServiceClusterResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ShowInferServiceClusterResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ShowInferServiceClusterResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ShowInferServiceClusterResponse::getType() const
{
    return type_;
}

void ShowInferServiceClusterResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowInferServiceClusterResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowInferServiceClusterResponse::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::string>& ShowInferServiceClusterResponse::getResourceCategories()
{
    return resourceCategories_;
}

void ShowInferServiceClusterResponse::setResourceCategories(const std::vector<std::string>& value)
{
    resourceCategories_ = value;
    resourceCategoriesIsSet_ = true;
}

bool ShowInferServiceClusterResponse::resourceCategoriesIsSet() const
{
    return resourceCategoriesIsSet_;
}

void ShowInferServiceClusterResponse::unsetresourceCategories()
{
    resourceCategoriesIsSet_ = false;
}

std::string ShowInferServiceClusterResponse::getProjectId() const
{
    return projectId_;
}

void ShowInferServiceClusterResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowInferServiceClusterResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowInferServiceClusterResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ShowInferServiceClusterResponse::getCreateAt() const
{
    return createAt_;
}

void ShowInferServiceClusterResponse::setCreateAt(int64_t value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ShowInferServiceClusterResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ShowInferServiceClusterResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

int64_t ShowInferServiceClusterResponse::getUpdateAt() const
{
    return updateAt_;
}

void ShowInferServiceClusterResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ShowInferServiceClusterResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ShowInferServiceClusterResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::vector<NotebookFlavor>& ShowInferServiceClusterResponse::getFlavors()
{
    return flavors_;
}

void ShowInferServiceClusterResponse::setFlavors(const std::vector<NotebookFlavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ShowInferServiceClusterResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ShowInferServiceClusterResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

std::string ShowInferServiceClusterResponse::getPoolType() const
{
    return poolType_;
}

void ShowInferServiceClusterResponse::setPoolType(const std::string& value)
{
    poolType_ = value;
    poolTypeIsSet_ = true;
}

bool ShowInferServiceClusterResponse::poolTypeIsSet() const
{
    return poolTypeIsSet_;
}

void ShowInferServiceClusterResponse::unsetpoolType()
{
    poolTypeIsSet_ = false;
}

std::string ShowInferServiceClusterResponse::getPhysicalPoolId() const
{
    return physicalPoolId_;
}

void ShowInferServiceClusterResponse::setPhysicalPoolId(const std::string& value)
{
    physicalPoolId_ = value;
    physicalPoolIdIsSet_ = true;
}

bool ShowInferServiceClusterResponse::physicalPoolIdIsSet() const
{
    return physicalPoolIdIsSet_;
}

void ShowInferServiceClusterResponse::unsetphysicalPoolId()
{
    physicalPoolIdIsSet_ = false;
}

}
}
}
}
}


