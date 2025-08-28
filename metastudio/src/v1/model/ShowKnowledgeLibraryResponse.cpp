

#include "huaweicloud/metastudio/v1/model/ShowKnowledgeLibraryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowKnowledgeLibraryResponse::ShowKnowledgeLibraryResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowKnowledgeLibraryResponse::~ShowKnowledgeLibraryResponse() = default;

void ShowKnowledgeLibraryResponse::validate()
{
}

web::json::value ShowKnowledgeLibraryResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowKnowledgeLibraryResponse::fromJson(const web::json::value& val)
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


std::string ShowKnowledgeLibraryResponse::getKnowledgeLibraryId() const
{
    return knowledgeLibraryId_;
}

void ShowKnowledgeLibraryResponse::setKnowledgeLibraryId(const std::string& value)
{
    knowledgeLibraryId_ = value;
    knowledgeLibraryIdIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::knowledgeLibraryIdIsSet() const
{
    return knowledgeLibraryIdIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetknowledgeLibraryId()
{
    knowledgeLibraryIdIsSet_ = false;
}

std::string ShowKnowledgeLibraryResponse::getName() const
{
    return name_;
}

void ShowKnowledgeLibraryResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetname()
{
    nameIsSet_ = false;
}

LanguageEnum ShowKnowledgeLibraryResponse::getLanguage() const
{
    return language_;
}

void ShowKnowledgeLibraryResponse::setLanguage(const LanguageEnum& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::languageIsSet() const
{
    return languageIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

KnowledgeTypeEnum ShowKnowledgeLibraryResponse::getKnowledgeType() const
{
    return knowledgeType_;
}

void ShowKnowledgeLibraryResponse::setKnowledgeType(const KnowledgeTypeEnum& value)
{
    knowledgeType_ = value;
    knowledgeTypeIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::knowledgeTypeIsSet() const
{
    return knowledgeTypeIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetknowledgeType()
{
    knowledgeTypeIsSet_ = false;
}

int32_t ShowKnowledgeLibraryResponse::getKnowledgeSize() const
{
    return knowledgeSize_;
}

void ShowKnowledgeLibraryResponse::setKnowledgeSize(int32_t value)
{
    knowledgeSize_ = value;
    knowledgeSizeIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::knowledgeSizeIsSet() const
{
    return knowledgeSizeIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetknowledgeSize()
{
    knowledgeSizeIsSet_ = false;
}

int32_t ShowKnowledgeLibraryResponse::getTopk() const
{
    return topk_;
}

void ShowKnowledgeLibraryResponse::setTopk(int32_t value)
{
    topk_ = value;
    topkIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::topkIsSet() const
{
    return topkIsSet_;
}

void ShowKnowledgeLibraryResponse::unsettopk()
{
    topkIsSet_ = false;
}

double ShowKnowledgeLibraryResponse::getScore() const
{
    return score_;
}

void ShowKnowledgeLibraryResponse::setScore(double value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::scoreIsSet() const
{
    return scoreIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetscore()
{
    scoreIsSet_ = false;
}

std::string ShowKnowledgeLibraryResponse::getCreateTime() const
{
    return createTime_;
}

void ShowKnowledgeLibraryResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowKnowledgeLibraryResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowKnowledgeLibraryResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowKnowledgeLibraryResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowKnowledgeLibraryResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowKnowledgeLibraryResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowKnowledgeLibraryResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


