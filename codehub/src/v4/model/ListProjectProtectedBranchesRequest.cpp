

#include "huaweicloud/codehub/v4/model/ListProjectProtectedBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectProtectedBranchesRequest::ListProjectProtectedBranchesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    userActions_ = false;
    userActionsIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
}

ListProjectProtectedBranchesRequest::~ListProjectProtectedBranchesRequest() = default;

void ListProjectProtectedBranchesRequest::validate()
{
}

web::json::value ListProjectProtectedBranchesRequest::toJson() const
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
    if(userActionsIsSet_) {
        val[utility::conversions::to_string_t("user_actions")] = ModelBase::toJson(userActions_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }

    return val;
}
bool ListProjectProtectedBranchesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_actions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_actions"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserActions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
        }
    }
    return ok;
}


std::string ListProjectProtectedBranchesRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectProtectedBranchesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectProtectedBranchesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectProtectedBranchesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectProtectedBranchesRequest::getOffset() const
{
    return offset_;
}

void ListProjectProtectedBranchesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectProtectedBranchesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectProtectedBranchesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectProtectedBranchesRequest::getLimit() const
{
    return limit_;
}

void ListProjectProtectedBranchesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectProtectedBranchesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectProtectedBranchesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProjectProtectedBranchesRequest::getSearch() const
{
    return search_;
}

void ListProjectProtectedBranchesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListProjectProtectedBranchesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListProjectProtectedBranchesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

bool ListProjectProtectedBranchesRequest::isUserActions() const
{
    return userActions_;
}

void ListProjectProtectedBranchesRequest::setUserActions(bool value)
{
    userActions_ = value;
    userActionsIsSet_ = true;
}

bool ListProjectProtectedBranchesRequest::userActionsIsSet() const
{
    return userActionsIsSet_;
}

void ListProjectProtectedBranchesRequest::unsetuserActions()
{
    userActionsIsSet_ = false;
}

std::string ListProjectProtectedBranchesRequest::getView() const
{
    return view_;
}

void ListProjectProtectedBranchesRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListProjectProtectedBranchesRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListProjectProtectedBranchesRequest::unsetview()
{
    viewIsSet_ = false;
}

}
}
}
}
}


