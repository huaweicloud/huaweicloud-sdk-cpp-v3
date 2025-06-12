

#include "huaweicloud/metastudio/v1/model/CreateRobotReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateRobotReq::CreateRobotReq()
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

CreateRobotReq::~CreateRobotReq() = default;

void CreateRobotReq::validate()
{
}

web::json::value CreateRobotReq::toJson() const
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
bool CreateRobotReq::fromJson(const web::json::value& val)
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


std::string CreateRobotReq::getName() const
{
    return name_;
}

void CreateRobotReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRobotReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRobotReq::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateRobotReq::getAppType() const
{
    return appType_;
}

void CreateRobotReq::setAppType(int32_t value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool CreateRobotReq::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void CreateRobotReq::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string CreateRobotReq::getRoomId() const
{
    return roomId_;
}

void CreateRobotReq::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool CreateRobotReq::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void CreateRobotReq::unsetroomId()
{
    roomIdIsSet_ = false;
}

RobotTypeEnum CreateRobotReq::getRobotType() const
{
    return robotType_;
}

void CreateRobotReq::setRobotType(const RobotTypeEnum& value)
{
    robotType_ = value;
    robotTypeIsSet_ = true;
}

bool CreateRobotReq::robotTypeIsSet() const
{
    return robotTypeIsSet_;
}

void CreateRobotReq::unsetrobotType()
{
    robotTypeIsSet_ = false;
}

LanguageEnum CreateRobotReq::getLanguage() const
{
    return language_;
}

void CreateRobotReq::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateRobotReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreateRobotReq::unsetlanguage()
{
    languageIsSet_ = false;
}

int32_t CreateRobotReq::getTailSilenceTime() const
{
    return tailSilenceTime_;
}

void CreateRobotReq::setTailSilenceTime(int32_t value)
{
    tailSilenceTime_ = value;
    tailSilenceTimeIsSet_ = true;
}

bool CreateRobotReq::tailSilenceTimeIsSet() const
{
    return tailSilenceTimeIsSet_;
}

void CreateRobotReq::unsettailSilenceTime()
{
    tailSilenceTimeIsSet_ = false;
}

bool CreateRobotReq::isEnableQuestionAudit() const
{
    return enableQuestionAudit_;
}

void CreateRobotReq::setEnableQuestionAudit(bool value)
{
    enableQuestionAudit_ = value;
    enableQuestionAuditIsSet_ = true;
}

bool CreateRobotReq::enableQuestionAuditIsSet() const
{
    return enableQuestionAuditIsSet_;
}

void CreateRobotReq::unsetenableQuestionAudit()
{
    enableQuestionAuditIsSet_ = false;
}

HuaweiEiCbs CreateRobotReq::getHuaweiEiCbs() const
{
    return huaweiEiCbs_;
}

void CreateRobotReq::setHuaweiEiCbs(const HuaweiEiCbs& value)
{
    huaweiEiCbs_ = value;
    huaweiEiCbsIsSet_ = true;
}

bool CreateRobotReq::huaweiEiCbsIsSet() const
{
    return huaweiEiCbsIsSet_;
}

void CreateRobotReq::unsethuaweiEiCbs()
{
    huaweiEiCbsIsSet_ = false;
}

IflytekAiuiConfig CreateRobotReq::getIflytekAiuiConfig() const
{
    return iflytekAiuiConfig_;
}

void CreateRobotReq::setIflytekAiuiConfig(const IflytekAiuiConfig& value)
{
    iflytekAiuiConfig_ = value;
    iflytekAiuiConfigIsSet_ = true;
}

bool CreateRobotReq::iflytekAiuiConfigIsSet() const
{
    return iflytekAiuiConfigIsSet_;
}

void CreateRobotReq::unsetiflytekAiuiConfig()
{
    iflytekAiuiConfigIsSet_ = false;
}

IflytekSpark CreateRobotReq::getIflytekSpark() const
{
    return iflytekSpark_;
}

void CreateRobotReq::setIflytekSpark(const IflytekSpark& value)
{
    iflytekSpark_ = value;
    iflytekSparkIsSet_ = true;
}

bool CreateRobotReq::iflytekSparkIsSet() const
{
    return iflytekSparkIsSet_;
}

void CreateRobotReq::unsetiflytekSpark()
{
    iflytekSparkIsSet_ = false;
}

ThirdPartyModelConfig CreateRobotReq::getThirdPartyModelConfig() const
{
    return thirdPartyModelConfig_;
}

void CreateRobotReq::setThirdPartyModelConfig(const ThirdPartyModelConfig& value)
{
    thirdPartyModelConfig_ = value;
    thirdPartyModelConfigIsSet_ = true;
}

bool CreateRobotReq::thirdPartyModelConfigIsSet() const
{
    return thirdPartyModelConfigIsSet_;
}

void CreateRobotReq::unsetthirdPartyModelConfig()
{
    thirdPartyModelConfigIsSet_ = false;
}

MobvoiConfig CreateRobotReq::getMobvoiConfig() const
{
    return mobvoiConfig_;
}

void CreateRobotReq::setMobvoiConfig(const MobvoiConfig& value)
{
    mobvoiConfig_ = value;
    mobvoiConfigIsSet_ = true;
}

bool CreateRobotReq::mobvoiConfigIsSet() const
{
    return mobvoiConfigIsSet_;
}

void CreateRobotReq::unsetmobvoiConfig()
{
    mobvoiConfigIsSet_ = false;
}

WiseBrainConfig CreateRobotReq::getWiseBrainConfig() const
{
    return wiseBrainConfig_;
}

void CreateRobotReq::setWiseBrainConfig(const WiseBrainConfig& value)
{
    wiseBrainConfig_ = value;
    wiseBrainConfigIsSet_ = true;
}

bool CreateRobotReq::wiseBrainConfigIsSet() const
{
    return wiseBrainConfigIsSet_;
}

void CreateRobotReq::unsetwiseBrainConfig()
{
    wiseBrainConfigIsSet_ = false;
}

}
}
}
}
}


