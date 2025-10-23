

#include "huaweicloud/codehub/v4/model/ListProjectMergeRequestCanBeAssignedUsersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectMergeRequestCanBeAssignedUsersRequest::ListProjectMergeRequestCanBeAssignedUsersRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectMergeRequestCanBeAssignedUsersRequest::~ListProjectMergeRequestCanBeAssignedUsersRequest() = default;

void ListProjectMergeRequestCanBeAssignedUsersRequest::validate()
{
}

web::json::value ListProjectMergeRequestCanBeAssignedUsersRequest::toJson() const
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

    return val;
}
bool ListProjectMergeRequestCanBeAssignedUsersRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListProjectMergeRequestCanBeAssignedUsersRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectMergeRequestCanBeAssignedUsersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedUsersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectMergeRequestCanBeAssignedUsersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectMergeRequestCanBeAssignedUsersRequest::getOffset() const
{
    return offset_;
}

void ListProjectMergeRequestCanBeAssignedUsersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedUsersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectMergeRequestCanBeAssignedUsersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectMergeRequestCanBeAssignedUsersRequest::getLimit() const
{
    return limit_;
}

void ListProjectMergeRequestCanBeAssignedUsersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedUsersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectMergeRequestCanBeAssignedUsersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


