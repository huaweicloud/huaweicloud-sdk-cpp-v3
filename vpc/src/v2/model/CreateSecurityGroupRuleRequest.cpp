

#include "huaweicloud/vpc/v2/model/CreateSecurityGroupRuleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupRuleRequest::CreateSecurityGroupRuleRequest()
{
    bodyIsSet_ = false;
}

CreateSecurityGroupRuleRequest::~CreateSecurityGroupRuleRequest() = default;

void CreateSecurityGroupRuleRequest::validate()
{
}

web::json::value CreateSecurityGroupRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateSecurityGroupRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateSecurityGroupRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateSecurityGroupRuleRequestBody CreateSecurityGroupRuleRequest::getBody() const
{
    return body_;
}

void CreateSecurityGroupRuleRequest::setBody(const CreateSecurityGroupRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateSecurityGroupRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateSecurityGroupRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


