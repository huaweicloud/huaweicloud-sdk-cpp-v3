

#include "huaweicloud/projectman/v4/model/BatchUpdateSnapshotDeletableFlagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateSnapshotDeletableFlagRequest::BatchUpdateSnapshotDeletableFlagRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchUpdateSnapshotDeletableFlagRequest::~BatchUpdateSnapshotDeletableFlagRequest() = default;

void BatchUpdateSnapshotDeletableFlagRequest::validate()
{
}

web::json::value BatchUpdateSnapshotDeletableFlagRequest::toJson() const
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
bool BatchUpdateSnapshotDeletableFlagRequest::fromJson(const web::json::value& val)
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
            BatchUpdateSnapshotDeletableVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchUpdateSnapshotDeletableFlagRequest::getProjectId() const
{
    return projectId_;
}

void BatchUpdateSnapshotDeletableFlagRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableFlagRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchUpdateSnapshotDeletableFlagRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchUpdateSnapshotDeletableVO BatchUpdateSnapshotDeletableFlagRequest::getBody() const
{
    return body_;
}

void BatchUpdateSnapshotDeletableFlagRequest::setBody(const BatchUpdateSnapshotDeletableVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchUpdateSnapshotDeletableFlagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchUpdateSnapshotDeletableFlagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


