

#include "huaweicloud/modelarts/v1/model/ApiKeyResponseV2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ApiKeyResponseV2::ApiKeyResponseV2()
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

ApiKeyResponseV2::~ApiKeyResponseV2() = default;

void ApiKeyResponseV2::validate()
{
}

web::json::value ApiKeyResponseV2::toJson() const
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
bool ApiKeyResponseV2::fromJson(const web::json::value& val)
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


std::string ApiKeyResponseV2::getKeyId() const
{
    return keyId_;
}

void ApiKeyResponseV2::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ApiKeyResponseV2::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ApiKeyResponseV2::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ApiKeyResponseV2::getName() const
{
    return name_;
}

void ApiKeyResponseV2::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApiKeyResponseV2::nameIsSet() const
{
    return nameIsSet_;
}

void ApiKeyResponseV2::unsetname()
{
    nameIsSet_ = false;
}

std::string ApiKeyResponseV2::getDescription() const
{
    return description_;
}

void ApiKeyResponseV2::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ApiKeyResponseV2::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ApiKeyResponseV2::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ApiKeyResponseV2::getCreateTime() const
{
    return createTime_;
}

void ApiKeyResponseV2::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ApiKeyResponseV2::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ApiKeyResponseV2::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ApiKeyResponseV2::getScope() const
{
    return scope_;
}

void ApiKeyResponseV2::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ApiKeyResponseV2::scopeIsSet() const
{
    return scopeIsSet_;
}

void ApiKeyResponseV2::unsetscope()
{
    scopeIsSet_ = false;
}

std::string ApiKeyResponseV2::getDomainId() const
{
    return domainId_;
}

void ApiKeyResponseV2::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ApiKeyResponseV2::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ApiKeyResponseV2::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ApiKeyResponseV2::getProjectId() const
{
    return projectId_;
}

void ApiKeyResponseV2::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ApiKeyResponseV2::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ApiKeyResponseV2::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<ServiceIdName>& ApiKeyResponseV2::getServices()
{
    return services_;
}

void ApiKeyResponseV2::setServices(const std::vector<ServiceIdName>& value)
{
    services_ = value;
    servicesIsSet_ = true;
}

bool ApiKeyResponseV2::servicesIsSet() const
{
    return servicesIsSet_;
}

void ApiKeyResponseV2::unsetservices()
{
    servicesIsSet_ = false;
}

std::string ApiKeyResponseV2::getWorkspaceId() const
{
    return workspaceId_;
}

void ApiKeyResponseV2::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ApiKeyResponseV2::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ApiKeyResponseV2::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


