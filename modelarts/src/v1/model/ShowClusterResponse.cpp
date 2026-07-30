

#include "huaweicloud/modelarts/v1/model/ShowClusterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowClusterResponse::ShowClusterResponse()
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

ShowClusterResponse::~ShowClusterResponse() = default;

void ShowClusterResponse::validate()
{
}

web::json::value ShowClusterResponse::toJson() const
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
bool ShowClusterResponse::fromJson(const web::json::value& val)
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


std::string ShowClusterResponse::getLogicClusterId() const
{
    return logicClusterId_;
}

void ShowClusterResponse::setLogicClusterId(const std::string& value)
{
    logicClusterId_ = value;
    logicClusterIdIsSet_ = true;
}

bool ShowClusterResponse::logicClusterIdIsSet() const
{
    return logicClusterIdIsSet_;
}

void ShowClusterResponse::unsetlogicClusterId()
{
    logicClusterIdIsSet_ = false;
}

std::string ShowClusterResponse::getStatus() const
{
    return status_;
}

void ShowClusterResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowClusterResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowClusterResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowClusterResponse::getPoolId() const
{
    return poolId_;
}

void ShowClusterResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ShowClusterResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ShowClusterResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ShowClusterResponse::getType() const
{
    return type_;
}

void ShowClusterResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowClusterResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowClusterResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowClusterResponse::getResourceCategories() const
{
    return resourceCategories_;
}

void ShowClusterResponse::setResourceCategories(const std::string& value)
{
    resourceCategories_ = value;
    resourceCategoriesIsSet_ = true;
}

bool ShowClusterResponse::resourceCategoriesIsSet() const
{
    return resourceCategoriesIsSet_;
}

void ShowClusterResponse::unsetresourceCategories()
{
    resourceCategoriesIsSet_ = false;
}

std::string ShowClusterResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void ShowClusterResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ShowClusterResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ShowClusterResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ShowClusterResponse::getCreateAt() const
{
    return createAt_;
}

void ShowClusterResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ShowClusterResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ShowClusterResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ShowClusterResponse::getUpdateAt() const
{
    return updateAt_;
}

void ShowClusterResponse::setUpdateAt(const std::string& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ShowClusterResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ShowClusterResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ShowClusterResponse::getProjectId() const
{
    return projectId_;
}

void ShowClusterResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowClusterResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowClusterResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowClusterResponse::getDomainId() const
{
    return domainId_;
}

void ShowClusterResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowClusterResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowClusterResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::vector<Flavor>& ShowClusterResponse::getFlavors()
{
    return flavors_;
}

void ShowClusterResponse::setFlavors(const std::vector<Flavor>& value)
{
    flavors_ = value;
    flavorsIsSet_ = true;
}

bool ShowClusterResponse::flavorsIsSet() const
{
    return flavorsIsSet_;
}

void ShowClusterResponse::unsetflavors()
{
    flavorsIsSet_ = false;
}

bool ShowClusterResponse::isIsAllowRoot() const
{
    return isAllowRoot_;
}

void ShowClusterResponse::setIsAllowRoot(bool value)
{
    isAllowRoot_ = value;
    isAllowRootIsSet_ = true;
}

bool ShowClusterResponse::isAllowRootIsSet() const
{
    return isAllowRootIsSet_;
}

void ShowClusterResponse::unsetisAllowRoot()
{
    isAllowRootIsSet_ = false;
}

}
}
}
}
}


