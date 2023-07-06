

#include "huaweicloud/mpc/v1/model/InputSetting.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




InputSetting::InputSetting()
{
    inputIsSet_ = false;
    paneId_ = "";
    paneIdIsSet_ = false;
    audioPolicy_ = "";
    audioPolicyIsSet_ = false;
}

InputSetting::~InputSetting() = default;

void InputSetting::validate()
{
}

web::json::value InputSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(paneIdIsSet_) {
        val[utility::conversions::to_string_t("pane_id")] = ModelBase::toJson(paneId_);
    }
    if(audioPolicyIsSet_) {
        val[utility::conversions::to_string_t("audio_policy")] = ModelBase::toJson(audioPolicy_);
    }

    return val;
}

bool InputSetting::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pane_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pane_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioPolicy(refVal);
        }
    }
    return ok;
}

ObsObjInfo InputSetting::getInput() const
{
    return input_;
}

void InputSetting::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool InputSetting::inputIsSet() const
{
    return inputIsSet_;
}

void InputSetting::unsetinput()
{
    inputIsSet_ = false;
}

std::string InputSetting::getPaneId() const
{
    return paneId_;
}

void InputSetting::setPaneId(const std::string& value)
{
    paneId_ = value;
    paneIdIsSet_ = true;
}

bool InputSetting::paneIdIsSet() const
{
    return paneIdIsSet_;
}

void InputSetting::unsetpaneId()
{
    paneIdIsSet_ = false;
}

std::string InputSetting::getAudioPolicy() const
{
    return audioPolicy_;
}

void InputSetting::setAudioPolicy(const std::string& value)
{
    audioPolicy_ = value;
    audioPolicyIsSet_ = true;
}

bool InputSetting::audioPolicyIsSet() const
{
    return audioPolicyIsSet_;
}

void InputSetting::unsetaudioPolicy()
{
    audioPolicyIsSet_ = false;
}

}
}
}
}
}


