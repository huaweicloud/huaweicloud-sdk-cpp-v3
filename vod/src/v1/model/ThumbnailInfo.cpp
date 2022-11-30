

#include "huaweicloud/vod/v1/model/ThumbnailInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ThumbnailInfo::ThumbnailInfo()
{
    sampleIsSet_ = false;
    dotsIsSet_ = false;
    execDesc_ = "";
    execDescIsSet_ = false;
    thumbnailStatus_ = "";
    thumbnailStatusIsSet_ = false;
}

ThumbnailInfo::~ThumbnailInfo() = default;

void ThumbnailInfo::validate()
{
}

web::json::value ThumbnailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sampleIsSet_) {
        val[utility::conversions::to_string_t("sample")] = ModelBase::toJson(sample_);
    }
    if(dotsIsSet_) {
        val[utility::conversions::to_string_t("dots")] = ModelBase::toJson(dots_);
    }
    if(execDescIsSet_) {
        val[utility::conversions::to_string_t("exec_desc")] = ModelBase::toJson(execDesc_);
    }
    if(thumbnailStatusIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_status")] = ModelBase::toJson(thumbnailStatus_);
    }

    return val;
}

bool ThumbnailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sample"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample"));
        if(!fieldValue.is_null())
        {
            std::vector<ThumbnailRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dots"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dots"));
        if(!fieldValue.is_null())
        {
            std::vector<ThumbnailRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDots(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("thumbnail_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailStatus(refVal);
        }
    }
    return ok;
}


std::vector<ThumbnailRsp>& ThumbnailInfo::getSample()
{
    return sample_;
}

void ThumbnailInfo::setSample(const std::vector<ThumbnailRsp>& value)
{
    sample_ = value;
    sampleIsSet_ = true;
}

bool ThumbnailInfo::sampleIsSet() const
{
    return sampleIsSet_;
}

void ThumbnailInfo::unsetsample()
{
    sampleIsSet_ = false;
}

std::vector<ThumbnailRsp>& ThumbnailInfo::getDots()
{
    return dots_;
}

void ThumbnailInfo::setDots(const std::vector<ThumbnailRsp>& value)
{
    dots_ = value;
    dotsIsSet_ = true;
}

bool ThumbnailInfo::dotsIsSet() const
{
    return dotsIsSet_;
}

void ThumbnailInfo::unsetdots()
{
    dotsIsSet_ = false;
}

std::string ThumbnailInfo::getExecDesc() const
{
    return execDesc_;
}

void ThumbnailInfo::setExecDesc(const std::string& value)
{
    execDesc_ = value;
    execDescIsSet_ = true;
}

bool ThumbnailInfo::execDescIsSet() const
{
    return execDescIsSet_;
}

void ThumbnailInfo::unsetexecDesc()
{
    execDescIsSet_ = false;
}

std::string ThumbnailInfo::getThumbnailStatus() const
{
    return thumbnailStatus_;
}

void ThumbnailInfo::setThumbnailStatus(const std::string& value)
{
    thumbnailStatus_ = value;
    thumbnailStatusIsSet_ = true;
}

bool ThumbnailInfo::thumbnailStatusIsSet() const
{
    return thumbnailStatusIsSet_;
}

void ThumbnailInfo::unsetthumbnailStatus()
{
    thumbnailStatusIsSet_ = false;
}

}
}
}
}
}


