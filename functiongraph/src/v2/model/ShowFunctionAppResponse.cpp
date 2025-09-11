

#include "huaweicloud/functiongraph/v2/model/ShowFunctionAppResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionAppResponse::ShowFunctionAppResponse()
{
    name_ = "";
    nameIsSet_ = false;
    lastModifiedTime_ = 0L;
    lastModifiedTimeIsSet_ = false;
    stackResourcesIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    stackName_ = "";
    stackNameIsSet_ = false;
    stackId_ = "";
    stackIdIsSet_ = false;
    repoName_ = "";
    repoNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    repoIsSet_ = false;
    pipelineId_ = "";
    pipelineIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    apigUrl_ = "";
    apigUrlIsSet_ = false;
}

ShowFunctionAppResponse::~ShowFunctionAppResponse() = default;

void ShowFunctionAppResponse::validate()
{
}

web::json::value ShowFunctionAppResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(lastModifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modified_time")] = ModelBase::toJson(lastModifiedTime_);
    }
    if(stackResourcesIsSet_) {
        val[utility::conversions::to_string_t("stack_resources")] = ModelBase::toJson(stackResources_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(stackNameIsSet_) {
        val[utility::conversions::to_string_t("stack_name")] = ModelBase::toJson(stackName_);
    }
    if(stackIdIsSet_) {
        val[utility::conversions::to_string_t("stack_id")] = ModelBase::toJson(stackId_);
    }
    if(repoNameIsSet_) {
        val[utility::conversions::to_string_t("repo_name")] = ModelBase::toJson(repoName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(repoIsSet_) {
        val[utility::conversions::to_string_t("repo")] = ModelBase::toJson(repo_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(apigUrlIsSet_) {
        val[utility::conversions::to_string_t("apig_url")] = ModelBase::toJson(apigUrl_);
    }

    return val;
}
bool ShowFunctionAppResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stack_resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stack_resources"));
        if(!fieldValue.is_null())
        {
            StackResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStackResources(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stack_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stack_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStackName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stack_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stack_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStackId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repo_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo"));
        if(!fieldValue.is_null())
        {
            RepoInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("apig_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apig_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApigUrl(refVal);
        }
    }
    return ok;
}


std::string ShowFunctionAppResponse::getName() const
{
    return name_;
}

void ShowFunctionAppResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowFunctionAppResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowFunctionAppResponse::unsetname()
{
    nameIsSet_ = false;
}

int64_t ShowFunctionAppResponse::getLastModifiedTime() const
{
    return lastModifiedTime_;
}

void ShowFunctionAppResponse::setLastModifiedTime(int64_t value)
{
    lastModifiedTime_ = value;
    lastModifiedTimeIsSet_ = true;
}

bool ShowFunctionAppResponse::lastModifiedTimeIsSet() const
{
    return lastModifiedTimeIsSet_;
}

void ShowFunctionAppResponse::unsetlastModifiedTime()
{
    lastModifiedTimeIsSet_ = false;
}

StackResource ShowFunctionAppResponse::getStackResources() const
{
    return stackResources_;
}

void ShowFunctionAppResponse::setStackResources(const StackResource& value)
{
    stackResources_ = value;
    stackResourcesIsSet_ = true;
}

bool ShowFunctionAppResponse::stackResourcesIsSet() const
{
    return stackResourcesIsSet_;
}

void ShowFunctionAppResponse::unsetstackResources()
{
    stackResourcesIsSet_ = false;
}

std::string ShowFunctionAppResponse::getStatus() const
{
    return status_;
}

void ShowFunctionAppResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowFunctionAppResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowFunctionAppResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowFunctionAppResponse::getStackName() const
{
    return stackName_;
}

void ShowFunctionAppResponse::setStackName(const std::string& value)
{
    stackName_ = value;
    stackNameIsSet_ = true;
}

bool ShowFunctionAppResponse::stackNameIsSet() const
{
    return stackNameIsSet_;
}

void ShowFunctionAppResponse::unsetstackName()
{
    stackNameIsSet_ = false;
}

std::string ShowFunctionAppResponse::getStackId() const
{
    return stackId_;
}

void ShowFunctionAppResponse::setStackId(const std::string& value)
{
    stackId_ = value;
    stackIdIsSet_ = true;
}

bool ShowFunctionAppResponse::stackIdIsSet() const
{
    return stackIdIsSet_;
}

void ShowFunctionAppResponse::unsetstackId()
{
    stackIdIsSet_ = false;
}

std::string ShowFunctionAppResponse::getRepoName() const
{
    return repoName_;
}

void ShowFunctionAppResponse::setRepoName(const std::string& value)
{
    repoName_ = value;
    repoNameIsSet_ = true;
}

bool ShowFunctionAppResponse::repoNameIsSet() const
{
    return repoNameIsSet_;
}

void ShowFunctionAppResponse::unsetrepoName()
{
    repoNameIsSet_ = false;
}

std::string ShowFunctionAppResponse::getDescription() const
{
    return description_;
}

void ShowFunctionAppResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowFunctionAppResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowFunctionAppResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

RepoInfo ShowFunctionAppResponse::getRepo() const
{
    return repo_;
}

void ShowFunctionAppResponse::setRepo(const RepoInfo& value)
{
    repo_ = value;
    repoIsSet_ = true;
}

bool ShowFunctionAppResponse::repoIsSet() const
{
    return repoIsSet_;
}

void ShowFunctionAppResponse::unsetrepo()
{
    repoIsSet_ = false;
}

std::string ShowFunctionAppResponse::getPipelineId() const
{
    return pipelineId_;
}

void ShowFunctionAppResponse::setPipelineId(const std::string& value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ShowFunctionAppResponse::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ShowFunctionAppResponse::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string ShowFunctionAppResponse::getProjectId() const
{
    return projectId_;
}

void ShowFunctionAppResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowFunctionAppResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowFunctionAppResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowFunctionAppResponse::getApigUrl() const
{
    return apigUrl_;
}

void ShowFunctionAppResponse::setApigUrl(const std::string& value)
{
    apigUrl_ = value;
    apigUrlIsSet_ = true;
}

bool ShowFunctionAppResponse::apigUrlIsSet() const
{
    return apigUrlIsSet_;
}

void ShowFunctionAppResponse::unsetapigUrl()
{
    apigUrlIsSet_ = false;
}

}
}
}
}
}


