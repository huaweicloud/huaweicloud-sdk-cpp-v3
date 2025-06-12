

#include "huaweicloud/metastudio/v1/model/ShowRobotResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowRobotResponse::ShowRobotResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowRobotResponse::~ShowRobotResponse() = default;

void ShowRobotResponse::validate()
{
}

web::json::value ShowRobotResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowRobotResponse::fromJson(const web::json::value& val)
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


std::string ShowRobotResponse::getRobotId() const
{
    return robotId_;
}

void ShowRobotResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowRobotResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowRobotResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ShowRobotResponse::getName() const
{
    return name_;
}

void ShowRobotResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowRobotResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowRobotResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowRobotResponse::getRoomId() const
{
    return roomId_;
}

void ShowRobotResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ShowRobotResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ShowRobotResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ShowRobotResponse::getAppId() const
{
    return appId_;
}

void ShowRobotResponse::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ShowRobotResponse::appIdIsSet() const
{
    return appIdIsSet_;
}

void ShowRobotResponse::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t ShowRobotResponse::getAppType() const
{
    return appType_;
}

void ShowRobotResponse::setAppType(int32_t value)
{
    appType_ = value;
    appTypeIsSet_ = true;
}

bool ShowRobotResponse::appTypeIsSet() const
{
    return appTypeIsSet_;
}

void ShowRobotResponse::unsetappType()
{
    appTypeIsSet_ = false;
}

std::string ShowRobotResponse::getAppKey() const
{
    return appKey_;
}

void ShowRobotResponse::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool ShowRobotResponse::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void ShowRobotResponse::unsetappKey()
{
    appKeyIsSet_ = false;
}

RobotTypeEnum ShowRobotResponse::getRobotType() const
{
    return robotType_;
}

void ShowRobotResponse::setRobotType(const RobotTypeEnum& value)
{
    robotType_ = value;
    robotTypeIsSet_ = true;
}

bool ShowRobotResponse::robotTypeIsSet() const
{
    return robotTypeIsSet_;
}

void ShowRobotResponse::unsetrobotType()
{
    robotTypeIsSet_ = false;
}

LanguageEnum ShowRobotResponse::getLanguage() const
{
    return language_;
}

void ShowRobotResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowRobotResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowRobotResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ShowRobotResponse::getCreateTime() const
{
    return createTime_;
}

void ShowRobotResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowRobotResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowRobotResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowRobotResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowRobotResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowRobotResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowRobotResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

int32_t ShowRobotResponse::getRegion() const
{
    return region_;
}

void ShowRobotResponse::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowRobotResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowRobotResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowRobotResponse::getCbsProjectId() const
{
    return cbsProjectId_;
}

void ShowRobotResponse::setCbsProjectId(const std::string& value)
{
    cbsProjectId_ = value;
    cbsProjectIdIsSet_ = true;
}

bool ShowRobotResponse::cbsProjectIdIsSet() const
{
    return cbsProjectIdIsSet_;
}

void ShowRobotResponse::unsetcbsProjectId()
{
    cbsProjectIdIsSet_ = false;
}

std::string ShowRobotResponse::getLlmUrl() const
{
    return llmUrl_;
}

void ShowRobotResponse::setLlmUrl(const std::string& value)
{
    llmUrl_ = value;
    llmUrlIsSet_ = true;
}

bool ShowRobotResponse::llmUrlIsSet() const
{
    return llmUrlIsSet_;
}

void ShowRobotResponse::unsetllmUrl()
{
    llmUrlIsSet_ = false;
}

bool ShowRobotResponse::isIsStream() const
{
    return isStream_;
}

void ShowRobotResponse::setIsStream(bool value)
{
    isStream_ = value;
    isStreamIsSet_ = true;
}

bool ShowRobotResponse::isStreamIsSet() const
{
    return isStreamIsSet_;
}

void ShowRobotResponse::unsetisStream()
{
    isStreamIsSet_ = false;
}

int32_t ShowRobotResponse::getChatRounds() const
{
    return chatRounds_;
}

void ShowRobotResponse::setChatRounds(int32_t value)
{
    chatRounds_ = value;
    chatRoundsIsSet_ = true;
}

