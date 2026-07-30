

#include "huaweicloud/tms/v1/model/UpdateAssociatedResourceRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




UpdateAssociatedResourceRulesRequest::UpdateAssociatedResourceRulesRequest()
{
    bodyIsSet_ = false;
}

UpdateAssociatedResourceRulesRequest::~UpdateAssociatedResourceRulesRequest() = default;

void UpdateAssociatedResourceRulesRequest::validate()
{
}

web::json::value UpdateAssociatedResourceRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAssociatedResourceRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReqUpdateAssociatedResourceRules refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ReqUpdateAssociatedResourceRules UpdateAssociatedResourceRulesRequest::getBody() const
{
    return body_;
}

void UpdateAssociatedResourceRulesRequest::setBody(const ReqUpdateAssociatedResourceRules& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAssociatedResourceRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAssociatedResourceRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


