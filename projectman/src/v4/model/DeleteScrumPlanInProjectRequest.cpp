

#include "huaweicloud/projectman/v4/model/DeleteScrumPlanInProjectRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




DeleteScrumPlanInProjectRequest::DeleteScrumPlanInProjectRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

DeleteScrumPlanInProjectRequest::~DeleteScrumPlanInProjectRequest() = default;

void DeleteScrumPlanInProjectRequest::validate()
{
}

web::json::value DeleteScrumPlanInProjectRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool DeleteScrumPlanInProjectRequest::fromJson(const web::json::value& val)
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


std::string DeleteScrumPlanInProjectRequest::getProjectId() const
{
    return projectId_;
}

void DeleteScrumPlanInProjectRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeleteScrumPlanInProjectRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeleteScrumPlanInProjectRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


