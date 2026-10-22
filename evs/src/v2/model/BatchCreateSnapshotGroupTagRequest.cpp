

#include "huaweicloud/evs/v2/model/BatchCreateSnapshotGroupTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchCreateSnapshotGroupTagRequest::BatchCreateSnapshotGroupTagRequest()
{
    snapshotGroupId_ = "";
    snapshotGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchCreateSnapshotGroupTagRequest::~BatchCreateSnapshotGroupTagRequest() = default;

void BatchCreateSnapshotGroupTagRequest::validate()
{
}

web::json::value BatchCreateSnapshotGroupTagRequest::toJson() const
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
bool BatchCreateSnapshotGroupTagRequest::fromJson(const web::json::value& val)
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
            BatchCreateResourceTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchCreateSnapshotGroupTagRequest::getSnapshotGroupId() const
{
    return snapshotGroupId_;
}

void BatchCreateSnapshotGroupTagRequest::setSnapshotGroupId(const std::string& value)
{
    snapshotGroupId_ = value;
    snapshotGroupIdIsSet_ = true;
}

bool BatchCreateSnapshotGroupTagRequest::snapshotGroupIdIsSet() const
{
    return snapshotGroupIdIsSet_;
}

void BatchCreateSnapshotGroupTagRequest::unsetsnapshotGroupId()
{
    snapshotGroupIdIsSet_ = false;
}

BatchCreateResourceTagsRequestBody BatchCreateSnapshotGroupTagRequest::getBody() const
{
    return body_;
}

void BatchCreateSnapshotGroupTagRequest::setBody(const BatchCreateResourceTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchCreateSnapshotGroupTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchCreateSnapshotGroupTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


