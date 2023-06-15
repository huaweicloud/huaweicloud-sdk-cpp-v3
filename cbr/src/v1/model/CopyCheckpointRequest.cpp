

#include "huaweicloud/cbr/v1/model/CopyCheckpointRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CopyCheckpointRequest::CopyCheckpointRequest()
{
    bodyIsSet_ = false;
}

CopyCheckpointRequest::~CopyCheckpointRequest() = default;

void CopyCheckpointRequest::validate()
{
}

web::json::value CopyCheckpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CopyCheckpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CheckpointReplicateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CheckpointReplicateReq CopyCheckpointRequest::getBody() const
{
    return body_;
}

void CopyCheckpointRequest::setBody(const CheckpointReplicateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyCheckpointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyCheckpointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


