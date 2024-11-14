

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDbCacheRuleRequest::DeleteDbCacheRuleRequest()
{
    bodyIsSet_ = false;
}

DeleteDbCacheRuleRequest::~DeleteDbCacheRuleRequest() = default;

void DeleteDbCacheRuleRequest::validate()
{
}

web::json::value DeleteDbCacheRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteDbCacheRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteDbCacheRuleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteDbCacheRuleRequestBody DeleteDbCacheRuleRequest::getBody() const
{
    return body_;
}

void DeleteDbCacheRuleRequest::setBody(const DeleteDbCacheRuleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteDbCacheRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteDbCacheRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


