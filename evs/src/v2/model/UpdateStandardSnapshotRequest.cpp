

#include "huaweicloud/evs/v2/model/UpdateStandardSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateStandardSnapshotRequest::UpdateStandardSnapshotRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStandardSnapshotRequest::~UpdateStandardSnapshotRequest() = default;

void UpdateStandardSnapshotRequest::validate()
{
}

web::json::value UpdateStandardSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_id")] = ModelBase::toJson(snapshotId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateStandardSnapshotRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSnapshotRequestBodyV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateStandardSnapshotRequest::getSnapshotId() const
{
    return snapshotId_;
}

void UpdateStandardSnapshotRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool UpdateStandardSnapshotRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void UpdateStandardSnapshotRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

UpdateSnapshotRequestBodyV5 UpdateStandardSnapshotRequest::getBody() const
{
    return body_;
}

void UpdateStandardSnapshotRequest::setBody(const UpdateSnapshotRequestBodyV5& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStandardSnapshotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStandardSnapshotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


