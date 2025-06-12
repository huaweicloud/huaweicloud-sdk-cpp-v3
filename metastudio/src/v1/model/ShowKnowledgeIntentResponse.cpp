

#include "huaweicloud/metastudio/v1/model/ShowKnowledgeIntentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowKnowledgeIntentResponse::ShowKnowledgeIntentResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowKnowledgeIntentResponse::~ShowKnowledgeIntentResponse() = default;

void ShowKnowledgeIntentResponse::validate()
{
}

web::json::value ShowKnowledgeIntentResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowKnowledgeIntentResponse::fromJson(const web::json::value& val)
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


std::string ShowKnowledgeIntentResponse::getIntentId() const
{
    return intentId_;
}

void ShowKnowledgeIntentResponse::setIntentId(const std::string& value)
{
    intentId_ = value;
    intentIdIsSet_ = true;
}

bool ShowKnowledgeIntentResponse::intentIdIsSet() const
{
    return intentIdIsSet_;
}

void ShowKnowledgeIntentResponse::unsetintentId()
{
    intentIdIsSet_ = false;
}

std::string ShowKnowledgeIntentResponse::getName() const
{
    return name_;
}

void ShowKnowledgeIntentResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowKnowledgeIntentResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowKnowledgeIntentResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowKnowledgeIntentResponse::getIdentify() const
{
    return identify_;
}

void ShowKnowledgeIntentResponse::setIdentify(const std::string& value)
{
    identify_ = value;
    identifyIsSet_ = true;
}

bool ShowKnowledgeIntentResponse::identifyIsSet() const
{
    return identifyIsSet_;
}

void ShowKnowledgeIntentResponse::unsetidentify()
{
    identifyIsSet_ = false;
}

std::string ShowKnowledgeIntentResponse::getAnswer() const
{
    return answer_;
}

void ShowKnowledgeIntentResponse::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool ShowKnowledgeIntentResponse::answerIsSet() const
{
    return answerIsSet_;
}

void ShowKnowledgeIntentResponse::unsetanswer()
{
    answerIsSet_ = false;
}

std::string ShowKnowledgeIntentResponse::getCreateTime() const
{
    return createTime_;
}

void ShowKnowledgeIntentResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowKnowledgeIntentResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowKnowledgeIntentResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowKnowledgeIntentResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowKnowledgeIntentResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowKnowledgeIntentResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowKnowledgeIntentResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowKnowledgeIntentResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowKnowledgeIntentResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowKnowledgeIntentResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowKnowledgeIntentResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


