

#include "huaweicloud/live/v1/model/UpdateTranscodingsTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateTranscodingsTemplateRequest::UpdateTranscodingsTemplateRequest()
{
    bodyIsSet_ = false;
}

UpdateTranscodingsTemplateRequest::~UpdateTranscodingsTemplateRequest() = default;

void UpdateTranscodingsTemplateRequest::validate()
{
}

web::json::value UpdateTranscodingsTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateTranscodingsTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            StreamTranscodingTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


StreamTranscodingTemplate UpdateTranscodingsTemplateRequest::getBody() const
{
    return body_;
}

void UpdateTranscodingsTemplateRequest::setBody(const StreamTranscodingTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTranscodingsTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTranscodingsTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


