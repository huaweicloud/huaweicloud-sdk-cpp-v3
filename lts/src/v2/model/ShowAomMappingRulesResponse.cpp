

#include "huaweicloud/lts/v2/model/ShowAomMappingRulesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowAomMappingRulesResponse::ShowAomMappingRulesResponse()
{
    bodyIsSet_ = false;
}

ShowAomMappingRulesResponse::~ShowAomMappingRulesResponse() = default;

void ShowAomMappingRulesResponse::validate()
{
}

web::json::value ShowAomMappingRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ShowAomMappingRulesResponse::fromJson(const web::json::value& val)
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


std::vector<AomMappingRuleResp>& ShowAomMappingRulesResponse::getBody()
{
    return body_;
}

void ShowAomMappingRulesResponse::setBody(const std::vector<AomMappingRuleResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowAomMappingRulesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowAomMappingRulesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


