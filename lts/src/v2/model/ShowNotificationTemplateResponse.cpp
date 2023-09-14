

#include "huaweicloud/lts/v2/model/ShowNotificationTemplateResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowNotificationTemplateResponse::ShowNotificationTemplateResponse()
{
    bodyIsSet_ = false;
}

ShowNotificationTemplateResponse::~ShowNotificationTemplateResponse() = default;

void ShowNotificationTemplateResponse::validate()
{
}

web::json::value ShowNotificationTemplateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ShowNotificationTemplateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

Object ShowNotificationTemplateResponse::getBody() const
{
    return body_;
}

void ShowNotificationTemplateResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowNotificationTemplateResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowNotificationTemplateResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


