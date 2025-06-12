

#include "huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateWelcomeSpeechReq::UpdateWelcomeSpeechReq()
{
    welcomeSpeech_ = "";
    welcomeSpeechIsSet_ = false;
    enableWelcomeSpeech_ = false;
    enableWelcomeSpeechIsSet_ = false;
}

UpdateWelcomeSpeechReq::~UpdateWelcomeSpeechReq() = default;

void UpdateWelcomeSpeechReq::validate()
{
}

web::json::value UpdateWelcomeSpeechReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(welcomeSpeechIsSet_) {
        val[utility::conversions::to_string_t("welcome_speech")] = ModelBase::toJson(welcomeSpeech_);
    }
    if(enableWelcomeSpeechIsSet_) {
        val[utility::conversions::to_string_t("enable_welcome_speech")] = ModelBase::toJson(enableWelcomeSpeech_);
    }

    return val;
}
bool UpdateWelcomeSpeechReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("welcome_speech"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("welcome_speech"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWelcomeSpeech(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_welcome_speech"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_welcome_speech"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableWelcomeSpeech(refVal);
        }
    }
    return ok;
}


std::string UpdateWelcomeSpeechReq::getWelcomeSpeech() const
{
    return welcomeSpeech_;
}

void UpdateWelcomeSpeechReq::setWelcomeSpeech(const std::string& value)
{
    welcomeSpeech_ = value;
    welcomeSpeechIsSet_ = true;
}

bool UpdateWelcomeSpeechReq::welcomeSpeechIsSet() const
{
    return welcomeSpeechIsSet_;
}

void UpdateWelcomeSpeechReq::unsetwelcomeSpeech()
{
    welcomeSpeechIsSet_ = false;
}

bool UpdateWelcomeSpeechReq::isEnableWelcomeSpeech() const
{
    return enableWelcomeSpeech_;
}

void UpdateWelcomeSpeechReq::setEnableWelcomeSpeech(bool value)
{
    enableWelcomeSpeech_ = value;
    enableWelcomeSpeechIsSet_ = true;
}

bool UpdateWelcomeSpeechReq::enableWelcomeSpeechIsSet() const
{
    return enableWelcomeSpeechIsSet_;
}

void UpdateWelcomeSpeechReq::unsetenableWelcomeSpeech()
{
    enableWelcomeSpeechIsSet_ = false;
}

}
}
}
}
}


