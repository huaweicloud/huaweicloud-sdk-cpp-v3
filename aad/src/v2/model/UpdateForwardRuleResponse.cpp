

#include "huaweicloud/aad/v2/model/UpdateForwardRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




UpdateForwardRuleResponse::UpdateForwardRuleResponse()
{
    bodyIsSet_ = false;
}

UpdateForwardRuleResponse::~UpdateForwardRuleResponse() = default;

void UpdateForwardRuleResponse::validate()
{
}

web::json::value UpdateForwardRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateForwardRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object UpdateForwardRuleResponse::getBody() const
{
    return body_;
}

void UpdateForwardRuleResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateForwardRuleResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateForwardRuleResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


