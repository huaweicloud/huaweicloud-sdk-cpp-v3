

#include "huaweicloud/projectman/v4/model/BatchDeleteSnapshotsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchDeleteSnapshotsRequest::BatchDeleteSnapshotsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteSnapshotsRequest::~BatchDeleteSnapshotsRequest() = default;

void BatchDeleteSnapshotsRequest::validate()
{
}

web::json::value BatchDeleteSnapshotsRequest::toJson() const
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
bool BatchDeleteSnapshotsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteSnapshotRecordVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteSnapshotsRequest::getProjectId() const
{
    return projectId_;
}

void BatchDeleteSnapshotsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool BatchDeleteSnapshotsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void BatchDeleteSnapshotsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

BatchDeleteSnapshotRecordVO BatchDeleteSnapshotsRequest::getBody() const
{
    return body_;
}

void BatchDeleteSnapshotsRequest::setBody(const BatchDeleteSnapshotRecordVO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSnapshotsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSnapshotsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


