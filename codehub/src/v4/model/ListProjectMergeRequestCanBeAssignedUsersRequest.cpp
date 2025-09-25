

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

}
}
}
}
}


