

#include "huaweicloud/evs/v2/model/RollbackStandardSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RollbackStandardSnapshotRequest::RollbackStandardSnapshotRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    bodyIsSet_ = false;
}

RollbackStandardSnapshotRequest::~RollbackStandardSnapshotRequest() = default;

void RollbackStandardSnapshotRequest::validate()
{
}

web::json::value RollbackStandardSnapshotRequest::toJson() const
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
bool RollbackStandardSnapshotRequest::fromJson(const web::json::value& val)
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
            RollbackSnapshotRequestBodyV5 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RollbackStandardSnapshotRequest::getSnapshotId() const
{
    return snapshotId_;
}

void RollbackStandardSnapshotRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool RollbackStandardSnapshotRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void RollbackStandardSnapshotRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

RollbackSnapshotRequestBodyV5 RollbackStandardSnapshotRequest::getBody() const
{
    return body_;
}

void RollbackStandardSnapshotRequest::setBody(const RollbackSnapshotRequestBodyV5& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RollbackStandardSnapshotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RollbackStandardSnapshotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


