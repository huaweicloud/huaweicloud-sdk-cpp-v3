

#include "huaweicloud/evs/v2/model/CreateSnapshotRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotRequest::CreateSnapshotRequest()
{
    bodyIsSet_ = false;
}

CreateSnapshotRequest::~CreateSnapshotRequest() = default;

void CreateSnapshotRequest::validate()
{
}

web::json::value CreateSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSnapshotRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSnapshotRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateSnapshotRequestBody CreateSnapshotRequest::getBody() const
{
    return body_;
}

void CreateSnapshotRequest::setBody(const CreateSnapshotRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSnapshotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSnapshotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


