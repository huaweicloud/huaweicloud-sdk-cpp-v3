

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDbCacheRuleRequest::CreateDbCacheRuleRequest()
{
    bodyIsSet_ = false;
}

CreateDbCacheRuleRequest::~CreateDbCacheRuleRequest() = default;

void CreateDbCacheRuleRequest::validate()
{
}

web::json::value CreateDbCacheRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDbCacheRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDbCacheRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateDbCacheRuleRequestBody CreateDbCacheRuleRequest::getBody() const
{
    return body_;
}

void CreateDbCacheRuleRequest::setBody(const CreateDbCacheRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDbCacheRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDbCacheRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


