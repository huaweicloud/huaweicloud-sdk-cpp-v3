

#include "huaweicloud/live/v1/model/CreateTranscodingsTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateTranscodingsTemplateRequest::CreateTranscodingsTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateTranscodingsTemplateRequest::~CreateTranscodingsTemplateRequest() = default;

void CreateTranscodingsTemplateRequest::validate()
{
}

web::json::value CreateTranscodingsTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateTranscodingsTemplateRequest::fromJson(const web::json::value& val)
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

StreamTranscodingTemplate CreateTranscodingsTemplateRequest::getBody() const
{
    return body_;
}

void CreateTranscodingsTemplateRequest::setBody(const StreamTranscodingTemplate& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTranscodingsTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTranscodingsTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


