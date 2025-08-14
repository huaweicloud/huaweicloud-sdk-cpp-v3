

#include "huaweicloud/iotda/v5/model/DeleteRoutingBacklogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteRoutingBacklogPolicyResponse::DeleteRoutingBacklogPolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteRoutingBacklogPolicyResponse::~DeleteRoutingBacklogPolicyResponse() = default;

void DeleteRoutingBacklogPolicyResponse::validate()
{
}

web::json::value DeleteRoutingBacklogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteRoutingBacklogPolicyResponse::fromJson(const web::json::value& val)
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


std::string DeleteRoutingBacklogPolicyResponse::getBody() const
{
    return body_;
}

void DeleteRoutingBacklogPolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteRoutingBacklogPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteRoutingBacklogPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


