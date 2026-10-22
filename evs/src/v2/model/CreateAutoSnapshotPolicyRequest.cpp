

#include "huaweicloud/evs/v2/model/CreateAutoSnapshotPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CreateAutoSnapshotPolicyRequest::CreateAutoSnapshotPolicyRequest()
{
    bodyIsSet_ = false;
}

CreateAutoSnapshotPolicyRequest::~CreateAutoSnapshotPolicyRequest() = default;

void CreateAutoSnapshotPolicyRequest::validate()
{
}

web::json::value CreateAutoSnapshotPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAutoSnapshotPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSnapshotPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateSnapshotPolicyRequestBody CreateAutoSnapshotPolicyRequest::getBody() const
{
    return body_;
}

void CreateAutoSnapshotPolicyRequest::setBody(const CreateSnapshotPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAutoSnapshotPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAutoSnapshotPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


