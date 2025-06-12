

#include "huaweicloud/metastudio/v1/model/ShowHotWordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowHotWordsResponse::ShowHotWordsResponse()
{
    hotWordsId_ = "";
    hotWordsIdIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    hotWordsTypeIsSet_ = false;
    vocabularyId_ = "";
    vocabularyIdIsSet_ = false;
    sisProjectId_ = "";
    sisProjectIdIsSet_ = false;
    region_ = 0;
    regionIsSet_ = false;
    languageIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowHotWordsResponse::~ShowHotWordsResponse() = default;

void ShowHotWordsResponse::validate()
{
}

web::json::value ShowHotWordsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hotWordsIdIsSet_) {
        val[utility::conversions::to_string_t("hot_words_id")] = ModelBase::toJson(hotWordsId_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(hotWordsTypeIsSet_) {
        val[utility::conversions::to_string_t("hot_words_type")] = ModelBase::toJson(hotWordsType_);
    }
    if(vocabularyIdIsSet_) {
        val[utility::conversions::to_string_t("vocabulary_id")] = ModelBase::toJson(vocabularyId_);
    }
    if(sisProjectIdIsSet_) {
        val[utility::conversions::to_string_t("sis_project_id")] = ModelBase::toJson(sisProjectId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowHotWordsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hot_words_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_words_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotWordsId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hot_words_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hot_words_type"));
        if(!fieldValue.is_null())
        {
            HotWordsTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHotWordsType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vocabulary_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vocabulary_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVocabularyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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


std::string ShowHotWordsResponse::getHotWordsId() const
{
    return hotWordsId_;
}

void ShowHotWordsResponse::setHotWordsId(const std::string& value)
{
    hotWordsId_ = value;
    hotWordsIdIsSet_ = true;
}

bool ShowHotWordsResponse::hotWordsIdIsSet() const
{
    return hotWordsIdIsSet_;
}

void ShowHotWordsResponse::unsethotWordsId()
{
    hotWordsIdIsSet_ = false;
}

std::string ShowHotWordsResponse::getRobotId() const
{
    return robotId_;
}

void ShowHotWordsResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowHotWordsResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowHotWordsResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

HotWordsTypeEnum ShowHotWordsResponse::getHotWordsType() const
{
    return hotWordsType_;
}

void ShowHotWordsResponse::setHotWordsType(const HotWordsTypeEnum& value)
{
    hotWordsType_ = value;
    hotWordsTypeIsSet_ = true;
}

bool ShowHotWordsResponse::hotWordsTypeIsSet() const
{
    return hotWordsTypeIsSet_;
}

void ShowHotWordsResponse::unsethotWordsType()
{
    hotWordsTypeIsSet_ = false;
}

std::string ShowHotWordsResponse::getVocabularyId() const
{
    return vocabularyId_;
}

void ShowHotWordsResponse::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool ShowHotWordsResponse::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void ShowHotWordsResponse::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string ShowHotWordsResponse::getSisProjectId() const
{
    return sisProjectId_;
}

void ShowHotWordsResponse::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool ShowHotWordsResponse::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void ShowHotWordsResponse::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

int32_t ShowHotWordsResponse::getRegion() const
{
    return region_;
}

void ShowHotWordsResponse::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowHotWordsResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowHotWordsResponse::unsetregion()
{
    regionIsSet_ = false;
}

LanguageEnum ShowHotWordsResponse::getLanguage() const
{
    return language_;
}

void ShowHotWordsResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowHotWordsResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowHotWordsResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string ShowHotWordsResponse::getCreateTime() const
{
    return createTime_;
}

void ShowHotWordsResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowHotWordsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowHotWordsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowHotWordsResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowHotWordsResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowHotWordsResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowHotWordsResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowHotWordsResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowHotWordsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowHotWordsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowHotWordsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


