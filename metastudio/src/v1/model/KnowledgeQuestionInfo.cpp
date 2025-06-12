

#include "huaweicloud/metastudio/v1/model/KnowledgeQuestionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




KnowledgeQuestionInfo::KnowledgeQuestionInfo()
{
    questionId_ = "";
    questionIdIsSet_ = false;
    question_ = "";
    questionIsSet_ = false;
    intentId_ = "";
    intentIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

KnowledgeQuestionInfo::~KnowledgeQuestionInfo() = default;

void KnowledgeQuestionInfo::validate()
{
}

web::json::value KnowledgeQuestionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionIdIsSet_) {
        val[utility::conversions::to_string_t("question_id")] = ModelBase::toJson(questionId_);
    }
    if(questionIsSet_) {
        val[utility::conversions::to_string_t("question")] = ModelBase::toJson(question_);
    }
    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool KnowledgeQuestionInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("question_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("question"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("intent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntentId(refVal);
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


std::string KnowledgeQuestionInfo::getQuestionId() const
{
    return questionId_;
}

void KnowledgeQuestionInfo::setQuestionId(const std::string& value)
{
    questionId_ = value;
    questionIdIsSet_ = true;
}

bool KnowledgeQuestionInfo::questionIdIsSet() const
{
    return questionIdIsSet_;
}

void KnowledgeQuestionInfo::unsetquestionId()
{
    questionIdIsSet_ = false;
}

std::string KnowledgeQuestionInfo::getQuestion() const
{
    return question_;
}

void KnowledgeQuestionInfo::setQuestion(const std::string& value)
{
    question_ = value;
    questionIsSet_ = true;
}

bool KnowledgeQuestionInfo::questionIsSet() const
{
    return questionIsSet_;
}

void KnowledgeQuestionInfo::unsetquestion()
{
    questionIsSet_ = false;
}

std::string KnowledgeQuestionInfo::getIntentId() const
{
    return intentId_;
}

void KnowledgeQuestionInfo::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool KnowledgeQuestionInfo::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void KnowledgeQuestionInfo::unsetintentId()
{
    intentIdIsSet_ = false;
}

std::string KnowledgeQuestionInfo::getCreateTime() const
{
    return createTime_;
}

void KnowledgeQuestionInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool KnowledgeQuestionInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void KnowledgeQuestionInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string KnowledgeQuestionInfo::getUpdateTime() const
{
    return updateTime_;
}

void KnowledgeQuestionInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool KnowledgeQuestionInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void KnowledgeQuestionInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


