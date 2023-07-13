

#include "huaweicloud/vod/v1/model/PictureReviewRet.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




PictureReviewRet::PictureReviewRet()
{
    suggestion_ = "";
    suggestionIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    politicsIsSet_ = false;
    terrorismIsSet_ = false;
    pornIsSet_ = false;
}

PictureReviewRet::~PictureReviewRet() = default;

void PictureReviewRet::validate()
{
}

web::json::value PictureReviewRet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(suggestionIsSet_) {
        val[utility::conversions::to_string_t("suggestion")] = ModelBase::toJson(suggestion_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(politicsIsSet_) {
        val[utility::conversions::to_string_t("politics")] = ModelBase::toJson(politics_);
    }
    if(terrorismIsSet_) {
        val[utility::conversions::to_string_t("terrorism")] = ModelBase::toJson(terrorism_);
    }
    if(pornIsSet_) {
        val[utility::conversions::to_string_t("porn")] = ModelBase::toJson(porn_);
    }

    return val;
}

bool PictureReviewRet::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("politics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("politics"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolitics(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("terrorism"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("terrorism"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTerrorism(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("porn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("porn"));
        if(!fieldValue.is_null())
        {
            std::vector<ReviewDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPorn(refVal);
        }
    }
    return ok;
}

std::string PictureReviewRet::getSuggestion() const
{
    return suggestion_;
}

void PictureReviewRet::setSuggestion(const std::string& value)
{
    suggestion_ = value;
    suggestionIsSet_ = true;
}

bool PictureReviewRet::suggestionIsSet() const
{
    return suggestionIsSet_;
}

void PictureReviewRet::unsetsuggestion()
{
    suggestionIsSet_ = false;
}

int32_t PictureReviewRet::getOffset() const
{
    return offset_;
}

void PictureReviewRet::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool PictureReviewRet::offsetIsSet() const
{
    return offsetIsSet_;
}

void PictureReviewRet::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string PictureReviewRet::getUrl() const
{
    return url_;
}

void PictureReviewRet::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool PictureReviewRet::urlIsSet() const
{
    return urlIsSet_;
}

void PictureReviewRet::unseturl()
{
    urlIsSet_ = false;
}

std::vector<ReviewDetail>& PictureReviewRet::getPolitics()
{
    return politics_;
}

void PictureReviewRet::setPolitics(const std::vector<ReviewDetail>& value)
{
    politics_ = value;
    politicsIsSet_ = true;
}

bool PictureReviewRet::politicsIsSet() const
{
    return politicsIsSet_;
}

void PictureReviewRet::unsetpolitics()
{
    politicsIsSet_ = false;
}

std::vector<ReviewDetail>& PictureReviewRet::getTerrorism()
{
    return terrorism_;
}

void PictureReviewRet::setTerrorism(const std::vector<ReviewDetail>& value)
{
    terrorism_ = value;
    terrorismIsSet_ = true;
}

bool PictureReviewRet::terrorismIsSet() const
{
    return terrorismIsSet_;
}

void PictureReviewRet::unsetterrorism()
{
    terrorismIsSet_ = false;
}

std::vector<ReviewDetail>& PictureReviewRet::getPorn()
{
    return porn_;
}

void PictureReviewRet::setPorn(const std::vector<ReviewDetail>& value)
{
    porn_ = value;
    pornIsSet_ = true;
}

bool PictureReviewRet::pornIsSet() const
{
    return pornIsSet_;
}

void PictureReviewRet::unsetporn()
{
    pornIsSet_ = false;
}

}
}
}
}
}


