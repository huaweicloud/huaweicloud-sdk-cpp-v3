

#include "huaweicloud/cbr/v1/model/CreateCheckpointRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CreateCheckpointRequest::CreateCheckpointRequest()
{
    bodyIsSet_ = false;
}

CreateCheckpointRequest::~CreateCheckpointRequest() = default;

void CreateCheckpointRequest::validate()
{
}

web::json::value CreateCheckpointRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateCheckpointRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            VaultBackupReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


VaultBackupReq CreateCheckpointRequest::getBody() const
{
    return body_;
}

void CreateCheckpointRequest::setBody(const VaultBackupReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateCheckpointRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateCheckpointRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


