

#include "huaweicloud/metastudio/v1/model/PlayPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PlayPolicy::PlayPolicy()
{
    repeatCount_ = 0;
    repeatCountIsSet_ = false;
    autoPlayScript_ = false;
    autoPlayScriptIsSet_ = false;
    playMode_ = "";
    playModeIsSet_ = false;
    randomPlayMode_ = "";
    randomPlayModeIsSet_ = false;
    needIndependentCaptureClient_ = false;
    needIndependentCaptureClientIsSet_ = false;
    liveExitConfigIsSet_ = false;
    isRewriteDelay_ = false;
    isRewriteDelayIsSet_ = false;
}

PlayPolicy::~PlayPolicy() = default;

void PlayPolicy::validate()
{
}

web::json::value PlayPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repeatCountIsSet_) {
        val[utility::conversions::to_string_t("repeat_count")] = ModelBase::toJson(repeatCount_);
    }
    if(autoPlayScriptIsSet_) {
        val[utility::conversions::to_string_t("auto_play_script")] = ModelBase::toJson(autoPlayScript_);
    }
    if(playModeIsSet_) {
        val[utility::conversions::to_string_t("play_mode")] = ModelBase::toJson(playMode_);
    }
    if(randomPlayModeIsSet_) {
        val[utility::conversions::to_string_t("random_play_mode")] = ModelBase::toJson(randomPlayMode_);
    }
    if(needIndependentCaptureClientIsSet_) {
        val[utility::conversions::to_string_t("need_independent_capture_client")] = ModelBase::toJson(needIndependentCaptureClient_);
    }
    if(liveExitConfigIsSet_) {
        val[utility::conversions::to_string_t("live_exit_config")] = ModelBase::toJson(liveExitConfig_);
    }
    if(isRewriteDelayIsSet_) {
        val[utility::conversions::to_string_t("is_rewrite_delay")] = ModelBase::toJson(isRewriteDelay_);
    }

    return val;
}
bool PlayPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repeat_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeat_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_play_script"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_play_script"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoPlayScript(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("play_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("random_play_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("random_play_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRandomPlayMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_independent_capture_client"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_independent_capture_client"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedIndependentCaptureClient(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("live_exit_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("live_exit_config"));
        if(!fieldValue.is_null())
        {
            LiveExitConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveExitConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_rewrite_delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_rewrite_delay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRewriteDelay(refVal);
        }
    }
    return ok;
}


int32_t PlayPolicy::getRepeatCount() const
{
    return repeatCount_;
}

void PlayPolicy::setRepeatCount(int32_t value)
{
    repeatCount_ = value;
    repeatCountIsSet_ = true;
}

bool PlayPolicy::repeatCountIsSet() const
{
    return repeatCountIsSet_;
}

void PlayPolicy::unsetrepeatCount()
{
    repeatCountIsSet_ = false;
}

bool PlayPolicy::isAutoPlayScript() const
{
    return autoPlayScript_;
}

void PlayPolicy::setAutoPlayScript(bool value)
{
    autoPlayScript_ = value;
    autoPlayScriptIsSet_ = true;
}

bool PlayPolicy::autoPlayScriptIsSet() const
{
    return autoPlayScriptIsSet_;
}

void PlayPolicy::unsetautoPlayScript()
{
    autoPlayScriptIsSet_ = false;
}

std::string PlayPolicy::getPlayMode() const
{
    return playMode_;
}

void PlayPolicy::setPlayMode(const std::string& value)
{
    playMode_ = value;
    playModeIsSet_ = true;
}

bool PlayPolicy::playModeIsSet() const
{
    return playModeIsSet_;
}

void PlayPolicy::unsetplayMode()
{
    playModeIsSet_ = false;
}

std::string PlayPolicy::getRandomPlayMode() const
{
    return randomPlayMode_;
}

void PlayPolicy::setRandomPlayMode(const std::string& value)
{
    randomPlayMode_ = value;
    randomPlayModeIsSet_ = true;
}

bool PlayPolicy::randomPlayModeIsSet() const
{
    return randomPlayModeIsSet_;
}

void PlayPolicy::unsetrandomPlayMode()
{
    randomPlayModeIsSet_ = false;
}

bool PlayPolicy::isNeedIndependentCaptureClient() const
{
    return needIndependentCaptureClient_;
}

void PlayPolicy::setNeedIndependentCaptureClient(bool value)
{
    needIndependentCaptureClient_ = value;
    needIndependentCaptureClientIsSet_ = true;
}

bool PlayPolicy::needIndependentCaptureClientIsSet() const
{
    return needIndependentCaptureClientIsSet_;
}

void PlayPolicy::unsetneedIndependentCaptureClient()
{
    needIndependentCaptureClientIsSet_ = false;
}

LiveExitConfig PlayPolicy::getLiveExitConfig() const
{
    return liveExitConfig_;
}

void PlayPolicy::setLiveExitConfig(const LiveExitConfig& value)
{
    liveExitConfig_ = value;
    liveExitConfigIsSet_ = true;
}

bool PlayPolicy::liveExitConfigIsSet() const
{
    return liveExitConfigIsSet_;
}

void PlayPolicy::unsetliveExitConfig()
{
    liveExitConfigIsSet_ = false;
}

bool PlayPolicy::isIsRewriteDelay() const
{
    return isRewriteDelay_;
}

void PlayPolicy::setIsRewriteDelay(bool value)
{
    isRewriteDelay_ = value;
    isRewriteDelayIsSet_ = true;
}

bool PlayPolicy::isRewriteDelayIsSet() const
{
    return isRewriteDelayIsSet_;
}

void PlayPolicy::unsetisRewriteDelay()
{
    isRewriteDelayIsSet_ = false;
}

}
}
}
}
}


