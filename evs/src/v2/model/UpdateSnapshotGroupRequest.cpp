

#include "huaweicloud/evs/v2/model/UpdateSnapshotGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotGroupRequest::UpdateSnapshotGroupRequest()
{
    snapshotGroupId_ = "";
    snapshotGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSnapshotGroupRequest::~UpdateSnapshotGroupRequest() = default;

void UpdateSnapshotGroupRequest::validate()
{
}

web::json::value UpdateSnapshotGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(snapshotGroupIdIsSet_) {
        val[utility::conversions::to_string_t("snapshot_group_id")] = ModelBase::toJson(snapshotGroupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateSnapshotGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("snapshot_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("snapshot_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSnapshotGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSnapshotGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSnapshotGroupRequest::getSnapshotGroupId() const
{
    return snapshotGroupId_;
}

void UpdateSnapshotGroupRequest::setSnapshotGroupId(const std::string& value)
{
    snapshotGroupId_ = value;
    snapshotGroupIdIsSet_ = true;
}

bool UpdateSnapshotGroupRequest::snapshotGroupIdIsSet() const
{
    return snapshotGroupIdIsSet_;
}

void UpdateSnapshotGroupRequest::unsetsnapshotGroupId()
{
    snapshotGroupIdIsSet_ = false;
}

UpdateSnapshotGroupRequestBody UpdateSnapshotGroupRequest::getBody() const
{
    return body_;
}

void UpdateSnapshotGroupRequest::setBody(const UpdateSnapshotGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSnapshotGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSnapshotGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


