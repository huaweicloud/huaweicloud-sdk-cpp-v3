

#include "huaweicloud/evs/model/RollbackSnapshotRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackSnapshotRequest::RollbackSnapshotRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    bodyIsSet_ = false;
}

RollbackSnapshotRequest::~RollbackSnapshotRequest() = default;

void RollbackSnapshotRequest::validate()
{
}

web::json::value RollbackSnapshotRequest::toJson() const
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

bool RollbackSnapshotRequest::fromJson(const web::json::value& val)
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
            RollbackSnapshotRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RollbackSnapshotRequest::getSnapshotId() const
{
    return snapshotId_;
}

void RollbackSnapshotRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool RollbackSnapshotRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void RollbackSnapshotRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

RollbackSnapshotRequestBody RollbackSnapshotRequest::getBody() const
{
    return body_;
}

void RollbackSnapshotRequest::setBody(const RollbackSnapshotRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RollbackSnapshotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RollbackSnapshotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


