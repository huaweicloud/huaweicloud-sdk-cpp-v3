

#include "huaweicloud/codeartsrepo/v3/model/DeleteHooksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




DeleteHooksRequest::DeleteHooksRequest()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
}

DeleteHooksRequest::~DeleteHooksRequest() = default;

void DeleteHooksRequest::validate()
{
}

web::json::value DeleteHooksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }

    return val;
}
bool DeleteHooksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hook_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hook_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHookId(refVal);
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


std::string DeleteHooksRequest::getGroupName() const
{
    return groupName_;
}

void DeleteHooksRequest::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool DeleteHooksRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void DeleteHooksRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
}

int32_t DeleteHooksRequest::getHookId() const
{
    return hookId_;
}

void DeleteHooksRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool DeleteHooksRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void DeleteHooksRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

std::string DeleteHooksRequest::getRepositoryName() const
{
    return repositoryName_;
}

void DeleteHooksRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool DeleteHooksRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void DeleteHooksRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

}
}
}
}
}


