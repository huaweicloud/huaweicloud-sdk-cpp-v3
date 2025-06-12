

#include "huaweicloud/metastudio/v1/model/HotWordsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




HotWordsInfo::HotWordsInfo()
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
}

HotWordsInfo::~HotWordsInfo() = default;

void HotWordsInfo::validate()
{
}

web::json::value HotWordsInfo::toJson() const
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

    return val;
}
bool HotWordsInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string HotWordsInfo::getHotWordsId() const
{
    return hotWordsId_;
}

void HotWordsInfo::setHotWordsId(const std::string& value)
{
    hotWordsId_ = value;
    hotWordsIdIsSet_ = true;
}

bool HotWordsInfo::hotWordsIdIsSet() const
{
    return hotWordsIdIsSet_;
}

void HotWordsInfo::unsethotWordsId()
{
    hotWordsIdIsSet_ = false;
}

std::string HotWordsInfo::getRobotId() const
{
    return robotId_;
}

void HotWordsInfo::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool HotWordsInfo::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void HotWordsInfo::unsetrobotId()
{
    robotIdIsSet_ = false;
}

HotWordsTypeEnum HotWordsInfo::getHotWordsType() const
{
    return hotWordsType_;
}

void HotWordsInfo::setHotWordsType(const HotWordsTypeEnum& value)
{
    hotWordsType_ = value;
    hotWordsTypeIsSet_ = true;
}

bool HotWordsInfo::hotWordsTypeIsSet() const
{
    return hotWordsTypeIsSet_;
}

void HotWordsInfo::unsethotWordsType()
{
    hotWordsTypeIsSet_ = false;
}

std::string HotWordsInfo::getVocabularyId() const
{
    return vocabularyId_;
}

void HotWordsInfo::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool HotWordsInfo::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void HotWordsInfo::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string HotWordsInfo::getSisProjectId() const
{
    return sisProjectId_;
}

void HotWordsInfo::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool HotWordsInfo::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void HotWordsInfo::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

int32_t HotWordsInfo::getRegion() const
{
    return region_;
}

void HotWordsInfo::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool HotWordsInfo::regionIsSet() const
{
    return regionIsSet_;
}

void HotWordsInfo::unsetregion()
{
    regionIsSet_ = false;
}

LanguageEnum HotWordsInfo::getLanguage() const
{
    return language_;
}

void HotWordsInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool HotWordsInfo::languageIsSet() const
{
    return languageIsSet_;
}

void HotWordsInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string HotWordsInfo::getCreateTime() const
{
    return createTime_;
}

void HotWordsInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool HotWordsInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void HotWordsInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string HotWordsInfo::getUpdateTime() const
{
    return updateTime_;
}

void HotWordsInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool HotWordsInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void HotWordsInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


