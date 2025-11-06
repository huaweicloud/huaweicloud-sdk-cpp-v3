

#include "huaweicloud/codeartsrepo/v4/model/ListProjectMergeRequestCanBeAssignedReviewersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectMergeRequestCanBeAssignedReviewersRequest::ListProjectMergeRequestCanBeAssignedReviewersRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectMergeRequestCanBeAssignedReviewersRequest::~ListProjectMergeRequestCanBeAssignedReviewersRequest() = default;

void ListProjectMergeRequestCanBeAssignedReviewersRequest::validate()
{
}

web::json::value ListProjectMergeRequestCanBeAssignedReviewersRequest::toJson() const
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
bool ListProjectMergeRequestCanBeAssignedReviewersRequest::fromJson(const web::json::value& val)
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


std::string ListProjectMergeRequestCanBeAssignedReviewersRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectMergeRequestCanBeAssignedReviewersRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedReviewersRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectMergeRequestCanBeAssignedReviewersRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectMergeRequestCanBeAssignedReviewersRequest::getOffset() const
{
    return offset_;
}

void ListProjectMergeRequestCanBeAssignedReviewersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedReviewersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectMergeRequestCanBeAssignedReviewersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectMergeRequestCanBeAssignedReviewersRequest::getLimit() const
{
    return limit_;
}

void ListProjectMergeRequestCanBeAssignedReviewersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectMergeRequestCanBeAssignedReviewersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectMergeRequestCanBeAssignedReviewersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


