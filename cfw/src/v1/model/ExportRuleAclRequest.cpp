

#include "huaweicloud/cfw/v1/model/ExportRuleAclRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ExportRuleAclRequest::ExportRuleAclRequest()
{
    bodyIsSet_ = false;
}

ExportRuleAclRequest::~ExportRuleAclRequest() = default;

void ExportRuleAclRequest::validate()
{
}

web::json::value ExportRuleAclRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ExportRuleAclRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ExportRuleAclRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ExportRuleAclRequestBody ExportRuleAclRequest::getBody() const
{
    return body_;
}

void ExportRuleAclRequest::setBody(const ExportRuleAclRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExportRuleAclRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExportRuleAclRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


