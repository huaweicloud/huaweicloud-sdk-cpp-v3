

#include "huaweicloud/antiddos/v1/model/UpdateAlertConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateAlertConfigRequest::UpdateAlertConfigRequest()
{
    bodyIsSet_ = false;
}

UpdateAlertConfigRequest::~UpdateAlertConfigRequest() = default;

void UpdateAlertConfigRequest::validate()
{
}

web::json::value UpdateAlertConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAlertConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateAlertConfigRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateAlertConfigRequestBody UpdateAlertConfigRequest::getBody() const
{
    return body_;
}

void UpdateAlertConfigRequest::setBody(const UpdateAlertConfigRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAlertConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAlertConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


