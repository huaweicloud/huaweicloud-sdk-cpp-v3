

#include "huaweicloud/projectman/v4/model/ShowBaselineSnapshotsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ShowBaselineSnapshotsRequest::ShowBaselineSnapshotsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    snapshotVersionId_ = "";
    snapshotVersionIdIsSet_ = false;
}

ShowBaselineSnapshotsRequest::~ShowBaselineSnapshotsRequest() = default;

void ShowBaselineSnapshotsRequest::validate()
{
}

web::json::value ShowBaselineSnapshotsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(snapshotVersionIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_version_id")] = ModelBase::toJson(snapshotVersionId_);
    }

    return val;
}
bool ShowBaselineSnapshotsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("snapshot_version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotVersionId(refVal);
        }
    }
    return ok;
}


std::string ShowBaselineSnapshotsRequest::getProjectId() const
{
    return projectId_;
}

void ShowBaselineSnapshotsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowBaselineSnapshotsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowBaselineSnapshotsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowBaselineSnapshotsRequest::getSnapshotVersionId() const
{
    return snapshotVersionId_;
}

void ShowBaselineSnapshotsRequest::setSnapshotVersionId(const std::string& value)
{
    snapshotVersionId_ = value;
    snapshotVersionIdIsSet_ = true;
}

bool ShowBaselineSnapshotsRequest::snapshotVersionIdIsSet() const
{
    return snapshotVersionIdIsSet_;
}

void ShowBaselineSnapshotsRequest::unsetsnapshotVersionId()
{
    snapshotVersionIdIsSet_ = false;
}

}
}
}
}
}


