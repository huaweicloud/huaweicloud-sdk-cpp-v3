

#include "huaweicloud/metastudio/v1/model/CreateKnowledgeIntentReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateKnowledgeIntentReq::CreateKnowledgeIntentReq()
{
    name_ = "";
    nameIsSet_ = false;
    answer_ = "";
    answerIsSet_ = false;
    skillId_ = "";
    skillIdIsSet_ = false;
}

CreateKnowledgeIntentReq::~CreateKnowledgeIntentReq() = default;

void CreateKnowledgeIntentReq::validate()
{
}

web::json::value CreateKnowledgeIntentReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(answerIsSet_) {
        val[utility::conversions::to_string_t("answer")] = ModelBase::toJson(answer_);
    }
    if(skillIdIsSet_) {
        val[utility::conversions::to_string_t("skill_id")] = ModelBase::toJson(skillId_);
    }

    return val;
}
bool CreateKnowledgeIntentReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("skill_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skill_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkillId(refVal);
        }
    }
    return ok;
}


std::string CreateKnowledgeIntentReq::getName() const
{
    return name_;
}

void CreateKnowledgeIntentReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateKnowledgeIntentReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateKnowledgeIntentReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateKnowledgeIntentReq::getAnswer() const
{
    return answer_;
}

void CreateKnowledgeIntentReq::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool CreateKnowledgeIntentReq::answerIsSet() const
{
    return answerIsSet_;
}

void CreateKnowledgeIntentReq::unsetanswer()
{
    answerIsSet_ = false;
}

std::string CreateKnowledgeIntentReq::getSkillId() const
{
    return skillId_;
}

void CreateKnowledgeIntentReq::setSkillId(const std::string& value)
{
    skillId_ = value;
    skillIdIsSet_ = true;
}

bool CreateKnowledgeIntentReq::skillIdIsSet() const
{
    return skillIdIsSet_;
}

void CreateKnowledgeIntentReq::unsetskillId()
{
    skillIdIsSet_ = false;
}

}
}
}
}
}


