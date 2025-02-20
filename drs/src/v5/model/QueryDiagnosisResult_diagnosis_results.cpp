

#include "huaweicloud/drs/v5/model/QueryDiagnosisResult_diagnosis_results.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryDiagnosisResult_diagnosis_results::QueryDiagnosisResult_diagnosis_results()
{
    itemIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    resultListIsSet_ = false;
    suggestionListIsSet_ = false;
    score_ = 0;
    scoreIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

QueryDiagnosisResult_diagnosis_results::~QueryDiagnosisResult_diagnosis_results() = default;

void QueryDiagnosisResult_diagnosis_results::validate()
{
}

web::json::value QueryDiagnosisResult_diagnosis_results::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(resultListIsSet_) {
        val[utility::conversions::to_string_t("result_list")] = ModelBase::toJson(resultList_);
    }
    if(suggestionListIsSet_) {
        val[utility::conversions::to_string_t("suggestion_list")] = ModelBase::toJson(suggestionList_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}
bool QueryDiagnosisResult_diagnosis_results::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item"));
        if(!fieldValue.is_null())
        {
            QueryDiagnosisResult_item refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDiagnosisResult_result_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggestion_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggestion_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryDiagnosisResult_suggestion_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestionList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}


QueryDiagnosisResult_item QueryDiagnosisResult_diagnosis_results::getItem() const
{
    return item_;
}

void QueryDiagnosisResult_diagnosis_results::setItem(const QueryDiagnosisResult_item& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool QueryDiagnosisResult_diagnosis_results::itemIsSet() const
{
    return itemIsSet_;
}

void QueryDiagnosisResult_diagnosis_results::unsetitem()
{
    itemIsSet_ = false;
}

std::string QueryDiagnosisResult_diagnosis_results::getState() const
{
    return state_;
}

void QueryDiagnosisResult_diagnosis_results::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool QueryDiagnosisResult_diagnosis_results::stateIsSet() const
{
    return stateIsSet_;
}

void QueryDiagnosisResult_diagnosis_results::unsetstate()
{
    stateIsSet_ = false;
}

std::vector<QueryDiagnosisResult_result_list>& QueryDiagnosisResult_diagnosis_results::getResultList()
{
    return resultList_;
}

void QueryDiagnosisResult_diagnosis_results::setResultList(const std::vector<QueryDiagnosisResult_result_list>& value)
{
    resultList_ = value;
    resultListIsSet_ = true;
}

bool QueryDiagnosisResult_diagnosis_results::resultListIsSet() const
{
    return resultListIsSet_;
}

void QueryDiagnosisResult_diagnosis_results::unsetresultList()
{
    resultListIsSet_ = false;
}

std::vector<QueryDiagnosisResult_suggestion_list>& QueryDiagnosisResult_diagnosis_results::getSuggestionList()
{
    return suggestionList_;
}

void QueryDiagnosisResult_diagnosis_results::setSuggestionList(const std::vector<QueryDiagnosisResult_suggestion_list>& value)
{
    suggestionList_ = value;
    suggestionListIsSet_ = true;
}

bool QueryDiagnosisResult_diagnosis_results::suggestionListIsSet() const
{
    return suggestionListIsSet_;
}

void QueryDiagnosisResult_diagnosis_results::unsetsuggestionList()
{
    suggestionListIsSet_ = false;
}

int32_t QueryDiagnosisResult_diagnosis_results::getScore() const
{
    return score_;
}

void QueryDiagnosisResult_diagnosis_results::setScore(int32_t value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool QueryDiagnosisResult_diagnosis_results::scoreIsSet() const
{
    return scoreIsSet_;
}

void QueryDiagnosisResult_diagnosis_results::unsetscore()
{
    scoreIsSet_ = false;
}

std::string QueryDiagnosisResult_diagnosis_results::getTime() const
{
    return time_;
}

void QueryDiagnosisResult_diagnosis_results::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool QueryDiagnosisResult_diagnosis_results::timeIsSet() const
{
    return timeIsSet_;
}

void QueryDiagnosisResult_diagnosis_results::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


