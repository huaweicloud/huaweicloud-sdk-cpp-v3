

#include "huaweicloud/codehub/v4/model/UnlockRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UnlockRepositoryRequest::UnlockRepositoryRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

UnlockRepositoryRequest::~UnlockRepositoryRequest() = default;

void UnlockRepositoryRequest::validate()
{
}

web::json::value UnlockRepositoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool UnlockRepositoryRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    return ok;
}


std::string UnlockRepositoryRequest::getProjectId() const
{
    return projectId_;
}

void UnlockRepositoryRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UnlockRepositoryRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UnlockRepositoryRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t UnlockRepositoryRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UnlockRepositoryRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UnlockRepositoryRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UnlockRepositoryRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


