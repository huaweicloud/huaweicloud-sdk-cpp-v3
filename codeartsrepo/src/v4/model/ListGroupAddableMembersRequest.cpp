

#include "huaweicloud/codeartsrepo/v4/model/ListGroupAddableMembersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupAddableMembersRequest::ListGroupAddableMembersRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListGroupAddableMembersRequest::~ListGroupAddableMembersRequest() = default;

void ListGroupAddableMembersRequest::validate()
{
}

web::json::value ListGroupAddableMembersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
bool ListGroupAddableMembersRequest::fromJson(const web::json::value& val)
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


int32_t ListGroupAddableMembersRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupAddableMembersRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupAddableMembersRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupAddableMembersRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListGroupAddableMembersRequest::getProjectId() const
{
    return projectId_;
}

void ListGroupAddableMembersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListGroupAddableMembersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListGroupAddableMembersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListGroupAddableMembersRequest::getSearch() const
{
    return search_;
}

void ListGroupAddableMembersRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListGroupAddableMembersRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListGroupAddableMembersRequest::unsetsearch()
{
    searchIsSet_ = false;
}

int32_t ListGroupAddableMembersRequest::getOffset() const
{
    return offset_;
}

void ListGroupAddableMembersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupAddableMembersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupAddableMembersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupAddableMembersRequest::getLimit() const
{
    return limit_;
}

void ListGroupAddableMembersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupAddableMembersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupAddableMembersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


