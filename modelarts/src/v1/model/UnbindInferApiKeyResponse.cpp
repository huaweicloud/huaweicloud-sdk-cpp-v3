

#include "huaweicloud/modelarts/v1/model/UnbindInferApiKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UnbindInferApiKeyResponse::UnbindInferApiKeyResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    servicesIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

UnbindInferApiKeyResponse::~UnbindInferApiKeyResponse() = default;

void UnbindInferApiKeyResponse::validate()
{
}

web::json::value UnbindInferApiKeyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(servicesIsSet_) {
        val[utility::conversions::to_string_t("services")] = ModelBase::toJson(services_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }

    return val;
}
bool UnbindInferApiKeyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("services"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("services"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceIdName> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServices(refVal);
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
    return ok;
}


std::string UnbindInferApiKeyResponse::getKeyId() const
{
    return keyId_;
}

void UnbindInferApiKeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool UnbindInferApiKeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void UnbindInferApiKeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string UnbindInferApiKeyResponse::getName() const
{
    return name_;
}

void UnbindInferApiKeyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UnbindInferApiKeyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UnbindInferApiKeyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UnbindInferApiKeyResponse::getDescription() const
{
    return description_;
}

void UnbindInferApiKeyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UnbindInferApiKeyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UnbindInferApiKeyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UnbindInferApiKeyResponse::getCreateTime() const
{
    return createTime_;
}

void UnbindInferApiKeyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UnbindInferApiKeyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UnbindInferApiKeyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UnbindInferApiKeyResponse::getScope() const
{
    return scope_;
}

void UnbindInferApiKeyResponse::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool UnbindInferApiKeyResponse::scopeIsSet() const
{
    return scopeIsSet_;
}

void UnbindInferApiKeyResponse::unsetscope()
{
    scopeIsSet_ = false;
}

std::string UnbindInferApiKeyResponse::getDomainId() const
{
    return domainId_;
}

void UnbindInferApiKeyResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UnbindInferApiKeyResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UnbindInferApiKeyResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UnbindInferApiKeyResponse::getProjectId() const
{
    return projectId_;
}

void UnbindInferApiKeyResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UnbindInferApiKeyResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UnbindInferApiKeyResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<ServiceIdName>& UnbindInferApiKeyResponse::getServices()
{
    return services_;
}

void UnbindInferApiKeyResponse::setServices(const std::vector<ServiceIdName>& value)
{
    services_ = value;
    servicesIsSet_ = true;
}

bool UnbindInferApiKeyResponse::servicesIsSet() const
{
    return servicesIsSet_;
}

void UnbindInferApiKeyResponse::unsetservices()
{
    servicesIsSet_ = false;
}

std::string UnbindInferApiKeyResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void UnbindInferApiKeyResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool UnbindInferApiKeyResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void UnbindInferApiKeyResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


