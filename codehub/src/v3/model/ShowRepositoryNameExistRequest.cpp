

#include "huaweicloud/codehub/v3/model/ShowRepositoryNameExistRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ShowRepositoryNameExistRequest::ShowRepositoryNameExistRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
}

ShowRepositoryNameExistRequest::~ShowRepositoryNameExistRequest() = default;

void ShowRepositoryNameExistRequest::validate()
{
}

web::json::value ShowRepositoryNameExistRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }

    return val;
}
bool ShowRepositoryNameExistRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
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


std::string ShowRepositoryNameExistRequest::getProjectUuid() const
{
    return projectUuid_;
}

void ShowRepositoryNameExistRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ShowRepositoryNameExistRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ShowRepositoryNameExistRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ShowRepositoryNameExistRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ShowRepositoryNameExistRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ShowRepositoryNameExistRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ShowRepositoryNameExistRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

}
}
}
}
}


