

#include "huaweicloud/aad/v2/model/AddWafWhiteIpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




AddWafWhiteIpRuleRequest::AddWafWhiteIpRuleRequest()
{
    bodyIsSet_ = false;
}

AddWafWhiteIpRuleRequest::~AddWafWhiteIpRuleRequest() = default;

void AddWafWhiteIpRuleRequest::validate()
{
}

web::json::value AddWafWhiteIpRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddWafWhiteIpRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddWafWhiteIpRuleV2RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AddWafWhiteIpRuleV2RequestBody AddWafWhiteIpRuleRequest::getBody() const
{
    return body_;
}

void AddWafWhiteIpRuleRequest::setBody(const AddWafWhiteIpRuleV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddWafWhiteIpRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddWafWhiteIpRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


