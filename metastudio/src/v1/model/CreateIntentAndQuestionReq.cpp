

#include "huaweicloud/metastudio/v1/model/CreateIntentAndQuestionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateIntentAndQuestionReq::CreateIntentAndQuestionReq()
{
    name_ = "";
    nameIsSet_ = false;
    answer_ = "";
    answerIsSet_ = false;
    skillId_ = "";
    skillIdIsSet_ = false;
    questionListIsSet_ = false;
}

CreateIntentAndQuestionReq::~CreateIntentAndQuestionReq() = default;

void CreateIntentAndQuestionReq::validate()
{
}

web::json::value CreateIntentAndQuestionReq::toJson() const
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
    if(questionListIsSet_) {
        val[utility::conversions::to_string_t("question_list")] = ModelBase::toJson(questionList_);
    }

    return val;
}
bool CreateIntentAndQuestionReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("question_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_list"));
        if(!fieldValue.is_null())
        {
            std::vector<KnowledgeQuestionCreateInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionList(refVal);
        }
    }
    return ok;
}


std::string CreateIntentAndQuestionReq::getName() const
{
    return name_;
}

void CreateIntentAndQuestionReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateIntentAndQuestionReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateIntentAndQuestionReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateIntentAndQuestionReq::getAnswer() const
{
    return answer_;
}

void CreateIntentAndQuestionReq::setAnswer(const std::string& value)
{
    answer_ = value;
    answerIsSet_ = true;
}

bool CreateIntentAndQuestionReq::answerIsSet() const
{
    return answerIsSet_;
}

void CreateIntentAndQuestionReq::unsetanswer()
{
    answerIsSet_ = false;
}

std::string CreateIntentAndQuestionReq::getSkillId() const
{
    return skillId_;
}

void CreateIntentAndQuestionReq::setSkillId(const std::string& value)
{
    skillId_ = value;
    skillIdIsSet_ = true;
}

bool CreateIntentAndQuestionReq::skillIdIsSet() const
{
    return skillIdIsSet_;
}

void CreateIntentAndQuestionReq::unsetskillId()
{
    skillIdIsSet_ = false;
}

std::vector<KnowledgeQuestionCreateInfo>& CreateIntentAndQuestionReq::getQuestionList()
{
    return questionList_;
}

void CreateIntentAndQuestionReq::setQuestionList(const std::vector<KnowledgeQuestionCreateInfo>& value)
{
    questionList_ = value;
    questionListIsSet_ = true;
}

bool CreateIntentAndQuestionReq::questionListIsSet() const
{
    return questionListIsSet_;
}

void CreateIntentAndQuestionReq::unsetquestionList()
{
    questionListIsSet_ = false;
}

}
}
}
}
}


