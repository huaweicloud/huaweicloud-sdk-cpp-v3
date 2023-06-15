

#include "huaweicloud/cbr/v1/model/ImportCheckpointRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ImportCheckpointRequest::ImportCheckpointRequest()
{
    bodyIsSet_ = false;
}

ImportCheckpointRequest::~ImportCheckpointRequest() = default;

void ImportCheckpointRequest::validate()
{
}

web::json::value ImportCheckpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ImportCheckpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SyncReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SyncReq ImportCheckpointRequest::getBody() const
{
    return body_;
}

void ImportCheckpointRequest::setBody(const SyncReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportCheckpointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportCheckpointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


