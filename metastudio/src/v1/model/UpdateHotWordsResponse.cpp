

#include "huaweicloud/metastudio/v1/model/UpdateHotWordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateHotWordsResponse::UpdateHotWordsResponse()
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

UpdateHotWordsResponse::~UpdateHotWordsResponse() = default;

void UpdateHotWordsResponse::validate()
{
}

web::json::value UpdateHotWordsResponse::toJson() const
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
bool UpdateHotWordsResponse::fromJson(const web::json::value& val)
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


std::string UpdateHotWordsResponse::getHotWordsId() const
{
    return hotWordsId_;
}

void UpdateHotWordsResponse::setHotWordsId(const std::string& value)
{
    hotWordsId_ = value;
    hotWordsIdIsSet_ = true;
}

bool UpdateHotWordsResponse::hotWordsIdIsSet() const
{
    return hotWordsIdIsSet_;
}

void UpdateHotWordsResponse::unsethotWordsId()
{
    hotWordsIdIsSet_ = false;
}

std::string UpdateHotWordsResponse::getRobotId() const
{
    return robotId_;
}

void UpdateHotWordsResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdateHotWordsResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdateHotWordsResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

HotWordsTypeEnum UpdateHotWordsResponse::getHotWordsType() const
{
    return hotWordsType_;
}

void UpdateHotWordsResponse::setHotWordsType(const HotWordsTypeEnum& value)
{
    hotWordsType_ = value;
    hotWordsTypeIsSet_ = true;
}

bool UpdateHotWordsResponse::hotWordsTypeIsSet() const
{
    return hotWordsTypeIsSet_;
}

void UpdateHotWordsResponse::unsethotWordsType()
{
    hotWordsTypeIsSet_ = false;
}

std::string UpdateHotWordsResponse::getVocabularyId() const
{
    return vocabularyId_;
}

void UpdateHotWordsResponse::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool UpdateHotWordsResponse::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void UpdateHotWordsResponse::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string UpdateHotWordsResponse::getSisProjectId() const
{
    return sisProjectId_;
}

void UpdateHotWordsResponse::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool UpdateHotWordsResponse::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void UpdateHotWordsResponse::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

int32_t UpdateHotWordsResponse::getRegion() const
{
    return region_;
}

void UpdateHotWordsResponse::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool UpdateHotWordsResponse::regionIsSet() const
{
    return regionIsSet_;
}

void UpdateHotWordsResponse::unsetregion()
{
    regionIsSet_ = false;
}

LanguageEnum UpdateHotWordsResponse::getLanguage() const
{
    return language_;
}

void UpdateHotWordsResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateHotWordsResponse::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateHotWordsResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string UpdateHotWordsResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateHotWordsResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateHotWordsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateHotWordsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateHotWordsResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateHotWordsResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateHotWordsResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateHotWordsResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateHotWordsResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateHotWordsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateHotWordsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateHotWordsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


