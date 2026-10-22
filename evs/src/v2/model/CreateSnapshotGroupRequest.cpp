

#include "huaweicloud/evs/v2/model/CreateSnapshotGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateSnapshotGroupRequest::CreateSnapshotGroupRequest()
{
    bodyIsSet_ = false;
}

CreateSnapshotGroupRequest::~CreateSnapshotGroupRequest() = default;

void CreateSnapshotGroupRequest::validate()
{
}

web::json::value CreateSnapshotGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateSnapshotGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSnapshotGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateSnapshotGroupRequestBody CreateSnapshotGroupRequest::getBody() const
{
    return body_;
}

void CreateSnapshotGroupRequest::setBody(const CreateSnapshotGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSnapshotGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSnapshotGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


