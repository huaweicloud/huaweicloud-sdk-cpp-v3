

#include "huaweicloud/metastudio/v1/model/KnowledgeIntentInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




KnowledgeIntentInfo::KnowledgeIntentInfo()
{
    intentId_ = "";
    intentIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    identify_ = "";
    identifyIsSet_ = false;
    answer_ = "";
    answerIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

KnowledgeIntentInfo::~KnowledgeIntentInfo() = default;

void KnowledgeIntentInfo::validate()
{
}

web::json::value KnowledgeIntentInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(intentIdIsSet_) {
        val[utility::conversions::to_string_t("intent_id")] = ModelBase::toJson(intentId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(identifyIsSet_) {
        val[utility::conversions::to_string_t("identify")] = ModelBase::toJson(identify_);
    }
    if(answerIsSet_) {
        val[utility::conversions::to_string_t("answer")] = ModelBase::toJson(answer_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool KnowledgeIntentInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("intent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("intent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("identify"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identify"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentify(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("answer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("answer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnswer(refVal);
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


std::string KnowledgeIntentInfo::getIntentId() const
{
    return intentId_;
}

void KnowledgeIntentInfo::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool KnowledgeIntentInfo::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void KnowledgeIntentInfo::unsetintentId()
{
    intentIdIsSet_ = false;
}

std::string KnowledgeIntentInfo::getName() const
{
    return name_;
}

void KnowledgeIntentInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool KnowledgeIntentInfo::nameIsSet() const
{
    return nameIsSet_;
}

void KnowledgeIntentInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string KnowledgeIntentInfo::getIdentify() const
{
    return identify_;
}

void KnowledgeIntentInfo::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool KnowledgeIntentInfo::identifyIsSet() const
{
    return identifyIsSet_;
}

void KnowledgeIntentInfo::unsetidentify()
{
    identifyIsSet_ = false;
}

std::string KnowledgeIntentInfo::getAnswer() const
{
    return answer_;
}

void KnowledgeIntentInfo::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool KnowledgeIntentInfo::answerIsSet() const
{
    return answerIsSet_;
}

void KnowledgeIntentInfo::unsetanswer()
{
    answerIsSet_ = false;
}

std::string KnowledgeIntentInfo::getCreateTime() const
{
    return createTime_;
}

void KnowledgeIntentInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool KnowledgeIntentInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void KnowledgeIntentInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string KnowledgeIntentInfo::getUpdateTime() const
{
    return updateTime_;
}

void KnowledgeIntentInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool KnowledgeIntentInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void KnowledgeIntentInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


