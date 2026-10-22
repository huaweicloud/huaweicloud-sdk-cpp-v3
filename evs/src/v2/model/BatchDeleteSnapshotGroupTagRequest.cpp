

#include "huaweicloud/evs/v2/model/BatchDeleteSnapshotGroupTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchDeleteSnapshotGroupTagRequest::BatchDeleteSnapshotGroupTagRequest()
{
    snapshotGroupId_ = "";
    snapshotGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteSnapshotGroupTagRequest::~BatchDeleteSnapshotGroupTagRequest() = default;

void BatchDeleteSnapshotGroupTagRequest::validate()
{
}

web::json::value BatchDeleteSnapshotGroupTagRequest::toJson() const
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
bool BatchDeleteSnapshotGroupTagRequest::fromJson(const web::json::value& val)
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
            BatchDeleteResourceTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteSnapshotGroupTagRequest::getSnapshotGroupId() const
{
    return snapshotGroupId_;
}

void BatchDeleteSnapshotGroupTagRequest::setSnapshotGroupId(const std::string& value)
{
    snapshotGroupId_ = value;
    snapshotGroupIdIsSet_ = true;
}

bool BatchDeleteSnapshotGroupTagRequest::snapshotGroupIdIsSet() const
{
    return snapshotGroupIdIsSet_;
}

void BatchDeleteSnapshotGroupTagRequest::unsetsnapshotGroupId()
{
    snapshotGroupIdIsSet_ = false;
}

BatchDeleteResourceTagsRequestBody BatchDeleteSnapshotGroupTagRequest::getBody() const
{
    return body_;
}

void BatchDeleteSnapshotGroupTagRequest::setBody(const BatchDeleteResourceTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteSnapshotGroupTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteSnapshotGroupTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


