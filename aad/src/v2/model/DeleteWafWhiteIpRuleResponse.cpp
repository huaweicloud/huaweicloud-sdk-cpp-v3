

#include "huaweicloud/aad/v2/model/DeleteWafWhiteIpRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




DeleteWafWhiteIpRuleResponse::DeleteWafWhiteIpRuleResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

DeleteWafWhiteIpRuleResponse::~DeleteWafWhiteIpRuleResponse() = default;

void DeleteWafWhiteIpRuleResponse::validate()
{
}

web::json::value DeleteWafWhiteIpRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteWafWhiteIpRuleResponse::fromJson(const web::json::value& val)
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


std::string DeleteWafWhiteIpRuleResponse::getBody() const
{
    return body_;
}

void DeleteWafWhiteIpRuleResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteWafWhiteIpRuleResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteWafWhiteIpRuleResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


