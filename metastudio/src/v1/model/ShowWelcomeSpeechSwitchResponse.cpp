

#include "huaweicloud/metastudio/v1/model/ShowWelcomeSpeechSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowWelcomeSpeechSwitchResponse::ShowWelcomeSpeechSwitchResponse()
{
    enableWelcomeSpeech_ = false;
    enableWelcomeSpeechIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowWelcomeSpeechSwitchResponse::~ShowWelcomeSpeechSwitchResponse() = default;

void ShowWelcomeSpeechSwitchResponse::validate()
{
}

web::json::value ShowWelcomeSpeechSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enableWelcomeSpeechIsSet_) {
        val[utility::conversions::to_string_t("enable_welcome_speech")] = ModelBase::toJson(enableWelcomeSpeech_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowWelcomeSpeechSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enable_welcome_speech"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_welcome_speech"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableWelcomeSpeech(refVal);
        }
    }
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


bool ShowWelcomeSpeechSwitchResponse::isEnableWelcomeSpeech() const
{
    return enableWelcomeSpeech_;
}

void ShowWelcomeSpeechSwitchResponse::setEnableWelcomeSpeech(bool value)
{
    enableWelcomeSpeech_ = value;
    enableWelcomeSpeechIsSet_ = true;
}

bool ShowWelcomeSpeechSwitchResponse::enableWelcomeSpeechIsSet() const
{
    return enableWelcomeSpeechIsSet_;
}

void ShowWelcomeSpeechSwitchResponse::unsetenableWelcomeSpeech()
{
    enableWelcomeSpeechIsSet_ = false;
}

std::string ShowWelcomeSpeechSwitchResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowWelcomeSpeechSwitchResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowWelcomeSpeechSwitchResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowWelcomeSpeechSwitchResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


