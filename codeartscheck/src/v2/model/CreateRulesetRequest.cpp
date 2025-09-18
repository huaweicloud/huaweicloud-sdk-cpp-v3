

#include "huaweicloud/codeartscheck/v2/model/CreateRulesetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CreateRulesetRequest::CreateRulesetRequest()
{
    bodyIsSet_ = false;
}

CreateRulesetRequest::~CreateRulesetRequest() = default;

void CreateRulesetRequest::validate()
{
}

web::json::value CreateRulesetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRulesetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Ruleset refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Ruleset CreateRulesetRequest::getBody() const
{
    return body_;
}

void CreateRulesetRequest::setBody(const Ruleset& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRulesetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRulesetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


