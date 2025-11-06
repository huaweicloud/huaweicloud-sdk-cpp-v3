

#include "huaweicloud/codeartsrepo/v3/model/ProjectRepository.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ProjectRepository::ProjectRepository()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    repositoryUuid_ = "";
    repositoryUuidIsSet_ = false;
}

ProjectRepository::~ProjectRepository() = default;

void ProjectRepository::validate()
{
}

web::json::value ProjectRepository::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("projectUuid")] = ModelBase::toJson(projectUuid_);
    }
    if(repositoryUuidIsSet_) {
        val[utility::conversions::to_string_t("repositoryUuid")] = ModelBase::toJson(repositoryUuid_);
    }

    return val;
}
bool ProjectRepository::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projectUuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectUuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repositoryUuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repositoryUuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUuid(refVal);
        }
    }
    return ok;
}


std::string ProjectRepository::getProjectUuid() const
{
    return projectUuid_;
}

void ProjectRepository::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool ProjectRepository::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void ProjectRepository::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string ProjectRepository::getRepositoryUuid() const
{
    return repositoryUuid_;
}

void ProjectRepository::setRepositoryUuid(const std::string& value)
{
    repositoryUuid_ = value;
    repositoryUuidIsSet_ = true;
}

bool ProjectRepository::repositoryUuidIsSet() const
{
    return repositoryUuidIsSet_;
}

void ProjectRepository::unsetrepositoryUuid()
{
    repositoryUuidIsSet_ = false;
}

}
}
}
}
}


