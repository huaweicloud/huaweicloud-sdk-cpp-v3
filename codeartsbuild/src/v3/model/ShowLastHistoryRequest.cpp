

#include "huaweicloud/codeartsbuild/v3/model/ShowLastHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowLastHistoryRequest::ShowLastHistoryRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
}

ShowLastHistoryRequest::~ShowLastHistoryRequest() = default;

void ShowLastHistoryRequest::validate()
{
}

web::json::value ShowLastHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }

    return val;
}
bool ShowLastHistoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    return ok;
}


std::string ShowLastHistoryRequest::getProjectId() const
{
    return projectId_;
}

void ShowLastHistoryRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowLastHistoryRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowLastHistoryRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowLastHistoryRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ShowLastHistoryRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ShowLastHistoryRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ShowLastHistoryRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

}
}
}
}
}


