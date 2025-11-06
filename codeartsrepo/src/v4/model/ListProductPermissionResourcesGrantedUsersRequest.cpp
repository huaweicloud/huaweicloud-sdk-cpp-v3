

#include "huaweicloud/codeartsrepo/v4/model/ListProductPermissionResourcesGrantedUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProductPermissionResourcesGrantedUsersRequest::ListProductPermissionResourcesGrantedUsersRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProductPermissionResourcesGrantedUsersRequest::~ListProductPermissionResourcesGrantedUsersRequest() = default;

void ListProductPermissionResourcesGrantedUsersRequest::validate()
{
}

web::json::value ListProductPermissionResourcesGrantedUsersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListProductPermissionResourcesGrantedUsersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
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


std::string ListProductPermissionResourcesGrantedUsersRequest::getProjectId() const
{
    return projectId_;
}

void ListProductPermissionResourcesGrantedUsersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProductPermissionResourcesGrantedUsersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProductPermissionResourcesGrantedUsersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListProductPermissionResourcesGrantedUsersRequest::getQuery() const
{
    return query_;
}

void ListProductPermissionResourcesGrantedUsersRequest::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListProductPermissionResourcesGrantedUsersRequest::queryIsSet() const
{
    return queryIsSet_;
}

void ListProductPermissionResourcesGrantedUsersRequest::unsetquery()
{
    queryIsSet_ = false;
}

int32_t ListProductPermissionResourcesGrantedUsersRequest::getOffset() const
{
    return offset_;
}

void ListProductPermissionResourcesGrantedUsersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProductPermissionResourcesGrantedUsersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProductPermissionResourcesGrantedUsersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProductPermissionResourcesGrantedUsersRequest::getLimit() const
{
    return limit_;
}

void ListProductPermissionResourcesGrantedUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProductPermissionResourcesGrantedUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProductPermissionResourcesGrantedUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


