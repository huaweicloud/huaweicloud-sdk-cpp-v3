

#include "huaweicloud/codehub/v4/model/ListProjectMergeRequestCanBeAssignedReviewersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectMergeRequestCanBeAssignedReviewersRequest::ListProjectMergeRequestCanBeAssignedReviewersRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
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

}
}
}
}
}


