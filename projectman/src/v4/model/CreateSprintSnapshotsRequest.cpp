

#include "huaweicloud/projectman/v4/model/CreateSprintSnapshotsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




CreateSprintSnapshotsRequest::CreateSprintSnapshotsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateSprintSnapshotsRequest::~CreateSprintSnapshotsRequest() = default;

void CreateSprintSnapshotsRequest::validate()
{
}

web::json::value CreateSprintSnapshotsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSprintSnapshotsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SprintSnapshotsCreateParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateSprintSnapshotsRequest::getProjectId() const
{
    return projectId_;
}

void CreateSprintSnapshotsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateSprintSnapshotsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateSprintSnapshotsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

SprintSnapshotsCreateParam CreateSprintSnapshotsRequest::getBody() const
{
    return body_;
}

void CreateSprintSnapshotsRequest::setBody(const SprintSnapshotsCreateParam& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSprintSnapshotsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSprintSnapshotsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


