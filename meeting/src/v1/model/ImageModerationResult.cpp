

#include "huaweicloud/meeting/v1/model/ImageModerationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ImageModerationResult::ImageModerationResult()
{
    suggestion_ = "";
    suggestionIsSet_ = false;
    categorySuggestionsIsSet_ = false;
}

ImageModerationResult::~ImageModerationResult() = default;

void ImageModerationResult::validate()
{
}

web::json::value ImageModerationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(suggestionIsSet_) {
        val[utility::conversions::to_string_t("suggestion")] = ModelBase::toJson(suggestion_);
    }
    if(categorySuggestionsIsSet_) {
        val[utility::conversions::to_string_t("category_suggestions")] = ModelBase::toJson(categorySuggestions_);
    }

    return val;
}
bool ImageModerationResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("category_suggestions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category_suggestions"));
        if(!fieldValue.is_null())
        {
            CategorySuggestions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategorySuggestions(refVal);
        }
    }
    return ok;
}


std::string ImageModerationResult::getSuggestion() const
{
    return suggestion_;
}

void ImageModerationResult::setSuggestion(const std::string& value)
{
    suggestion_ = value;
    suggestionIsSet_ = true;
}

bool ImageModerationResult::suggestionIsSet() const
{
    return suggestionIsSet_;
}

void ImageModerationResult::unsetsuggestion()
{
    suggestionIsSet_ = false;
}

CategorySuggestions ImageModerationResult::getCategorySuggestions() const
{
    return categorySuggestions_;
}

void ImageModerationResult::setCategorySuggestions(const CategorySuggestions& value)
{
    categorySuggestions_ = value;
    categorySuggestionsIsSet_ = true;
}

bool ImageModerationResult::categorySuggestionsIsSet() const
{
    return categorySuggestionsIsSet_;
}

void ImageModerationResult::unsetcategorySuggestions()
{
    categorySuggestionsIsSet_ = false;
}

}
}
}
}
}


