

#include "huaweicloud/lts/v2/model/UpdateStructTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateStructTemplateRequest::UpdateStructTemplateRequest()
{
    bodyIsSet_ = false;
}

UpdateStructTemplateRequest::~UpdateStructTemplateRequest() = default;

void UpdateStructTemplateRequest::validate()
{
}

web::json::value UpdateStructTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateStructTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LtsStructTemplateInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


LtsStructTemplateInfo UpdateStructTemplateRequest::getBody() const
{
    return body_;
}

void UpdateStructTemplateRequest::setBody(const LtsStructTemplateInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStructTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStructTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


