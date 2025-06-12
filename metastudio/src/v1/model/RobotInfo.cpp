

#include "huaweicloud/metastudio/v1/model/RobotInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RobotInfo::RobotInfo()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    appType_ = 0;
    appTypeIsSet_ = false;
    appKey_ = "";
    appKeyIsSet_ = false;
    robotTypeIsSet_ = false;
    languageIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    region_ = 0;
    regionIsSet_ = false;
    cbsProjectId_ = "";
    cbsProjectIdIsSet_ = false;
    llmUrl_ = "";
    llmUrlIsSet_ = false;
    isStream_ = false;
    isStreamIsSet_ = false;
    chatRounds_ = 0;
    chatRoundsIsSet_ = false;
    isIflyProduction_ = false;
    isIflyProductionIsSet_ = false;
    tailSilenceTime_ = 0;
    tailSilenceTimeIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    sisRegion_ = 0;
    sisRegionIsSet_ = false;
    sisProjectId_ = "";
    sisProjectIdIsSet_ = false;
    enableHotWords_ = false;
    enableHotWordsIsSet_ = false;
    enableQuestionAudit_ = false;
    enableQuestionAuditIsSet_ = false;
    asrTypeIsSet_ = false;
    asrAccount_ = "";
    asrAccountIsSet_ = false;
}

RobotInfo::~RobotInfo() = default;

void RobotInfo::validate()
{
}

