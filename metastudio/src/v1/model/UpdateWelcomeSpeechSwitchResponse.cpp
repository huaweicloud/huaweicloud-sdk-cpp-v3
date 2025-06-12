

#include "huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateWelcomeSpeechSwitchResponse::UpdateWelcomeSpeechSwitchResponse()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateWelcomeSpeechSwitchResponse::~UpdateWelcomeSpeechSwitchResponse() = default;

void UpdateWelcomeSpeechSwitchResponse::validate()
{
}

web::json::value UpdateWelcomeSpeechSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateWelcomeSpeechSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string UpdateWelcomeSpeechSwitchResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateWelcomeSpeechSwitchResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateWelcomeSpeechSwitchResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


