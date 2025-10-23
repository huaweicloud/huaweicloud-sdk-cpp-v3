

#include "huaweicloud/codehub/v4/model/ListGroupUserGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupUserGroupsRequest::ListGroupUserGroupsRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGroupUserGroupsRequest::~ListGroupUserGroupsRequest() = default;

void ListGroupUserGroupsRequest::validate()
{
}

web::json::value ListGroupUserGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
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

    return val;
}
bool ListGroupUserGroupsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t ListGroupUserGroupsRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupUserGroupsRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupUserGroupsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupUserGroupsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListGroupUserGroupsRequest::getSearch() const
{
    return search_;
}

void ListGroupUserGroupsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListGroupUserGroupsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListGroupUserGroupsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListGroupUserGroupsRequest::getOffset() const
{
    return offset_;
}

void ListGroupUserGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupUserGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupUserGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupUserGroupsRequest::getLimit() const
{
    return limit_;
}

void ListGroupUserGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupUserGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupUserGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


