

#include "huaweicloud/evs/v2/model/BatchDeleteSnapshotTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchDeleteSnapshotTagsRequest::BatchDeleteSnapshotTagsRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteSnapshotTagsRequest::~BatchDeleteSnapshotTagsRequest() = default;

void BatchDeleteSnapshotTagsRequest::validate()
{
}

web::json::value BatchDeleteSnapshotTagsRequest::toJson() const
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
bool BatchDeleteSnapshotTagsRequest::fromJson(const web::json::value& val)
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
            BatchDeleteResourceTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteSnapshotTagsRequest::getSnapshotId() const
{
    return snapshotId_;
}

void BatchDeleteSnapshotTagsRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool BatchDeleteSnapshotTagsRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void BatchDeleteSnapshotTagsRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

BatchDeleteResourceTagsRequestBody BatchDeleteSnapshotTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteSnapshotTagsRequest::setBody(const BatchDeleteResourceTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSnapshotTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSnapshotTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


