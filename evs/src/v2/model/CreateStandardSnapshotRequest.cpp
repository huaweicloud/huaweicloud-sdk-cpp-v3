

#include "huaweicloud/evs/v2/model/CreateStandardSnapshotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateStandardSnapshotRequest::CreateStandardSnapshotRequest()
{
    bodyIsSet_ = false;
}

CreateStandardSnapshotRequest::~CreateStandardSnapshotRequest() = default;

void CreateStandardSnapshotRequest::validate()
{
}

web::json::value CreateStandardSnapshotRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateStandardSnapshotRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateStandardSnapshotRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateStandardSnapshotRequestBody CreateStandardSnapshotRequest::getBody() const
{
    return body_;
}

void CreateStandardSnapshotRequest::setBody(const CreateStandardSnapshotRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStandardSnapshotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStandardSnapshotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


