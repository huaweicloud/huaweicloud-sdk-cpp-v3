

#include "huaweicloud/image/v2/model/RecaptureDetectResponse_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {




RecaptureDetectResponse_result::RecaptureDetectResponse_result()
{
    suggestion_ = "";
    suggestionIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    score_ = "";
    scoreIsSet_ = false;
    detailIsSet_ = false;
}

RecaptureDetectResponse_result::~RecaptureDetectResponse_result() = default;

void RecaptureDetectResponse_result::validate()
{
}

web::json::value RecaptureDetectResponse_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(suggestionIsSet_) {
        val[utility::conversions::to_string_t("suggestion")] = ModelBase::toJson(suggestion_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(scoreIsSet_) {
        val[utility::conversions::to_string_t("score")] = ModelBase::toJson(score_);
    }
    if(detailIsSet_) {
        val[utility::conversions::to_string_t("detail")] = ModelBase::toJson(detail_);
    }

    return val;
}
bool RecaptureDetectResponse_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("suggestion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggestion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail"));
        if(!fieldValue.is_null())
        {
            std::vector<RecaptureDetectResponse_result_detail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetail(refVal);
        }
    }
    return ok;
}


std::string RecaptureDetectResponse_result::getSuggestion() const
{
    return suggestion_;
}

void RecaptureDetectResponse_result::setSuggestion(const std::string& value)
{
    suggestion_ = value;
    suggestionIsSet_ = true;
}

bool RecaptureDetectResponse_result::suggestionIsSet() const
{
    return suggestionIsSet_;
}

void RecaptureDetectResponse_result::unsetsuggestion()
{
    suggestionIsSet_ = false;
}

std::string RecaptureDetectResponse_result::getCategory() const
{
    return category_;
}

void RecaptureDetectResponse_result::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool RecaptureDetectResponse_result::categoryIsSet() const
{
    return categoryIsSet_;
}

void RecaptureDetectResponse_result::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string RecaptureDetectResponse_result::getScore() const
{
    return score_;
}

void RecaptureDetectResponse_result::setScore(const std::string& value)
{
    score_ = value;
    scoreIsSet_ = true;
}

bool RecaptureDetectResponse_result::scoreIsSet() const
{
    return scoreIsSet_;
}

void RecaptureDetectResponse_result::unsetscore()
{
    scoreIsSet_ = false;
}

std::vector<RecaptureDetectResponse_result_detail>& RecaptureDetectResponse_result::getDetail()
{
    return detail_;
}

void RecaptureDetectResponse_result::setDetail(const std::vector<RecaptureDetectResponse_result_detail>& value)
{
    detail_ = value;
    detailIsSet_ = true;
}

bool RecaptureDetectResponse_result::detailIsSet() const
{
    return detailIsSet_;
}

void RecaptureDetectResponse_result::unsetdetail()
{
    detailIsSet_ = false;
}

}
}
}
}
}


