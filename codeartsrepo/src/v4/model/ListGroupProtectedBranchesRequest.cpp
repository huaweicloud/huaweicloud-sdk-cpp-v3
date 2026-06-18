

#include "huaweicloud/codeartsrepo/v4/model/ListGroupProtectedBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupProtectedBranchesRequest::ListGroupProtectedBranchesRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    userActions_ = false;
    userActionsIsSet_ = false;
}

ListGroupProtectedBranchesRequest::~ListGroupProtectedBranchesRequest() = default;

void ListGroupProtectedBranchesRequest::validate()
{
}

web::json::value ListGroupProtectedBranchesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(userActionsIsSet_) {
        val[utility::conversions::to_string_t("user_actions")] = ModelBase::toJson(userActions_);
    }

    return val;
}
bool ListGroupProtectedBranchesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_actions"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserActions(refVal);
        }
    }
    return ok;
}


int32_t ListGroupProtectedBranchesRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupProtectedBranchesRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupProtectedBranchesRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupProtectedBranchesRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListGroupProtectedBranchesRequest::getOffset() const
{
    return offset_;
}

void ListGroupProtectedBranchesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupProtectedBranchesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupProtectedBranchesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupProtectedBranchesRequest::getLimit() const
{
    return limit_;
}

void ListGroupProtectedBranchesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupProtectedBranchesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupProtectedBranchesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGroupProtectedBranchesRequest::getSearch() const
{
    return search_;
}

void ListGroupProtectedBranchesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListGroupProtectedBranchesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListGroupProtectedBranchesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

bool ListGroupProtectedBranchesRequest::isUserActions() const
{
    return userActions_;
}

void ListGroupProtectedBranchesRequest::setUserActions(bool value)
{
    userActions_ = value;
    userActionsIsSet_ = true;
}

bool ListGroupProtectedBranchesRequest::userActionsIsSet() const
{
    return userActionsIsSet_;
}

void ListGroupProtectedBranchesRequest::unsetuserActions()
{
    userActionsIsSet_ = false;
}

}
}
}
}
}