bool ShowRobotResponse::chatRoundsIsSet() const
{
    return chatRoundsIsSet_;
}

void ShowRobotResponse::unsetchatRounds()
{
    chatRoundsIsSet_ = false;
}

bool ShowRobotResponse::isIsIflyProduction() const
{
    return isIflyProduction_;
}

void ShowRobotResponse::setIsIflyProduction(bool value)
{
    isIflyProduction_ = value;
    isIflyProductionIsSet_ = true;
}

bool ShowRobotResponse::isIflyProductionIsSet() const
{
    return isIflyProductionIsSet_;
}

void ShowRobotResponse::unsetisIflyProduction()
{
    isIflyProductionIsSet_ = false;
}

int32_t ShowRobotResponse::getTailSilenceTime() const
{
    return tailSilenceTime_;
}

void ShowRobotResponse::setTailSilenceTime(int32_t value)
{
    tailSilenceTime_ = value;
    tailSilenceTimeIsSet_ = true;
}

bool ShowRobotResponse::tailSilenceTimeIsSet() const
{
    return tailSilenceTimeIsSet_;
}

void ShowRobotResponse::unsettailSilenceTime()
{
    tailSilenceTimeIsSet_ = false;
}

std::string ShowRobotResponse::getRoleId() const
{
    return roleId_;
}

void ShowRobotResponse::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ShowRobotResponse::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ShowRobotResponse::unsetroleId()
{
    roleIdIsSet_ = false;
}

int32_t ShowRobotResponse::getSisRegion() const
{
    return sisRegion_;
}

void ShowRobotResponse::setSisRegion(int32_t value)
{
    sisRegion_ = value;
    sisRegionIsSet_ = true;
}

bool ShowRobotResponse::sisRegionIsSet() const
{
    return sisRegionIsSet_;
}

void ShowRobotResponse::unsetsisRegion()
{
    sisRegionIsSet_ = false;
}

std::string ShowRobotResponse::getSisProjectId() const
{
    return sisProjectId_;
}

void ShowRobotResponse::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool ShowRobotResponse::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void ShowRobotResponse::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

bool ShowRobotResponse::isEnableHotWords() const
{
    return enableHotWords_;
}

void ShowRobotResponse::setEnableHotWords(bool value)
{
    enableHotWords_ = value;
    enableHotWordsIsSet_ = true;
}

bool ShowRobotResponse::enableHotWordsIsSet() const
{
    return enableHotWordsIsSet_;
}

void ShowRobotResponse::unsetenableHotWords()
{
    enableHotWordsIsSet_ = false;
}

bool ShowRobotResponse::isEnableQuestionAudit() const
{
    return enableQuestionAudit_;
}

void ShowRobotResponse::setEnableQuestionAudit(bool value)
{
    enableQuestionAudit_ = value;
    enableQuestionAuditIsSet_ = true;
}

bool ShowRobotResponse::enableQuestionAuditIsSet() const
{
    return enableQuestionAuditIsSet_;
}

void ShowRobotResponse::unsetenableQuestionAudit()
{
    enableQuestionAuditIsSet_ = false;
}

AsrTypeEnum ShowRobotResponse::getAsrType() const
{
    return asrType_;
}

void ShowRobotResponse::setAsrType(const AsrTypeEnum& value)
{
    asrType_ = value;
    asrTypeIsSet_ = true;
}

bool ShowRobotResponse::asrTypeIsSet() const
{
    return asrTypeIsSet_;
}

void ShowRobotResponse::unsetasrType()
{
    asrTypeIsSet_ = false;
}

std::string ShowRobotResponse::getAsrAccount() const
{
    return asrAccount_;
}

void ShowRobotResponse::setAsrAccount(const std::string& value)
{
    asrAccount_ = value;
    asrAccountIsSet_ = true;
}

bool ShowRobotResponse::asrAccountIsSet() const
{
    return asrAccountIsSet_;
}

void ShowRobotResponse::unsetasrAccount()
{
    asrAccountIsSet_ = false;
}

std::string ShowRobotResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowRobotResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowRobotResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowRobotResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


