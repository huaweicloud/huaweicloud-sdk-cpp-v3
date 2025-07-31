

#include "huaweicloud/metastudio/v1/model/AssessProperty.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AssessProperty::AssessProperty()
{
    expected_ = "";
    expectedIsSet_ = false;
    actual_ = "";
    actualIsSet_ = false;
    suggestion_ = "";
    suggestionIsSet_ = false;
    suggestionEn_ = "";
    suggestionEnIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

AssessProperty::~AssessProperty() = default;

void AssessProperty::validate()
{
}

web::json::value AssessProperty::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expectedIsSet_) {
        val[utility::conversions::to_string_t("expected")] = ModelBase::toJson(expected_);
    }
    if(actualIsSet_) {
        val[utility::conversions::to_string_t("actual")] = ModelBase::toJson(actual_);
    }
    if(suggestionIsSet_) {
        val[utility::conversions::to_string_t("suggestion")] = ModelBase::toJson(suggestion_);
    }
    if(suggestionEnIsSet_) {
        val[utility::conversions::to_string_t("suggestion_en")] = ModelBase::toJson(suggestionEn_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool AssessProperty::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expected"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actual"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actual"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActual(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggestion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggestion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("suggestion_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("suggestion_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuggestionEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string AssessProperty::getExpected() const
{
    return expected_;
}

void AssessProperty::setExpected(const std::string& value)
{
    expected_ = value;
    expectedIsSet_ = true;
}

bool AssessProperty::expectedIsSet() const
{
    return expectedIsSet_;
}

void AssessProperty::unsetexpected()
{
    expectedIsSet_ = false;
}

std::string AssessProperty::getActual() const
{
    return actual_;
}

void AssessProperty::setActual(const std::string& value)
{
    actual_ = value;
    actualIsSet_ = true;
}

bool AssessProperty::actualIsSet() const
{
    return actualIsSet_;
}

void AssessProperty::unsetactual()
{
    actualIsSet_ = false;
}

std::string AssessProperty::getSuggestion() const
{
    return suggestion_;
}

void AssessProperty::setSuggestion(const std::string& value)
{
    suggestion_ = value;
    suggestionIsSet_ = true;
}

bool AssessProperty::suggestionIsSet() const
{
    return suggestionIsSet_;
}

void AssessProperty::unsetsuggestion()
{
    suggestionIsSet_ = false;
}

std::string AssessProperty::getSuggestionEn() const
{
    return suggestionEn_;
}

void AssessProperty::setSuggestionEn(const std::string& value)
{
    suggestionEn_ = value;
    suggestionEnIsSet_ = true;
}

bool AssessProperty::suggestionEnIsSet() const
{
    return suggestionEnIsSet_;
}

void AssessProperty::unsetsuggestionEn()
{
    suggestionEnIsSet_ = false;
}

int32_t AssessProperty::getStatus() const
{
    return status_;
}

void AssessProperty::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AssessProperty::statusIsSet() const
{
    return statusIsSet_;
}

void AssessProperty::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


