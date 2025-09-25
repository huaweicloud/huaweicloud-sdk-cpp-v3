

#include "huaweicloud/codehub/v4/model/ListGroupMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupMembersRequest::ListGroupMembersRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    joinWay_ = "";
    joinWayIsSet_ = false;
    accessLevel_ = 0;
    accessLevelIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGroupMembersRequest::~ListGroupMembersRequest() = default;

void ListGroupMembersRequest::validate()
{
}

web::json::value ListGroupMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(joinWayIsSet_) {
        val[utility::conversions::to_string_t("join_way")] = ModelBase::toJson(joinWay_);
    }
    if(accessLevelIsSet_) {
        val[utility::conversions::to_string_t("access_level")] = ModelBase::toJson(accessLevel_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListGroupMembersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("join_way"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("join_way"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoinWay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessLevel(refVal);
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


int32_t ListGroupMembersRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupMembersRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupMembersRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupMembersRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListGroupMembersRequest::getProjectId() const
{
    return projectId_;
}

void ListGroupMembersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListGroupMembersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListGroupMembersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListGroupMembersRequest::getQuery() const
{
    return query_;
}

void ListGroupMembersRequest::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListGroupMembersRequest::queryIsSet() const
{
    return queryIsSet_;
}

void ListGroupMembersRequest::unsetquery()
{
    queryIsSet_ = false;
}

std::string ListGroupMembersRequest::getJoinWay() const
{
    return joinWay_;
}

void ListGroupMembersRequest::setJoinWay(const std::string& value)
{
    joinWay_ = value;
    joinWayIsSet_ = true;
}

bool ListGroupMembersRequest::joinWayIsSet() const
{
    return joinWayIsSet_;
}

void ListGroupMembersRequest::unsetjoinWay()
{
    joinWayIsSet_ = false;
}

int32_t ListGroupMembersRequest::getAccessLevel() const
{
    return accessLevel_;
}

void ListGroupMembersRequest::setAccessLevel(int32_t value)
{
    accessLevel_ = value;
    accessLevelIsSet_ = true;
}

bool ListGroupMembersRequest::accessLevelIsSet() const
{
    return accessLevelIsSet_;
}

void ListGroupMembersRequest::unsetaccessLevel()
{
    accessLevelIsSet_ = false;
}

int32_t ListGroupMembersRequest::getOffset() const
{
    return offset_;
}

void ListGroupMembersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupMembersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupMembersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupMembersRequest::getLimit() const
{
    return limit_;
}

void ListGroupMembersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupMembersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupMembersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


