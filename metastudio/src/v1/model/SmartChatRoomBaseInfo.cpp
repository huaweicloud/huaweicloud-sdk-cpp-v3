

#include "huaweicloud/metastudio/v1/model/SmartChatRoomBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SmartChatRoomBaseInfo::SmartChatRoomBaseInfo()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    roomName_ = "";
    roomNameIsSet_ = false;
    roomDescription_ = "";
    roomDescriptionIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    coverUrl_ = "";
    coverUrlIsSet_ = false;
    modelInfosIsSet_ = false;
    voiceConfigIsSet_ = false;
    concurrency_ = 0;
    concurrencyIsSet_ = false;
    voiceConfigListIsSet_ = false;
    defaultLanguage_ = "";
    defaultLanguageIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    exitMuteThreshold_ = 0;
    exitMuteThresholdIsSet_ = false;
}

SmartChatRoomBaseInfo::~SmartChatRoomBaseInfo() = default;

void SmartChatRoomBaseInfo::validate()
{
}

web::json::value SmartChatRoomBaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(roomNameIsSet_) {
        val[utility::conversions::to_string_t("room_name")] = ModelBase::toJson(roomName_);
    }
    if(roomDescriptionIsSet_) {
        val[utility::conversions::to_string_t("room_description")] = ModelBase::toJson(roomDescription_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(coverUrlIsSet_) {
        val[utility::conversions::to_string_t("cover_url")] = ModelBase::toJson(coverUrl_);
    }
    if(modelInfosIsSet_) {
        val[utility::conversions::to_string_t("model_infos")] = ModelBase::toJson(modelInfos_);
    }
    if(voiceConfigIsSet_) {
        val[utility::conversions::to_string_t("voice_config")] = ModelBase::toJson(voiceConfig_);
    }
    if(concurrencyIsSet_) {
        val[utility::conversions::to_string_t("concurrency")] = ModelBase::toJson(concurrency_);
    }
    if(voiceConfigListIsSet_) {
        val[utility::conversions::to_string_t("voice_config_list")] = ModelBase::toJson(voiceConfigList_);
    }
    if(defaultLanguageIsSet_) {
        val[utility::conversions::to_string_t("default_language")] = ModelBase::toJson(defaultLanguage_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(exitMuteThresholdIsSet_) {
        val[utility::conversions::to_string_t("exit_mute_threshold")] = ModelBase::toJson(exitMuteThreshold_);
    }

    return val;
}
bool SmartChatRoomBaseInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cover_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoverUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_infos"));
        if(!fieldValue.is_null())
        {
            ModelInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config"));
        if(!fieldValue.is_null())
        {
            VoiceConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<VoiceConfigRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfigList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("default_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exit_mute_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exit_mute_threshold"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExitMuteThreshold(refVal);
        }
    }
    return ok;
}


std::string SmartChatRoomBaseInfo::getRoomId() const
{
    return roomId_;
}

void SmartChatRoomBaseInfo::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool SmartChatRoomBaseInfo::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void SmartChatRoomBaseInfo::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string SmartChatRoomBaseInfo::getRoomName() const
{
    return roomName_;
}

void SmartChatRoomBaseInfo::setRoomName(const std::string& value)
{
    roomName_ = value;
    roomNameIsSet_ = true;
}

bool SmartChatRoomBaseInfo::roomNameIsSet() const
{
    return roomNameIsSet_;
}

void SmartChatRoomBaseInfo::unsetroomName()
{
    roomNameIsSet_ = false;
}

std::string SmartChatRoomBaseInfo::getRoomDescription() const
{
    return roomDescription_;
}

void SmartChatRoomBaseInfo::setRoomDescription(const std::string& value)
{
    roomDescription_ = value;
    roomDescriptionIsSet_ = true;
}

bool SmartChatRoomBaseInfo::roomDescriptionIsSet() const
{
    return roomDescriptionIsSet_;
}

void SmartChatRoomBaseInfo::unsetroomDescription()
{
    roomDescriptionIsSet_ = false;
}

std::string SmartChatRoomBaseInfo::getRobotId() const
{
    return robotId_;
}

void SmartChatRoomBaseInfo::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool SmartChatRoomBaseInfo::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void SmartChatRoomBaseInfo::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string SmartChatRoomBaseInfo::getCoverUrl() const
{
    return coverUrl_;
}

void SmartChatRoomBaseInfo::setCoverUrl(const std::string& value)
{
    coverUrl_ = value;
    coverUrlIsSet_ = true;
}

bool SmartChatRoomBaseInfo::coverUrlIsSet() const
{
    return coverUrlIsSet_;
}

void SmartChatRoomBaseInfo::unsetcoverUrl()
{
    coverUrlIsSet_ = false;
}

ModelInfo SmartChatRoomBaseInfo::getModelInfos() const
{
    return modelInfos_;
}

void SmartChatRoomBaseInfo::setModelInfos(const ModelInfo& value)
{
    modelInfos_ = value;
    modelInfosIsSet_ = true;
}

bool SmartChatRoomBaseInfo::modelInfosIsSet() const
{
    return modelInfosIsSet_;
}

void SmartChatRoomBaseInfo::unsetmodelInfos()
{
    modelInfosIsSet_ = false;
}

VoiceConfig SmartChatRoomBaseInfo::getVoiceConfig() const
{
    return voiceConfig_;
}

void SmartChatRoomBaseInfo::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool SmartChatRoomBaseInfo::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void SmartChatRoomBaseInfo::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

int32_t SmartChatRoomBaseInfo::getConcurrency() const
{
    return concurrency_;
}

void SmartChatRoomBaseInfo::setConcurrency(int32_t value)
{
    concurrency_ = value;
    concurrencyIsSet_ = true;
}

bool SmartChatRoomBaseInfo::concurrencyIsSet() const
{
    return concurrencyIsSet_;
}

void SmartChatRoomBaseInfo::unsetconcurrency()
{
    concurrencyIsSet_ = false;
}

std::vector<VoiceConfigRsp>& SmartChatRoomBaseInfo::getVoiceConfigList()
{
    return voiceConfigList_;
}

void SmartChatRoomBaseInfo::setVoiceConfigList(const std::vector<VoiceConfigRsp>& value)
{
    voiceConfigList_ = value;
    voiceConfigListIsSet_ = true;
}

bool SmartChatRoomBaseInfo::voiceConfigListIsSet() const
{
    return voiceConfigListIsSet_;
}

void SmartChatRoomBaseInfo::unsetvoiceConfigList()
{
    voiceConfigListIsSet_ = false;
}

std::string SmartChatRoomBaseInfo::getDefaultLanguage() const
{
    return defaultLanguage_;
}

void SmartChatRoomBaseInfo::setDefaultLanguage(const std::string& value)
{
    defaultLanguage_ = value;
    defaultLanguageIsSet_ = true;
}

bool SmartChatRoomBaseInfo::defaultLanguageIsSet() const
{
    return defaultLanguageIsSet_;
}

void SmartChatRoomBaseInfo::unsetdefaultLanguage()
{
    defaultLanguageIsSet_ = false;
}

std::string SmartChatRoomBaseInfo::getCreateTime() const
{
    return createTime_;
}

void SmartChatRoomBaseInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SmartChatRoomBaseInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SmartChatRoomBaseInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string SmartChatRoomBaseInfo::getUpdateTime() const
{
    return updateTime_;
}

void SmartChatRoomBaseInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool SmartChatRoomBaseInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void SmartChatRoomBaseInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int32_t SmartChatRoomBaseInfo::getExitMuteThreshold() const
{
    return exitMuteThreshold_;
}

void SmartChatRoomBaseInfo::setExitMuteThreshold(int32_t value)
{
    exitMuteThreshold_ = value;
    exitMuteThresholdIsSet_ = true;
}

bool SmartChatRoomBaseInfo::exitMuteThresholdIsSet() const
{
    return exitMuteThresholdIsSet_;
}

void SmartChatRoomBaseInfo::unsetexitMuteThreshold()
{
    exitMuteThresholdIsSet_ = false;
}

}
}
}
}
}


