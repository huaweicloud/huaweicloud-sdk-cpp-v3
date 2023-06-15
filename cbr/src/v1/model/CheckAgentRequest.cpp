

#include "huaweicloud/cbr/v1/model/CheckAgentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




CheckAgentRequest::CheckAgentRequest()
{
    bodyIsSet_ = false;
}

CheckAgentRequest::~CheckAgentRequest() = default;

void CheckAgentRequest::validate()
{
}

web::json::value CheckAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CheckAgentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ProtectableAgentReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ProtectableAgentReq CheckAgentRequest::getBody() const
{
    return body_;
}

void CheckAgentRequest::setBody(const ProtectableAgentReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CheckAgentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CheckAgentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


