

#include "huaweicloud/mpc/v1/model/UpdateTransTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




UpdateTransTemplateRequest::UpdateTransTemplateRequest()
{
    bodyIsSet_ = false;
}

UpdateTransTemplateRequest::~UpdateTransTemplateRequest() = default;

void UpdateTransTemplateRequest::validate()
{
}

web::json::value UpdateTransTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateTransTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyTransTemplateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ModifyTransTemplateReq UpdateTransTemplateRequest::getBody() const
{
    return body_;
}

void UpdateTransTemplateRequest::setBody(const ModifyTransTemplateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTransTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTransTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


