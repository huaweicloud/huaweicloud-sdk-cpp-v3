

#include "huaweicloud/iotda/v5/model/DeleteRoutingFlowControlPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRoutingFlowControlPolicyResponse::DeleteRoutingFlowControlPolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteRoutingFlowControlPolicyResponse::~DeleteRoutingFlowControlPolicyResponse() = default;

void DeleteRoutingFlowControlPolicyResponse::validate()
{
}

web::json::value DeleteRoutingFlowControlPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteRoutingFlowControlPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteRoutingFlowControlPolicyResponse::getBody() const
{
    return body_;
}

void DeleteRoutingFlowControlPolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRoutingFlowControlPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRoutingFlowControlPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


