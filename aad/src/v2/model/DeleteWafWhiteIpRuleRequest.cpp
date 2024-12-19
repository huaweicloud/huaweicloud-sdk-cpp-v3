

#include "huaweicloud/aad/v2/model/DeleteWafWhiteIpRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




DeleteWafWhiteIpRuleRequest::DeleteWafWhiteIpRuleRequest()
{
    bodyIsSet_ = false;
}

DeleteWafWhiteIpRuleRequest::~DeleteWafWhiteIpRuleRequest() = default;

void DeleteWafWhiteIpRuleRequest::validate()
{
}

web::json::value DeleteWafWhiteIpRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteWafWhiteIpRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteWafWhiteIpRuleV2RequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteWafWhiteIpRuleV2RequestBody DeleteWafWhiteIpRuleRequest::getBody() const
{
    return body_;
}

void DeleteWafWhiteIpRuleRequest::setBody(const DeleteWafWhiteIpRuleV2RequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteWafWhiteIpRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteWafWhiteIpRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


