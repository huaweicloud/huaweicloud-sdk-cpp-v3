

#include "huaweicloud/codeartsrepo/v3/model/ShowRepoIdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




ShowRepoIdRequest::ShowRepoIdRequest()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
}

ShowRepoIdRequest::~ShowRepoIdRequest() = default;

void ShowRepoIdRequest::validate()
{
}

web::json::value ShowRepoIdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }

    return val;
}
bool ShowRepoIdRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
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


std::string ShowRepoIdRequest::getGroupName() const
{
    return groupName_;
}

void ShowRepoIdRequest::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowRepoIdRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowRepoIdRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string ShowRepoIdRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ShowRepoIdRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ShowRepoIdRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ShowRepoIdRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

}
}
}
}
}


