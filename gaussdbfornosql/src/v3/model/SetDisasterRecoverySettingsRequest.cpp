

#include "huaweicloud/gaussdbfornosql/v3/model/SetDisasterRecoverySettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetDisasterRecoverySettingsRequest::SetDisasterRecoverySettingsRequest()
{
    bodyIsSet_ = false;
}

SetDisasterRecoverySettingsRequest::~SetDisasterRecoverySettingsRequest() = default;

void SetDisasterRecoverySettingsRequest::validate()
{
}

web::json::value SetDisasterRecoverySettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetDisasterRecoverySettingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetDisasterRecoverySettingsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SetDisasterRecoverySettingsRequestBody SetDisasterRecoverySettingsRequest::getBody() const
{
    return body_;
}

void SetDisasterRecoverySettingsRequest::setBody(const SetDisasterRecoverySettingsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetDisasterRecoverySettingsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetDisasterRecoverySettingsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


