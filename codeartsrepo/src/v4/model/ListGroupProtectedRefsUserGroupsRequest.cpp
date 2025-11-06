

#include "huaweicloud/codeartsrepo/v4/model/ListGroupProtectedRefsUserGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupProtectedRefsUserGroupsRequest::ListGroupProtectedRefsUserGroupsRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

ListGroupProtectedRefsUserGroupsRequest::~ListGroupProtectedRefsUserGroupsRequest() = default;

void ListGroupProtectedRefsUserGroupsRequest::validate()
{
}

web::json::value ListGroupProtectedRefsUserGroupsRequest::toJson() const
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

    return val;
}
bool ListGroupProtectedRefsUserGroupsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ListGroupProtectedRefsUserGroupsRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupProtectedRefsUserGroupsRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupProtectedRefsUserGroupsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupProtectedRefsUserGroupsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListGroupProtectedRefsUserGroupsRequest::getOffset() const
{
    return offset_;
}

void ListGroupProtectedRefsUserGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupProtectedRefsUserGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupProtectedRefsUserGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupProtectedRefsUserGroupsRequest::getLimit() const
{
    return limit_;
}

void ListGroupProtectedRefsUserGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupProtectedRefsUserGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupProtectedRefsUserGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListGroupProtectedRefsUserGroupsRequest::getSearch() const
{
    return search_;
}

void ListGroupProtectedRefsUserGroupsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListGroupProtectedRefsUserGroupsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListGroupProtectedRefsUserGroupsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}


