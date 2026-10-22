

#include "huaweicloud/evs/v2/model/BatchCreateSnapshotTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchCreateSnapshotTagsRequest::BatchCreateSnapshotTagsRequest()
{
    snapshotId_ = "";
    snapshotIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateSnapshotTagsRequest::~BatchCreateSnapshotTagsRequest() = default;

void BatchCreateSnapshotTagsRequest::validate()
{
}

web::json::value BatchCreateSnapshotTagsRequest::toJson() const
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
bool BatchCreateSnapshotTagsRequest::fromJson(const web::json::value& val)
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
            BatchCreateResourceTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateSnapshotTagsRequest::getSnapshotId() const
{
    return snapshotId_;
}

void BatchCreateSnapshotTagsRequest::setSnapshotId(const std::string& value)
{
    snapshotId_ = value;
    snapshotIdIsSet_ = true;
}

bool BatchCreateSnapshotTagsRequest::snapshotIdIsSet() const
{
    return snapshotIdIsSet_;
}

void BatchCreateSnapshotTagsRequest::unsetsnapshotId()
{
    snapshotIdIsSet_ = false;
}

BatchCreateResourceTagsRequestBody BatchCreateSnapshotTagsRequest::getBody() const
{
    return body_;
}

void BatchCreateSnapshotTagsRequest::setBody(const BatchCreateResourceTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateSnapshotTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateSnapshotTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


