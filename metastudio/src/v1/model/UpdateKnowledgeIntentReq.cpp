

#include "huaweicloud/metastudio/v1/model/UpdateKnowledgeIntentReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateKnowledgeIntentReq::UpdateKnowledgeIntentReq()
{
    name_ = "";
    nameIsSet_ = false;
    answer_ = "";
    answerIsSet_ = false;
}

UpdateKnowledgeIntentReq::~UpdateKnowledgeIntentReq() = default;

void UpdateKnowledgeIntentReq::validate()
{
}

web::json::value UpdateKnowledgeIntentReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(answerIsSet_) {
        val[utility::conversions::to_string_t("answer")] = ModelBase::toJson(answer_);
    }

    return val;
}
bool UpdateKnowledgeIntentReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    return ok;
}


std::string UpdateKnowledgeIntentReq::getName() const
{
    return name_;
}

void UpdateKnowledgeIntentReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateKnowledgeIntentReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateKnowledgeIntentReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateKnowledgeIntentReq::getAnswer() const
{
    return answer_;
}

void UpdateKnowledgeIntentReq::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool UpdateKnowledgeIntentReq::answerIsSet() const
{
    return answerIsSet_;
}

void UpdateKnowledgeIntentReq::unsetanswer()
{
    answerIsSet_ = false;
}

}
}
}
}
}


