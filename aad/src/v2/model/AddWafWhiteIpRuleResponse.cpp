

#include "huaweicloud/aad/v2/model/AddWafWhiteIpRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




AddWafWhiteIpRuleResponse::AddWafWhiteIpRuleResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

AddWafWhiteIpRuleResponse::~AddWafWhiteIpRuleResponse() = default;

void AddWafWhiteIpRuleResponse::validate()
{
}

web::json::value AddWafWhiteIpRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddWafWhiteIpRuleResponse::fromJson(const web::json::value& val)
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


std::string AddWafWhiteIpRuleResponse::getBody() const
{
    return body_;
}

void AddWafWhiteIpRuleResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddWafWhiteIpRuleResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddWafWhiteIpRuleResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


