

#include "huaweicloud/evs/model/UpdateSnapshotRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotRequest::UpdateSnapshotRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSnapshotRequest::~UpdateSnapshotRequest() = default;

void UpdateSnapshotRequest::validate()
{
}

web::json::value UpdateSnapshotRequest::toJson() const
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

bool UpdateSnapshotRequest::fromJson(const web::json::value& val)
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
            UpdateSnapshotRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSnapshotRequest::getSnapshotId() const
{
    return snapshotId_;
}

void UpdateSnapshotRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool UpdateSnapshotRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void UpdateSnapshotRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

UpdateSnapshotRequestBody UpdateSnapshotRequest::getBody() const
{
    return body_;
}

void UpdateSnapshotRequest::setBody(const UpdateSnapshotRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSnapshotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSnapshotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


