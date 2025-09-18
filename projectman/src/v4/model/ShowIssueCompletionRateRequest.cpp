

#include "huaweicloud/projectman/v4/model/ShowIssueCompletionRateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssueCompletionRateRequest::ShowIssueCompletionRateRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowIssueCompletionRateRequest::~ShowIssueCompletionRateRequest() = default;

void ShowIssueCompletionRateRequest::validate()
{
}

web::json::value ShowIssueCompletionRateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowIssueCompletionRateRequest::fromJson(const web::json::value& val)
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


std::string ShowIssueCompletionRateRequest::getProjectId() const
{
    return projectId_;
}

void ShowIssueCompletionRateRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIssueCompletionRateRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIssueCompletionRateRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


