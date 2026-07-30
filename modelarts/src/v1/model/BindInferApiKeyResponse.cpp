

#include "huaweicloud/modelarts/v1/model/BindInferApiKeyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BindInferApiKeyResponse::BindInferApiKeyResponse()
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

BindInferApiKeyResponse::~BindInferApiKeyResponse() = default;

void BindInferApiKeyResponse::validate()
{
}

web::json::value BindInferApiKeyResponse::toJson() const
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
bool BindInferApiKeyResponse::fromJson(const web::json::value& val)
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


std::string BindInferApiKeyResponse::getKeyId() const
{
    return keyId_;
}

void BindInferApiKeyResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool BindInferApiKeyResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void BindInferApiKeyResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string BindInferApiKeyResponse::getName() const
{
    return name_;
}

void BindInferApiKeyResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BindInferApiKeyResponse::nameIsSet() const
{
    return nameIsSet_;
}

void BindInferApiKeyResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string BindInferApiKeyResponse::getDescription() const
{
    return description_;
}

void BindInferApiKeyResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BindInferApiKeyResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BindInferApiKeyResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string BindInferApiKeyResponse::getCreateTime() const
{
    return createTime_;
}

void BindInferApiKeyResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool BindInferApiKeyResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void BindInferApiKeyResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string BindInferApiKeyResponse::getScope() const
{
    return scope_;
}

void BindInferApiKeyResponse::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool BindInferApiKeyResponse::scopeIsSet() const
{
    return scopeIsSet_;
}

void BindInferApiKeyResponse::unsetscope()
{
    scopeIsSet_ = false;
}

std::string BindInferApiKeyResponse::getDomainId() const
{
    return domainId_;
}

void BindInferApiKeyResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool BindInferApiKeyResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void BindInferApiKeyResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string BindInferApiKeyResponse::getProjectId() const
{
    return projectId_;
}

void BindInferApiKeyResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BindInferApiKeyResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BindInferApiKeyResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<ServiceIdName>& BindInferApiKeyResponse::getServices()
{
    return services_;
}

void BindInferApiKeyResponse::setServices(const std::vector<ServiceIdName>& value)
{
    services_ = value;
    servicesIsSet_ = true;
}

bool BindInferApiKeyResponse::servicesIsSet() const
{
    return servicesIsSet_;
}

void BindInferApiKeyResponse::unsetservices()
{
    servicesIsSet_ = false;
}

std::string BindInferApiKeyResponse::getWorkspaceId() const
{
    return workspaceId_;
}

void BindInferApiKeyResponse::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool BindInferApiKeyResponse::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void BindInferApiKeyResponse::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


