

#include "huaweicloud/tms/v1/model/CreateAssociatedResourceRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




CreateAssociatedResourceRulesRequest::CreateAssociatedResourceRulesRequest()
{
    bodyIsSet_ = false;
}

CreateAssociatedResourceRulesRequest::~CreateAssociatedResourceRulesRequest() = default;

void CreateAssociatedResourceRulesRequest::validate()
{
}

web::json::value CreateAssociatedResourceRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateAssociatedResourceRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReqCreateAssociatedResourceRules refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ReqCreateAssociatedResourceRules CreateAssociatedResourceRulesRequest::getBody() const
{
    return body_;
}

void CreateAssociatedResourceRulesRequest::setBody(const ReqCreateAssociatedResourceRules& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateAssociatedResourceRulesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateAssociatedResourceRulesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


