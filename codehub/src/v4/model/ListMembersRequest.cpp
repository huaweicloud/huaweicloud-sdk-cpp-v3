

#include "huaweicloud/codehub/v4/model/ListMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMembersRequest::ListMembersRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    permission_ = "";
    permissionIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

ListMembersRequest::~ListMembersRequest() = default;

void ListMembersRequest::validate()
{
}

web::json::value ListMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(permissionIsSet_) {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(permission_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}
bool ListMembersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermission(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}


int32_t ListMembersRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMembersRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMembersRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMembersRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMembersRequest::getSearch() const
{
    return search_;
}

void ListMembersRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListMembersRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListMembersRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListMembersRequest::getOffset() const
{
    return offset_;
}

void ListMembersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMembersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMembersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMembersRequest::getLimit() const
{
    return limit_;
}

void ListMembersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMembersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMembersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMembersRequest::getPermission() const
{
    return permission_;
}

void ListMembersRequest::setPermission(const std::string& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool ListMembersRequest::permissionIsSet() const
{
    return permissionIsSet_;
}

void ListMembersRequest::unsetpermission()
{
    permissionIsSet_ = false;
}

std::string ListMembersRequest::getAction() const
{
    return action_;
}

void ListMembersRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListMembersRequest::actionIsSet() const
{
    return actionIsSet_;
}

void ListMembersRequest::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


