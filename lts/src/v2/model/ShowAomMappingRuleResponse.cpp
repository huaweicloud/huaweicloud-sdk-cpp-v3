

#include "huaweicloud/lts/v2/model/ShowAomMappingRuleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowAomMappingRuleResponse::ShowAomMappingRuleResponse()
{
    bodyIsSet_ = false;
}

ShowAomMappingRuleResponse::~ShowAomMappingRuleResponse() = default;

void ShowAomMappingRuleResponse::validate()
{
}

web::json::value ShowAomMappingRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ShowAomMappingRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<AomMappingRuleResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::vector<AomMappingRuleResp>& ShowAomMappingRuleResponse::getBody()
{
    return body_;
}

void ShowAomMappingRuleResponse::setBody(const std::vector<AomMappingRuleResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowAomMappingRuleResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowAomMappingRuleResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


