

#include "huaweicloud/codehub/v4/model/LockRepositoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




LockRepositoryRequest::LockRepositoryRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

LockRepositoryRequest::~LockRepositoryRequest() = default;

void LockRepositoryRequest::validate()
{
}

web::json::value LockRepositoryRequest::toJson() const
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
bool LockRepositoryRequest::fromJson(const web::json::value& val)
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


std::string LockRepositoryRequest::getProjectId() const
{
    return projectId_;
}

void LockRepositoryRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool LockRepositoryRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void LockRepositoryRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t LockRepositoryRequest::getRepositoryId() const
{
    return repositoryId_;
}

void LockRepositoryRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool LockRepositoryRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void LockRepositoryRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


