

#include "huaweicloud/codeartsrepo/v4/model/ListProjectProtectedRefsUserGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectProtectedRefsUserGroupsRequest::ListProjectProtectedRefsUserGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
}

ListProjectProtectedRefsUserGroupsRequest::~ListProjectProtectedRefsUserGroupsRequest() = default;

void ListProjectProtectedRefsUserGroupsRequest::validate()
{
}

web::json::value ListProjectProtectedRefsUserGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
bool ListProjectProtectedRefsUserGroupsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListProjectProtectedRefsUserGroupsRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectProtectedRefsUserGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectProtectedRefsUserGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectProtectedRefsUserGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectProtectedRefsUserGroupsRequest::getOffset() const
{
    return offset_;
}

void ListProjectProtectedRefsUserGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectProtectedRefsUserGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectProtectedRefsUserGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectProtectedRefsUserGroupsRequest::getLimit() const
{
    return limit_;
}

void ListProjectProtectedRefsUserGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectProtectedRefsUserGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectProtectedRefsUserGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProjectProtectedRefsUserGroupsRequest::getSearch() const
{
    return search_;
}

void ListProjectProtectedRefsUserGroupsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListProjectProtectedRefsUserGroupsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListProjectProtectedRefsUserGroupsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

}
}
}
}
}


