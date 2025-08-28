

#include "huaweicloud/metastudio/v1/model/KnowledgeLibraryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




KnowledgeLibraryInfo::KnowledgeLibraryInfo()
{
    knowledgeLibraryId_ = "";
    knowledgeLibraryIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    languageIsSet_ = false;
    knowledgeTypeIsSet_ = false;
    knowledgeSize_ = 0;
    knowledgeSizeIsSet_ = false;
    topk_ = 0;
    topkIsSet_ = false;
    score_ = 0.0;
    scoreIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

KnowledgeLibraryInfo::~KnowledgeLibraryInfo() = default;

void KnowledgeLibraryInfo::validate()
{
}

web::json::value KnowledgeLibraryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(knowledgeLibraryIdIsSet_) {
        val[utility::conversions::to_string_t("knowledge_library_id")] = ModelBase::toJson(knowledgeLibraryId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(knowledgeTypeIsSet_) {
        val[utility::conversions::to_string_t("knowledge_type")] = ModelBase::toJson(knowledgeType_);
    }
    if(knowledgeSizeIsSet_) {
        val[utility::conversions::to_string_t("knowledge_size")] = ModelBase::toJson(knowledgeSize_);
    }
    if(topkIsSet_) {
        val[utility::conversions::to_string_t("topk")] = ModelBase::toJson(topk_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool KnowledgeLibraryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("knowledge_library_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_library_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeLibraryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            LanguageEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_type"));
        if(!fieldValue.is_null())
        {
            KnowledgeTypeEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("knowledge_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("knowledge_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKnowledgeSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
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


std::string KnowledgeLibraryInfo::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void KnowledgeLibraryInfo::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool KnowledgeLibraryInfo::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void KnowledgeLibraryInfo::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string KnowledgeLibraryInfo::getName() const
{
    return name_;
}

void KnowledgeLibraryInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool KnowledgeLibraryInfo::nameIsSet() const
{
    return nameIsSet_;
}

void KnowledgeLibraryInfo::unsetname()
{
    nameIsSet_ = false;
}

LanguageEnum KnowledgeLibraryInfo::getLanguage() const
{
    return language_;
}

void KnowledgeLibraryInfo::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool KnowledgeLibraryInfo::languageIsSet() const
{
    return languageIsSet_;
}

void KnowledgeLibraryInfo::unsetlanguage()
{
    languageIsSet_ = false;
}

KnowledgeTypeEnum KnowledgeLibraryInfo::getKnowledgeType() const
{
    return knowledgeType_;
}

void KnowledgeLibraryInfo::setKnowledgeType(const KnowledgeTypeEnum& value)
{
    knowledgeType_ = value;
    knowledgeTypeIsSet_ = true;
}

bool KnowledgeLibraryInfo::knowledgeTypeIsSet() const
{
    return knowledgeTypeIsSet_;
}

void KnowledgeLibraryInfo::unsetknowledgeType()
{
    knowledgeTypeIsSet_ = false;
}

int32_t KnowledgeLibraryInfo::getKnowledgeSize() const
{
    return knowledgeSize_;
}

void KnowledgeLibraryInfo::setKnowledgeSize(int32_t value)
{
    knowledgeSize_ = value;
    knowledgeSizeIsSet_ = true;
}

bool KnowledgeLibraryInfo::knowledgeSizeIsSet() const
{
    return knowledgeSizeIsSet_;
}

void KnowledgeLibraryInfo::unsetknowledgeSize()
{
    knowledgeSizeIsSet_ = false;
}

int32_t KnowledgeLibraryInfo::getTopk() const
{
    return topk_;
}

void KnowledgeLibraryInfo::setTopk(int32_t value)
{
    topk_ = value;
    topkIsSet_ = true;
}

bool KnowledgeLibraryInfo::topkIsSet() const
{
    return topkIsSet_;
}

void KnowledgeLibraryInfo::unsettopk()
{
    topkIsSet_ = false;
}

double KnowledgeLibraryInfo::getScore() const
{
    return score_;
}

void KnowledgeLibraryInfo::setScore(double value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool KnowledgeLibraryInfo::scoreIsSet() const
{
    return scoreIsSet_;
}

void KnowledgeLibraryInfo::unsetscore()
{
    scoreIsSet_ = false;
}

std::string KnowledgeLibraryInfo::getCreateTime() const
{
    return createTime_;
}

void KnowledgeLibraryInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool KnowledgeLibraryInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void KnowledgeLibraryInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string KnowledgeLibraryInfo::getUpdateTime() const
{
    return updateTime_;
}

void KnowledgeLibraryInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool KnowledgeLibraryInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void KnowledgeLibraryInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


