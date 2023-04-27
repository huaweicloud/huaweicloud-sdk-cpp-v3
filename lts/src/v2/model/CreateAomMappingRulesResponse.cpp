

#include "huaweicloud/lts/v2/model/CreateAomMappingRulesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateAomMappingRulesResponse::CreateAomMappingRulesResponse()
{
    bodyIsSet_ = false;
}

CreateAomMappingRulesResponse::~CreateAomMappingRulesResponse() = default;

void CreateAomMappingRulesResponse::validate()
{
}

web::json::value CreateAomMappingRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateAomMappingRulesResponse::fromJson(const web::json::value& val)
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


std::vector<AomMappingRuleResp>& CreateAomMappingRulesResponse::getBody()
{
    return body_;
}

void CreateAomMappingRulesResponse::setBody(const std::vector<AomMappingRuleResp>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAomMappingRulesResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAomMappingRulesResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


