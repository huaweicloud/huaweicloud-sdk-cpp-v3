

#include "huaweicloud/codehub/v3/model/ListHooksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListHooksRequest::ListHooksRequest()
{
    groupName_ = "";
    groupNameIsSet_ = false;
    hookId_ = "";
    hookIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
}

ListHooksRequest::~ListHooksRequest() = default;

void ListHooksRequest::validate()
{
}

web::json::value ListHooksRequest::toJson() const
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
bool ListHooksRequest::fromJson(const web::json::value& val)
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
            std::string refVal;
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


std::string ListHooksRequest::getGroupName() const
{
    return groupName_;
}

void ListHooksRequest::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ListHooksRequest::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ListHooksRequest::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string ListHooksRequest::getHookId() const
{
    return hookId_;
}

void ListHooksRequest::setHookId(const std::string& value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ListHooksRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ListHooksRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

std::string ListHooksRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ListHooksRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ListHooksRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ListHooksRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

}
}
}
}
}


