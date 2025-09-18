

#include "huaweicloud/projectman/v4/model/ShowIssuesWrokFlowConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowIssuesWrokFlowConfigRequest::ShowIssuesWrokFlowConfigRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    trackerId_ = 0;
    trackerIdIsSet_ = false;
}

ShowIssuesWrokFlowConfigRequest::~ShowIssuesWrokFlowConfigRequest() = default;

void ShowIssuesWrokFlowConfigRequest::validate()
{
}

web::json::value ShowIssuesWrokFlowConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }

    return val;
}
bool ShowIssuesWrokFlowConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    return ok;
}


std::string ShowIssuesWrokFlowConfigRequest::getProjectId() const
{
    return projectId_;
}

void ShowIssuesWrokFlowConfigRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowIssuesWrokFlowConfigRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowIssuesWrokFlowConfigRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ShowIssuesWrokFlowConfigRequest::getTrackerId() const
{
    return trackerId_;
}

void ShowIssuesWrokFlowConfigRequest::setTrackerId(int32_t value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool ShowIssuesWrokFlowConfigRequest::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void ShowIssuesWrokFlowConfigRequest::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

}
}
}
}
}


