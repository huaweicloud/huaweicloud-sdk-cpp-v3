

#include "huaweicloud/meeting/v1/model/SetWebHookConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetWebHookConfigRequest::SetWebHookConfigRequest()
{
    bodyIsSet_ = false;
}

SetWebHookConfigRequest::~SetWebHookConfigRequest() = default;

void SetWebHookConfigRequest::validate()
{
}

web::json::value SetWebHookConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetWebHookConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WebHookConfigRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


WebHookConfigRequest SetWebHookConfigRequest::getBody() const
{
    return body_;
}

void SetWebHookConfigRequest::setBody(const WebHookConfigRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetWebHookConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetWebHookConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


