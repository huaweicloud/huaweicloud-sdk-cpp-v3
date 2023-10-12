

#include "huaweicloud/smn/v2/model/CreateMessageTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




CreateMessageTemplateRequest::CreateMessageTemplateRequest()
{
    bodyIsSet_ = false;
}

CreateMessageTemplateRequest::~CreateMessageTemplateRequest() = default;

void CreateMessageTemplateRequest::validate()
{
}

web::json::value CreateMessageTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateMessageTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateMessageTemplateRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateMessageTemplateRequestBody CreateMessageTemplateRequest::getBody() const
{
    return body_;
}

void CreateMessageTemplateRequest::setBody(const CreateMessageTemplateRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMessageTemplateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMessageTemplateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


