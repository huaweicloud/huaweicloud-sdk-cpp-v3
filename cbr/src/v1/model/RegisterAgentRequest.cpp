

#include "huaweicloud/cbr/v1/model/RegisterAgentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




RegisterAgentRequest::RegisterAgentRequest()
{
    bodyIsSet_ = false;
}

RegisterAgentRequest::~RegisterAgentRequest() = default;

void RegisterAgentRequest::validate()
{
}

web::json::value RegisterAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool RegisterAgentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AgentRegisterReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AgentRegisterReq RegisterAgentRequest::getBody() const
{
    return body_;
}

void RegisterAgentRequest::setBody(const AgentRegisterReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterAgentRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterAgentRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


