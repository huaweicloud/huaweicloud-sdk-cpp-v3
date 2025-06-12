

#include "huaweicloud/metastudio/v1/model/TriggerProcess.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TriggerProcess::TriggerProcess()
{
    timeWindow_ = 0;
    timeWindowIsSet_ = false;
    replyMode_ = "";
    replyModeIsSet_ = false;
    layerConfigIsSet_ = false;
    extraLayerConfigIsSet_ = false;
    replyTextsIsSet_ = false;
    replyAudiosIsSet_ = false;
    replyOrder_ = "";
    replyOrderIsSet_ = false;
    replyRole_ = "";
    replyRoleIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    playType_ = "";
    playTypeIsSet_ = false;
}

TriggerProcess::~TriggerProcess() = default;

void TriggerProcess::validate()
{
}

web::json::value TriggerProcess::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeWindowIsSet_) {
        val[utility::conversions::to_string_t("time_window")] = ModelBase::toJson(timeWindow_);
    }
    if(replyModeIsSet_) {
        val[utility::conversions::to_string_t("reply_mode")] = ModelBase::toJson(replyMode_);
    }
    if(layerConfigIsSet_) {
        val[utility::conversions::to_string_t("layer_config")] = ModelBase::toJson(layerConfig_);
    }
    if(extraLayerConfigIsSet_) {
        val[utility::conversions::to_string_t("extra_layer_config")] = ModelBase::toJson(extraLayerConfig_);
    }
    if(replyTextsIsSet_) {
        val[utility::conversions::to_string_t("reply_texts")] = ModelBase::toJson(replyTexts_);
    }
    if(replyAudiosIsSet_) {
        val[utility::conversions::to_string_t("reply_audios")] = ModelBase::toJson(replyAudios_);
    }
    if(replyOrderIsSet_) {
        val[utility::conversions::to_string_t("reply_order")] = ModelBase::toJson(replyOrder_);
    }
    if(replyRoleIsSet_) {
        val[utility::conversions::to_string_t("reply_role")] = ModelBase::toJson(replyRole_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(playTypeIsSet_) {
        val[utility::conversions::to_string_t("play_type")] = ModelBase::toJson(playType_);
    }

    return val;
}
bool TriggerProcess::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time_window"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_window"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeWindow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reply_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reply_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplyMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layer_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layer_config"));
        if(!fieldValue.is_null())
        {
            SmartLayerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_layer_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_layer_config"));
        if(!fieldValue.is_null())
        {
            SmartLayerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraLayerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reply_texts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reply_texts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplyTexts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reply_audios"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reply_audios"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplyAudioInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplyAudios(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reply_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reply_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplyOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reply_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reply_role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplyRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("play_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayType(refVal);
        }
    }
    return ok;
}


int32_t TriggerProcess::getTimeWindow() const
{
    return timeWindow_;
}

void TriggerProcess::setTimeWindow(int32_t value)
{
    timeWindow_ = value;
    timeWindowIsSet_ = true;
}

bool TriggerProcess::timeWindowIsSet() const
{
    return timeWindowIsSet_;
}

void TriggerProcess::unsettimeWindow()
{
    timeWindowIsSet_ = false;
}

std::string TriggerProcess::getReplyMode() const
{
    return replyMode_;
}

void TriggerProcess::setReplyMode(const std::string& value)
{
    replyMode_ = value;
    replyModeIsSet_ = true;
}

bool TriggerProcess::replyModeIsSet() const
{
    return replyModeIsSet_;
}

void TriggerProcess::unsetreplyMode()
{
    replyModeIsSet_ = false;
}

SmartLayerConfig TriggerProcess::getLayerConfig() const
{
    return layerConfig_;
}

void TriggerProcess::setLayerConfig(const SmartLayerConfig& value)
{
    layerConfig_ = value;
    layerConfigIsSet_ = true;
}

bool TriggerProcess::layerConfigIsSet() const
{
    return layerConfigIsSet_;
}

void TriggerProcess::unsetlayerConfig()
{
    layerConfigIsSet_ = false;
}

SmartLayerConfig TriggerProcess::getExtraLayerConfig() const
{
    return extraLayerConfig_;
}

void TriggerProcess::setExtraLayerConfig(const SmartLayerConfig& value)
{
    extraLayerConfig_ = value;
    extraLayerConfigIsSet_ = true;
}

bool TriggerProcess::extraLayerConfigIsSet() const
{
    return extraLayerConfigIsSet_;
}

void TriggerProcess::unsetextraLayerConfig()
{
    extraLayerConfigIsSet_ = false;
}

std::vector<std::string>& TriggerProcess::getReplyTexts()
{
    return replyTexts_;
}

void TriggerProcess::setReplyTexts(const std::vector<std::string>& value)
{
    replyTexts_ = value;
    replyTextsIsSet_ = true;
}

bool TriggerProcess::replyTextsIsSet() const
{
    return replyTextsIsSet_;
}

void TriggerProcess::unsetreplyTexts()
{
    replyTextsIsSet_ = false;
}

std::vector<ReplyAudioInfo>& TriggerProcess::getReplyAudios()
{
    return replyAudios_;
}

void TriggerProcess::setReplyAudios(const std::vector<ReplyAudioInfo>& value)
{
    replyAudios_ = value;
    replyAudiosIsSet_ = true;
}

bool TriggerProcess::replyAudiosIsSet() const
{
    return replyAudiosIsSet_;
}

void TriggerProcess::unsetreplyAudios()
{
    replyAudiosIsSet_ = false;
}

std::string TriggerProcess::getReplyOrder() const
{
    return replyOrder_;
}

void TriggerProcess::setReplyOrder(const std::string& value)
{
    replyOrder_ = value;
    replyOrderIsSet_ = true;
}

bool TriggerProcess::replyOrderIsSet() const
{
    return replyOrderIsSet_;
}

void TriggerProcess::unsetreplyOrder()
{
    replyOrderIsSet_ = false;
}

std::string TriggerProcess::getReplyRole() const
{
    return replyRole_;
}

void TriggerProcess::setReplyRole(const std::string& value)
{
    replyRole_ = value;
    replyRoleIsSet_ = true;
}

bool TriggerProcess::replyRoleIsSet() const
{
    return replyRoleIsSet_;
}

void TriggerProcess::unsetreplyRole()
{
    replyRoleIsSet_ = false;
}

std::string TriggerProcess::getRobotId() const
{
    return robotId_;
}

void TriggerProcess::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool TriggerProcess::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void TriggerProcess::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string TriggerProcess::getPlayType() const
{
    return playType_;
}

void TriggerProcess::setPlayType(const std::string& value)
{
    playType_ = value;
    playTypeIsSet_ = true;
}

bool TriggerProcess::playTypeIsSet() const
{
    return playTypeIsSet_;
}

void TriggerProcess::unsetplayType()
{
    playTypeIsSet_ = false;
}

}
}
}
}
}


