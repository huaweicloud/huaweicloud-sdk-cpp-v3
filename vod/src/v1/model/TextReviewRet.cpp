

#include "huaweicloud/vod/v1/model/TextReviewRet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TextReviewRet::TextReviewRet()
{
    suggestion_ = "";
    suggestionIsSet_ = false;
    politics_ = "";
    politicsIsSet_ = false;
    porn_ = "";
    pornIsSet_ = false;
    abuse_ = "";
    abuseIsSet_ = false;
}

TextReviewRet::~TextReviewRet() = default;

void TextReviewRet::validate()
{
}

web::json::value TextReviewRet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(suggestionIsSet_) {
        val[utility::conversions::to_string_t("suggestion")] = ModelBase::toJson(suggestion_);
    }
    if(politicsIsSet_) {
        val[utility::conversions::to_string_t("politics")] = ModelBase::toJson(politics_);
    }
    if(pornIsSet_) {
        val[utility::conversions::to_string_t("porn")] = ModelBase::toJson(porn_);
    }
    if(abuseIsSet_) {
        val[utility::conversions::to_string_t("abuse")] = ModelBase::toJson(abuse_);
    }

    return val;
}
bool TextReviewRet::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("politics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("politics"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolitics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("porn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("porn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("abuse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("abuse"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbuse(refVal);
        }
    }
    return ok;
}


std::string TextReviewRet::getSuggestion() const
{
    return suggestion_;
}

void TextReviewRet::setSuggestion(const std::string& value)
{
    suggestion_ = value;
    suggestionIsSet_ = true;
}

bool TextReviewRet::suggestionIsSet() const
{
    return suggestionIsSet_;
}

void TextReviewRet::unsetsuggestion()
{
    suggestionIsSet_ = false;
}

std::string TextReviewRet::getPolitics() const
{
    return politics_;
}

void TextReviewRet::setPolitics(const std::string& value)
{
    politics_ = value;
    politicsIsSet_ = true;
}

bool TextReviewRet::politicsIsSet() const
{
    return politicsIsSet_;
}

void TextReviewRet::unsetpolitics()
{
    politicsIsSet_ = false;
}

std::string TextReviewRet::getPorn() const
{
    return porn_;
}

void TextReviewRet::setPorn(const std::string& value)
{
    porn_ = value;
    pornIsSet_ = true;
}

bool TextReviewRet::pornIsSet() const
{
    return pornIsSet_;
}

void TextReviewRet::unsetporn()
{
    pornIsSet_ = false;
}

std::string TextReviewRet::getAbuse() const
{
    return abuse_;
}

void TextReviewRet::setAbuse(const std::string& value)
{
    abuse_ = value;
    abuseIsSet_ = true;
}

bool TextReviewRet::abuseIsSet() const
{
    return abuseIsSet_;
}

void TextReviewRet::unsetabuse()
{
    abuseIsSet_ = false;
}

}
}
}
}
}


