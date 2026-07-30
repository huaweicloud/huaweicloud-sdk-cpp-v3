

#include "huaweicloud/modelarts/v1/model/ClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ClusterResponse::ClusterResponse()
{
    logicClusterId_ = "";
    logicClusterIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    resourceCategories_ = "";
    resourceCategoriesIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    updateAt_ = "";
    updateAtIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    flavorsIsSet_ = false;
    isAllowRoot_ = false;
    isAllowRootIsSet_ = false;
}

ClusterResponse::~ClusterResponse() = default;

void ClusterResponse::validate()
{
}

web::json::value ClusterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(flavorsIsSet_) {
        val[utility::conversions::to_string_t("flavors")] = ModelBase::toJson(flavors_);
    }
    if(isAllowRootIsSet_) {
        val[utility::conversions::to_string_t("is_allow_root")] = ModelBase::toJson(isAllowRoot_);
    }

    return val;
}
bool ClusterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceCategories(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavors"));
        if(!fieldValue.is_null())
        {
            std::vector<Flavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_allow_root"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_allow_root"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAllowRoot(refVal);
        }
    }
    return ok;
}


std::string ClusterResponse::getLogicClusterId() const
{
    return logicClusterId_;
}

void ClusterResponse::setLogicClusterId(const std::string& value)
{
    logicClusterId_ = value;
    logicClusterIdIsSet_ = true;
}

bool ClusterResponse::logicClusterIdIsSet() const
{
    return logicClusterIdIsSet_;
}

void ClusterResponse::unsetlogicClusterId()
{
    logicClusterIdIsSet_ = false;
}

std::string ClusterResponse::getStatus() const
{
    return status_;
}

void ClusterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ClusterResponse::getPoolId() const
{
    return poolId_;
}

void ClusterResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ClusterResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ClusterResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ClusterResponse::getType() const
{
    return type_;
}

void ClusterResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClusterResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ClusterResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ClusterResponse::getResourceCategories() const
{
    return resourceCategories_;
}

void ClusterResponse::setResourceCategories(const std::string& value)
{
    resourceCategories_ = value;
    resourceCategoriesIsSet_ = true;
}

bool ClusterResponse::resourceCategoriesIsSet() const
{
    return resourceCategoriesIsSet_;
}

void ClusterResponse::unsetresourceCategories()
{
    resourceCategoriesIsSet_ = false;
}

std::string ClusterResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ClusterResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ClusterResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ClusterResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ClusterResponse::getCreateAt() const
{
    return createAt_;
}

void ClusterResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ClusterResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ClusterResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ClusterResponse::getUpdateAt() const
{
    return updateAt_;
}

void ClusterResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ClusterResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ClusterResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ClusterResponse::getProjectId() const
{
    return projectId_;
}

void ClusterResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ClusterResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ClusterResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ClusterResponse::getDomainId() const
{
    return domainId_;
}

void ClusterResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ClusterResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ClusterResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<Flavor>& ClusterResponse::getFlavors()
{
    return flavors_;
}

void ClusterResponse::setFlavors(const std::vector<Flavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ClusterResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ClusterResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

bool ClusterResponse::isIsAllowRoot() const
{
    return isAllowRoot_;
}

void ClusterResponse::setIsAllowRoot(bool value)
{
    isAllowRoot_ = value;
    isAllowRootIsSet_ = true;
}

bool ClusterResponse::isAllowRootIsSet() const
{
    return isAllowRootIsSet_;
}

void ClusterResponse::unsetisAllowRoot()
{
    isAllowRootIsSet_ = false;
}

}
}
}
}
}


