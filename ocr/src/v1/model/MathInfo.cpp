

#include "huaweicloud/ocr/v1/model/MathInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MathInfo::MathInfo()
{
    questionNumber_ = "";
    questionNumberIsSet_ = false;
    answerBlockCount_ = 0;
    answerBlockCountIsSet_ = false;
    answerBlockListIsSet_ = false;
}

MathInfo::~MathInfo() = default;

void MathInfo::validate()
{
}

web::json::value MathInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(questionNumberIsSet_) {
        val[utility::conversions::to_string_t("question_number")] = ModelBase::toJson(questionNumber_);
    }
    if(answerBlockCountIsSet_) {
        val[utility::conversions::to_string_t("answer_block_count")] = ModelBase::toJson(answerBlockCount_);
    }
    if(answerBlockListIsSet_) {
        val[utility::conversions::to_string_t("answer_block_list")] = ModelBase::toJson(answerBlockList_);
    }

    return val;
}

bool MathInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("question_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("question_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuestionNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("answer_block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("answer_block_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnswerBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("answer_block_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("answer_block_list"));
        if(!fieldValue.is_null())
        {
            std::vector<AnswerBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAnswerBlockList(refVal);
        }
    }
    return ok;
}


std::string MathInfo::getQuestionNumber() const
{
    return questionNumber_;
}

void MathInfo::setQuestionNumber(const std::string& value)
{
    questionNumber_ = value;
    questionNumberIsSet_ = true;
}

bool MathInfo::questionNumberIsSet() const
{
    return questionNumberIsSet_;
}

void MathInfo::unsetquestionNumber()
{
    questionNumberIsSet_ = false;
}

int32_t MathInfo::getAnswerBlockCount() const
{
    return answerBlockCount_;
}

void MathInfo::setAnswerBlockCount(int32_t value)
{
    answerBlockCount_ = value;
    answerBlockCountIsSet_ = true;
}

bool MathInfo::answerBlockCountIsSet() const
{
    return answerBlockCountIsSet_;
}

void MathInfo::unsetanswerBlockCount()
{
    answerBlockCountIsSet_ = false;
}

std::vector<AnswerBlockList>& MathInfo::getAnswerBlockList()
{
    return answerBlockList_;
}

void MathInfo::setAnswerBlockList(const std::vector<AnswerBlockList>& value)
{
    answerBlockList_ = value;
    answerBlockListIsSet_ = true;
}

bool MathInfo::answerBlockListIsSet() const
{
    return answerBlockListIsSet_;
}

void MathInfo::unsetanswerBlockList()
{
    answerBlockListIsSet_ = false;
}

}
}
}
}
}


