

#include "huaweicloud/cts/v3/model/CreateNotificationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {




CreateNotificationRequest::CreateNotificationRequest()
{
    bodyIsSet_ = false;
}

CreateNotificationRequest::~CreateNotificationRequest() = default;

void CreateNotificationRequest::validate()
{
}

web::json::value CreateNotificationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateNotificationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateNotificationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateNotificationRequestBody CreateNotificationRequest::getBody() const
{
    return body_;
}

void CreateNotificationRequest::setBody(const CreateNotificationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNotificationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNotificationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


