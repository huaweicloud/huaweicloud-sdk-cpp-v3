

#include "huaweicloud/metastudio/v1/model/CreateHotWordsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateHotWordsResponse::CreateHotWordsResponse()
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

CreateHotWordsResponse::~CreateHotWordsResponse() = default;

void CreateHotWordsResponse::validate()
{
}

web::json::value CreateHotWordsResponse::toJson() const
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
bool CreateHotWordsResponse::fromJson(const web::json::value& val)
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


std::string CreateHotWordsResponse::getHotWordsId() const
{
    return hotWordsId_;
}

void CreateHotWordsResponse::setHotWordsId(const std::string& value)
{
    hotWordsId_ = value;
    hotWordsIdIsSet_ = true;
}

bool CreateHotWordsResponse::hotWordsIdIsSet() const
{
    return hotWordsIdIsSet_;
}

void CreateHotWordsResponse::unsethotWordsId()
{
    hotWordsIdIsSet_ = false;
}

std::string CreateHotWordsResponse::getRobotId() const
{
    return robotId_;
}

void CreateHotWordsResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateHotWordsResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateHotWordsResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

HotWordsTypeEnum CreateHotWordsResponse::getHotWordsType() const
{
    return hotWordsType_;
}

void CreateHotWordsResponse::setHotWordsType(const HotWordsTypeEnum& value)
{
    hotWordsType_ = value;
    hotWordsTypeIsSet_ = true;
}

bool CreateHotWordsResponse::hotWordsTypeIsSet() const
{
    return hotWordsTypeIsSet_;
}

void CreateHotWordsResponse::unsethotWordsType()
{
    hotWordsTypeIsSet_ = false;
}

std::string CreateHotWordsResponse::getVocabularyId() const
{
    return vocabularyId_;
}

void CreateHotWordsResponse::setVocabularyId(const std::string& value)
{
    vocabularyId_ = value;
    vocabularyIdIsSet_ = true;
}

bool CreateHotWordsResponse::vocabularyIdIsSet() const
{
    return vocabularyIdIsSet_;
}

void CreateHotWordsResponse::unsetvocabularyId()
{
    vocabularyIdIsSet_ = false;
}

std::string CreateHotWordsResponse::getSisProjectId() const
{
    return sisProjectId_;
}

void CreateHotWordsResponse::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool CreateHotWordsResponse::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void CreateHotWordsResponse::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

int32_t CreateHotWordsResponse::getRegion() const
{
    return region_;
}

void CreateHotWordsResponse::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool CreateHotWordsResponse::regionIsSet() const
{
    return regionIsSet_;
}

void CreateHotWordsResponse::unsetregion()
{
    regionIsSet_ = false;
}

LanguageEnum CreateHotWordsResponse::getLanguage() const
{
    return language_;
}

void CreateHotWordsResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateHotWordsResponse::languageIsSet() const
{
    return languageIsSet_;
}

void CreateHotWordsResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string CreateHotWordsResponse::getCreateTime() const
{
    return createTime_;
}

void CreateHotWordsResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateHotWordsResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateHotWordsResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateHotWordsResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateHotWordsResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateHotWordsResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateHotWordsResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CreateHotWordsResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateHotWordsResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateHotWordsResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateHotWordsResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