web::json::value RobotInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(appTypeIsSet_) {
        val[utility::conversions::to_string_t("app_type")] = ModelBase::toJson(appType_);
    }
    if(appKeyIsSet_) {
        val[utility::conversions::to_string_t("app_key")] = ModelBase::toJson(appKey_);
    }
    if(robotTypeIsSet_) {
        val[utility::conversions::to_string_t("robot_type")] = ModelBase::toJson(robotType_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(cbsProjectIdIsSet_) {
        val[utility::conversions::to_string_t("cbs_project_id")] = ModelBase::toJson(cbsProjectId_);
    }
    if(llmUrlIsSet_) {
        val[utility::conversions::to_string_t("llm_url")] = ModelBase::toJson(llmUrl_);
    }
    if(isStreamIsSet_) {
        val[utility::conversions::to_string_t("is_stream")] = ModelBase::toJson(isStream_);
    }
    if(chatRoundsIsSet_) {
        val[utility::conversions::to_string_t("chat_rounds")] = ModelBase::toJson(chatRounds_);
    }
    if(isIflyProductionIsSet_) {
        val[utility::conversions::to_string_t("is_ifly_production")] = ModelBase::toJson(isIflyProduction_);
    }
    if(tailSilenceTimeIsSet_) {
        val[utility::conversions::to_string_t("tail_silence_time")] = ModelBase::toJson(tailSilenceTime_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(sisRegionIsSet_) {
        val[utility::conversions::to_string_t("sis_region")] = ModelBase::toJson(sisRegion_);
    }
    if(sisProjectIdIsSet_) {
        val[utility::conversions::to_string_t("sis_project_id")] = ModelBase::toJson(sisProjectId_);
    }
    if(enableHotWordsIsSet_) {
        val[utility::conversions::to_string_t("enable_hot_words")] = ModelBase::toJson(enableHotWords_);
    }
    if(enableQuestionAuditIsSet_) {
        val[utility::conversions::to_string_t("enable_question_audit")] = ModelBase::toJson(enableQuestionAudit_);
    }
    if(asrTypeIsSet_) {
        val[utility::conversions::to_string_t("asr_type")] = ModelBase::toJson(asrType_);
    }
    if(asrAccountIsSet_) {
        val[utility::conversions::to_string_t("asr_account")] = ModelBase::toJson(asrAccount_);
    }

    return val;
}
bool RobotInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("app_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cbs_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cbs_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCbsProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("llm_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("llm_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLlmUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_stream"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_rounds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_rounds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatRounds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_ifly_production"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_ifly_production"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsIflyProduction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sis_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_region"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sis_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_hot_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_hot_words"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableHotWords(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("asr_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asr_type"));
        if(!fieldValue.is_null())
        {
            AsrTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsrType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asr_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asr_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsrAccount(refVal);
        }
    }
    return ok;
}


std::string RobotInfo::getRobotId() const
{
    return robotId_;
}

void RobotInfo::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool RobotInfo::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void RobotInfo::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string RobotInfo::getName() const
{
    return name_;
}

void RobotInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RobotInfo::nameIsSet() const
{
    return nameIsSet_;
}

void RobotInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string RobotInfo::getRoomId() const
{
    return roomId_;
}

void RobotInfo::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool RobotInfo::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void RobotInfo::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string RobotInfo::getAppId() const
{
    return appId_;
}

void RobotInfo::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool RobotInfo::appIdIsSet() const
{
    return appIdIsSet_;
}

void RobotInfo::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t RobotInfo::getAppType() const
{
    return appType_;
}

void RobotInfo::setAppType(int32_t value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool RobotInfo::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void RobotInfo::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string RobotInfo::getAppKey() const
{
    return appKey_;
}

void RobotInfo::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool RobotInfo::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void RobotInfo::unsetappKey()
{
    appKeyIsSet_ = false;
}

RobotTypeEnum RobotInfo::getRobotType() const
{
    return robotType_;
}

void RobotInfo::setRobotType(const RobotTypeEnum& value)
{
    robotType_ = value;
    robotTypeIsSet_ = true;
}

bool RobotInfo::robotTypeIsSet() const
{
    return robotTypeIsSet_;
}

void RobotInfo::unsetrobotType()
{
    robotTypeIsSet_ = false;
}

LanguageEnum RobotInfo::getLanguage() const
{
    return language_;
}

void RobotInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool RobotInfo::languageIsSet() const
{
    return languageIsSet_;
}

void RobotInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string RobotInfo::getCreateTime() const
{
    return createTime_;
}

void RobotInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool RobotInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void RobotInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string RobotInfo::getUpdateTime() const
{
    return updateTime_;
}

void RobotInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool RobotInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void RobotInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int32_t RobotInfo::getRegion() const
{
    return region_;
}

void RobotInfo::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool RobotInfo::regionIsSet() const
{
    return regionIsSet_;
}

void RobotInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string RobotInfo::getCbsProjectId() const
{
    return cbsProjectId_;
}

void RobotInfo::setCbsProjectId(const std::string& value)
{
    cbsProjectId_ = value;
    cbsProjectIdIsSet_ = true;
}

bool RobotInfo::cbsProjectIdIsSet() const
{
    return cbsProjectIdIsSet_;
}

void RobotInfo::unsetcbsProjectId()
{
    cbsProjectIdIsSet_ = false;
}

std::string RobotInfo::getLlmUrl() const
{
    return llmUrl_;
}

void RobotInfo::setLlmUrl(const std::string& value)
{
    llmUrl_ = value;
    llmUrlIsSet_ = true;
}

bool RobotInfo::llmUrlIsSet() const
{
    return llmUrlIsSet_;
}

void RobotInfo::unsetllmUrl()
{
    llmUrlIsSet_ = false;
}

bool RobotInfo::isIsStream() const
{
    return isStream_;
}

void RobotInfo::setIsStream(bool value)
{
    isStream_ = value;
    isStreamIsSet_ = true;
}

bool RobotInfo::isStreamIsSet() const
{
    return isStreamIsSet_;
}

void RobotInfo::unsetisStream()
{
    isStreamIsSet_ = false;
}

int32_t RobotInfo::getChatRounds() const
{
    return chatRounds_;
}

void RobotInfo::setChatRounds(int32_t value)
{
    chatRounds_ = value;
    chatRoundsIsSet_ = true;
}

bool RobotInfo::chatRoundsIsSet() const
{
    return chatRoundsIsSet_;
}

void RobotInfo::unsetchatRounds()
{
    chatRoundsIsSet_ = false;
}

bool RobotInfo::isIsIflyProduction() const
{
    return isIflyProduction_;
}

void RobotInfo::setIsIflyProduction(bool value)
{
    isIflyProduction_ = value;
    isIflyProductionIsSet_ = true;
}

bool RobotInfo::isIflyProductionIsSet() const
{
    return isIflyProductionIsSet_;
}

void RobotInfo::unsetisIflyProduction()
{
    isIflyProductionIsSet_ = false;
}

int32_t RobotInfo::getTailSilenceTime() const
{
    return tailSilenceTime_;
}

void RobotInfo::setTailSilenceTime(int32_t value)
{
    tailSilenceTime_ = value;
    tailSilenceTimeIsSet_ = true;
}

bool RobotInfo::tailSilenceTimeIsSet() const
{
    return tailSilenceTimeIsSet_;
}

void RobotInfo::unsettailSilenceTime()
{
    tailSilenceTimeIsSet_ = false;
}

std::string RobotInfo::getRoleId() const
{
    return roleId_;
}

void RobotInfo::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool RobotInfo::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void RobotInfo::unsetroleId()
{
    roleIdIsSet_ = false;
}

int32_t RobotInfo::getSisRegion() const
{
    return sisRegion_;
}

void RobotInfo::setSisRegion(int32_t value)
{
    sisRegion_ = value;
    sisRegionIsSet_ = true;
}

bool RobotInfo::sisRegionIsSet() const
{
    return sisRegionIsSet_;
}

void RobotInfo::unsetsisRegion()
{
    sisRegionIsSet_ = false;
}

std::string RobotInfo::getSisProjectId() const
{
    return sisProjectId_;
}

void RobotInfo::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool RobotInfo::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void RobotInfo::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

bool RobotInfo::isEnableHotWords() const
{
    return enableHotWords_;
}

void RobotInfo::setEnableHotWords(bool value)
{
    enableHotWords_ = value;
    enableHotWordsIsSet_ = true;
}

bool RobotInfo::enableHotWordsIsSet() const
{
    return enableHotWordsIsSet_;
}

void RobotInfo::unsetenableHotWords()
{
    enableHotWordsIsSet_ = false;
}

bool RobotInfo::isEnableQuestionAudit() const
{
    return enableQuestionAudit_;
}

void RobotInfo::setEnableQuestionAudit(bool value)
{
    enableQuestionAudit_ = value;
    enableQuestionAuditIsSet_ = true;
}

bool RobotInfo::enableQuestionAuditIsSet() const
{
    return enableQuestionAuditIsSet_;
}

void RobotInfo::unsetenableQuestionAudit()
{
    enableQuestionAuditIsSet_ = false;
}

AsrTypeEnum RobotInfo::getAsrType() const
{
    return asrType_;
}

void RobotInfo::setAsrType(const AsrTypeEnum& value)
{
    asrType_ = value;
    asrTypeIsSet_ = true;
}

bool RobotInfo::asrTypeIsSet() const
{
    return asrTypeIsSet_;
}

void RobotInfo::unsetasrType()
{
    asrTypeIsSet_ = false;
}

std::string RobotInfo::getAsrAccount() const
{
    return asrAccount_;
}

void RobotInfo::setAsrAccount(const std::string& value)
{
    asrAccount_ = value;
    asrAccountIsSet_ = true;
}

bool RobotInfo::asrAccountIsSet() const
{
    return asrAccountIsSet_;
}

void RobotInfo::unsetasrAccount()
{
    asrAccountIsSet_ = false;
}

}
}
}
}
}


