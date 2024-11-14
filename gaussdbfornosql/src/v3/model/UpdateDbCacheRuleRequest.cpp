

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateDbCacheRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateDbCacheRuleRequest::UpdateDbCacheRuleRequest()
{
    bodyIsSet_ = false;
}

UpdateDbCacheRuleRequest::~UpdateDbCacheRuleRequest() = default;

void UpdateDbCacheRuleRequest::validate()
{
}

web::json::value UpdateDbCacheRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDbCacheRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDbCacheRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateDbCacheRuleRequestBody UpdateDbCacheRuleRequest::getBody() const
{
    return body_;
}

void UpdateDbCacheRuleRequest::setBody(const UpdateDbCacheRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDbCacheRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDbCacheRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


