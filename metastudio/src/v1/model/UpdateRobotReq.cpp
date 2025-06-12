

#include "huaweicloud/metastudio/v1/model/UpdateRobotReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateRobotReq::UpdateRobotReq()
{
    name_ = "";
    nameIsSet_ = false;
    appType_ = 0;
    appTypeIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    robotTypeIsSet_ = false;
    languageIsSet_ = false;
    tailSilenceTime_ = 0;
    tailSilenceTimeIsSet_ = false;
    enableQuestionAudit_ = false;
    enableQuestionAuditIsSet_ = false;
    huaweiEiCbsIsSet_ = false;
    iflytekAiuiConfigIsSet_ = false;
    iflytekSparkIsSet_ = false;
    thirdPartyModelConfigIsSet_ = false;
    mobvoiConfigIsSet_ = false;
    wiseBrainConfigIsSet_ = false;
}

UpdateRobotReq::~UpdateRobotReq() = default;

void UpdateRobotReq::validate()
{
}

web::json::value UpdateRobotReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(robotTypeIsSet_) {
        val[utility::conversions::to_string_t("robot_type")] = ModelBase::toJson(robotType_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(tailSilenceTimeIsSet_) {
        val[utility::conversions::to_string_t("tail_silence_time")] = ModelBase::toJson(tailSilenceTime_);
    }
    if(enableQuestionAuditIsSet_) {
        val[utility::conversions::to_string_t("enable_question_audit")] = ModelBase::toJson(enableQuestionAudit_);
    }
    if(huaweiEiCbsIsSet_) {
        val[utility::conversions::to_string_t("huawei_ei_cbs")] = ModelBase::toJson(huaweiEiCbs_);
    }
    if(iflytekAiuiConfigIsSet_) {
        val[utility::conversions::to_string_t("iflytek_aiui_config")] = ModelBase::toJson(iflytekAiuiConfig_);
    }
    if(iflytekSparkIsSet_) {
        val[utility::conversions::to_string_t("iflytek_spark")] = ModelBase::toJson(iflytekSpark_);
    }
    if(thirdPartyModelConfigIsSet_) {
        val[utility::conversions::to_string_t("third_party_model_config")] = ModelBase::toJson(thirdPartyModelConfig_);
    }
    if(mobvoiConfigIsSet_) {
        val[utility::conversions::to_string_t("mobvoi_config")] = ModelBase::toJson(mobvoiConfig_);
    }
    if(wiseBrainConfigIsSet_) {
        val[utility::conversions::to_string_t("wise_brain_config")] = ModelBase::toJson(wiseBrainConfig_);
    }

    return val;
}
bool UpdateRobotReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("robot_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_type"));
        if(!fieldValue.is_null())
        {
            RobotTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tail_silence_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tail_silence_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTailSilenceTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_question_audit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_question_audit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableQuestionAudit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("huawei_ei_cbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("huawei_ei_cbs"));
        if(!fieldValue.is_null())
        {
            HuaweiEiCbs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHuaweiEiCbs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iflytek_aiui_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iflytek_aiui_config"));
        if(!fieldValue.is_null())
        {
            IflytekAiuiConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIflytekAiuiConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iflytek_spark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iflytek_spark"));
        if(!fieldValue.is_null())
        {
            IflytekSpark refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIflytekSpark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("third_party_model_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("third_party_model_config"));
        if(!fieldValue.is_null())
        {
            ThirdPartyModelConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThirdPartyModelConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mobvoi_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mobvoi_config"));
        if(!fieldValue.is_null())
        {
            MobvoiConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMobvoiConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wise_brain_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wise_brain_config"));
        if(!fieldValue.is_null())
        {
            WiseBrainConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWiseBrainConfig(refVal);
        }
    }
    return ok;
}


std::string UpdateRobotReq::getName() const
{
    return name_;
}

void UpdateRobotReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRobotReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRobotReq::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateRobotReq::getAppType() const
{
    return appType_;
}

void UpdateRobotReq::setAppType(int32_t value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool UpdateRobotReq::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void UpdateRobotReq::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string UpdateRobotReq::getRoomId() const
{
    return roomId_;
}

void UpdateRobotReq::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool UpdateRobotReq::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void UpdateRobotReq::unsetroomId()
{
    roomIdIsSet_ = false;
}

RobotTypeEnum UpdateRobotReq::getRobotType() const
{
    return robotType_;
}

void UpdateRobotReq::setRobotType(const RobotTypeEnum& value)
{
    robotType_ = value;
    robotTypeIsSet_ = true;
}

bool UpdateRobotReq::robotTypeIsSet() const
{
    return robotTypeIsSet_;
}

void UpdateRobotReq::unsetrobotType()
{
    robotTypeIsSet_ = false;
}

LanguageEnum UpdateRobotReq::getLanguage() const
{
    return language_;
}

void UpdateRobotReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateRobotReq::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateRobotReq::unsetlanguage()
{
    languageIsSet_ = false;
}

int32_t UpdateRobotReq::getTailSilenceTime() const
{
    return tailSilenceTime_;
}

void UpdateRobotReq::setTailSilenceTime(int32_t value)
{
    tailSilenceTime_ = value;
    tailSilenceTimeIsSet_ = true;
}

bool UpdateRobotReq::tailSilenceTimeIsSet() const
{
    return tailSilenceTimeIsSet_;
}

void UpdateRobotReq::unsettailSilenceTime()
{
    tailSilenceTimeIsSet_ = false;
}

bool UpdateRobotReq::isEnableQuestionAudit() const
{
    return enableQuestionAudit_;
}

void UpdateRobotReq::setEnableQuestionAudit(bool value)
{
    enableQuestionAudit_ = value;
    enableQuestionAuditIsSet_ = true;
}

bool UpdateRobotReq::enableQuestionAuditIsSet() const
{
    return enableQuestionAuditIsSet_;
}

void UpdateRobotReq::unsetenableQuestionAudit()
{
    enableQuestionAuditIsSet_ = false;
}

HuaweiEiCbs UpdateRobotReq::getHuaweiEiCbs() const
{
    return huaweiEiCbs_;
}

void UpdateRobotReq::setHuaweiEiCbs(const HuaweiEiCbs& value)
{
    huaweiEiCbs_ = value;
    huaweiEiCbsIsSet_ = true;
}

bool UpdateRobotReq::huaweiEiCbsIsSet() const
{
    return huaweiEiCbsIsSet_;
}

void UpdateRobotReq::unsethuaweiEiCbs()
{
    huaweiEiCbsIsSet_ = false;
}

IflytekAiuiConfig UpdateRobotReq::getIflytekAiuiConfig() const
{
    return iflytekAiuiConfig_;
}

void UpdateRobotReq::setIflytekAiuiConfig(const IflytekAiuiConfig& value)
{
    iflytekAiuiConfig_ = value;
    iflytekAiuiConfigIsSet_ = true;
}

bool UpdateRobotReq::iflytekAiuiConfigIsSet() const
{
    return iflytekAiuiConfigIsSet_;
}

void UpdateRobotReq::unsetiflytekAiuiConfig()
{
    iflytekAiuiConfigIsSet_ = false;
}

IflytekSpark UpdateRobotReq::getIflytekSpark() const
{
    return iflytekSpark_;
}

void UpdateRobotReq::setIflytekSpark(const IflytekSpark& value)
{
    iflytekSpark_ = value;
    iflytekSparkIsSet_ = true;
}

bool UpdateRobotReq::iflytekSparkIsSet() const
{
    return iflytekSparkIsSet_;
}

void UpdateRobotReq::unsetiflytekSpark()
{
    iflytekSparkIsSet_ = false;
}

ThirdPartyModelConfig UpdateRobotReq::getThirdPartyModelConfig() const
{
    return thirdPartyModelConfig_;
}

void UpdateRobotReq::setThirdPartyModelConfig(const ThirdPartyModelConfig& value)
{
    thirdPartyModelConfig_ = value;
    thirdPartyModelConfigIsSet_ = true;
}

bool UpdateRobotReq::thirdPartyModelConfigIsSet() const
{
    return thirdPartyModelConfigIsSet_;
}

void UpdateRobotReq::unsetthirdPartyModelConfig()
{
    thirdPartyModelConfigIsSet_ = false;
}

MobvoiConfig UpdateRobotReq::getMobvoiConfig() const
{
    return mobvoiConfig_;
}

void UpdateRobotReq::setMobvoiConfig(const MobvoiConfig& value)
{
    mobvoiConfig_ = value;
    mobvoiConfigIsSet_ = true;
}

bool UpdateRobotReq::mobvoiConfigIsSet() const
{
    return mobvoiConfigIsSet_;
}

void UpdateRobotReq::unsetmobvoiConfig()
{
    mobvoiConfigIsSet_ = false;
}

WiseBrainConfig UpdateRobotReq::getWiseBrainConfig() const
{
    return wiseBrainConfig_;
}

void UpdateRobotReq::setWiseBrainConfig(const WiseBrainConfig& value)
{
    wiseBrainConfig_ = value;
    wiseBrainConfigIsSet_ = true;
}

bool UpdateRobotReq::wiseBrainConfigIsSet() const
{
    return wiseBrainConfigIsSet_;
}

void UpdateRobotReq::unsetwiseBrainConfig()
{
    wiseBrainConfigIsSet_ = false;
}

}
}
}
}
}


