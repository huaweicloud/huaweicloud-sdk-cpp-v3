

#include "huaweicloud/codehub/v4/model/ListGroupAddableUserGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupAddableUserGroupsRequest::ListGroupAddableUserGroupsRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGroupAddableUserGroupsRequest::~ListGroupAddableUserGroupsRequest() = default;

void ListGroupAddableUserGroupsRequest::validate()
{
}

web::json::value ListGroupAddableUserGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListGroupAddableUserGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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


int32_t ListGroupAddableUserGroupsRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupAddableUserGroupsRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupAddableUserGroupsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupAddableUserGroupsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListGroupAddableUserGroupsRequest::getProjectId() const
{
    return projectId_;
}

void ListGroupAddableUserGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListGroupAddableUserGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListGroupAddableUserGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListGroupAddableUserGroupsRequest::getOffset() const
{
    return offset_;
}

void ListGroupAddableUserGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupAddableUserGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupAddableUserGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupAddableUserGroupsRequest::getLimit() const
{
    return limit_;
}

void ListGroupAddableUserGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupAddableUserGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupAddableUserGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


