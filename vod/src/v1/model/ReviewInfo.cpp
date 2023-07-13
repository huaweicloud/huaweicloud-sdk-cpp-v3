

#include "huaweicloud/vod/v1/model/ReviewInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ReviewInfo::ReviewInfo()
{
    suggestion_ = "";
    suggestionIsSet_ = false;
    textIsSet_ = false;
    coverIsSet_ = false;
    videoIsSet_ = false;
    execDesc_ = "";
    execDescIsSet_ = false;
    reviewStatus_ = "";
    reviewStatusIsSet_ = false;
}

ReviewInfo::~ReviewInfo() = default;

void ReviewInfo::validate()
{
}

web::json::value ReviewInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(suggestionIsSet_) {
        val[utility::conversions::to_string_t("suggestion")] = ModelBase::toJson(suggestion_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(coverIsSet_) {
        val[utility::conversions::to_string_t("cover")] = ModelBase::toJson(cover_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(execDescIsSet_) {
        val[utility::conversions::to_string_t("exec_desc")] = ModelBase::toJson(execDesc_);
    }
    if(reviewStatusIsSet_) {
        val[utility::conversions::to_string_t("review_status")] = ModelBase::toJson(reviewStatus_);
    }

    return val;
}

bool ReviewInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            TextReviewRet refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cover"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cover"));
        if(!fieldValue.is_null())
        {
            std::vector<PictureReviewRet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCover(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            std::vector<PictureReviewRet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewStatus(refVal);
        }
    }
    return ok;
}

std::string ReviewInfo::getSuggestion() const
{
    return suggestion_;
}

void ReviewInfo::setSuggestion(const std::string& value)
{
    suggestion_ = value;
    suggestionIsSet_ = true;
}

bool ReviewInfo::suggestionIsSet() const
{
    return suggestionIsSet_;
}

void ReviewInfo::unsetsuggestion()
{
    suggestionIsSet_ = false;
}

TextReviewRet ReviewInfo::getText() const
{
    return text_;
}

void ReviewInfo::setText(const TextReviewRet& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool ReviewInfo::textIsSet() const
{
    return textIsSet_;
}

void ReviewInfo::unsettext()
{
    textIsSet_ = false;
}

std::vector<PictureReviewRet>& ReviewInfo::getCover()
{
    return cover_;
}

void ReviewInfo::setCover(const std::vector<PictureReviewRet>& value)
{
    cover_ = value;
    coverIsSet_ = true;
}

bool ReviewInfo::coverIsSet() const
{
    return coverIsSet_;
}

void ReviewInfo::unsetcover()
{
    coverIsSet_ = false;
}

std::vector<PictureReviewRet>& ReviewInfo::getVideo()
{
    return video_;
}

void ReviewInfo::setVideo(const std::vector<PictureReviewRet>& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool ReviewInfo::videoIsSet() const
{
    return videoIsSet_;
}

void ReviewInfo::unsetvideo()
{
    videoIsSet_ = false;
}

std::string ReviewInfo::getExecDesc() const
{
    return execDesc_;
}

void ReviewInfo::setExecDesc(const std::string& value)
{
    execDesc_ = value;
    execDescIsSet_ = true;
}

bool ReviewInfo::execDescIsSet() const
{
    return execDescIsSet_;
}

void ReviewInfo::unsetexecDesc()
{
    execDescIsSet_ = false;
}

std::string ReviewInfo::getReviewStatus() const
{
    return reviewStatus_;
}

void ReviewInfo::setReviewStatus(const std::string& value)
{
    reviewStatus_ = value;
    reviewStatusIsSet_ = true;
}

bool ReviewInfo::reviewStatusIsSet() const
{
    return reviewStatusIsSet_;
}

void ReviewInfo::unsetreviewStatus()
{
    reviewStatusIsSet_ = false;
}

}
}
}
}
}


