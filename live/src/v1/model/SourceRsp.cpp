

#include "huaweicloud/live/v1/model/SourceRsp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




SourceRsp::SourceRsp()
{
    url_ = "";
    urlIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    enableSnapshot_ = false;
    enableSnapshotIsSet_ = false;
}

SourceRsp::~SourceRsp() = default;

void SourceRsp::validate()
{
}

web::json::value SourceRsp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(enableSnapshotIsSet_) {
        val[utility::conversions::to_string_t("enable_snapshot")] = ModelBase::toJson(enableSnapshot_);
    }

    return val;
}
bool SourceRsp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_snapshot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_snapshot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSnapshot(refVal);
        }
    }
    return ok;
}


std::string SourceRsp::getUrl() const
{
    return url_;
}

void SourceRsp::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool SourceRsp::urlIsSet() const
{
    return urlIsSet_;
}

void SourceRsp::unseturl()
{
    urlIsSet_ = false;
}

int32_t SourceRsp::getBitrate() const
{
    return bitrate_;
}

void SourceRsp::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool SourceRsp::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void SourceRsp::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t SourceRsp::getWidth() const
{
    return width_;
}

void SourceRsp::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool SourceRsp::widthIsSet() const
{
    return widthIsSet_;
}

void SourceRsp::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t SourceRsp::getHeight() const
{
    return height_;
}

void SourceRsp::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool SourceRsp::heightIsSet() const
{
    return heightIsSet_;
}

void SourceRsp::unsetheight()
{
    heightIsSet_ = false;
}

bool SourceRsp::isEnableSnapshot() const
{
    return enableSnapshot_;
}

void SourceRsp::setEnableSnapshot(bool value)
{
    enableSnapshot_ = value;
    enableSnapshotIsSet_ = true;
}

bool SourceRsp::enableSnapshotIsSet() const
{
    return enableSnapshotIsSet_;
}

void SourceRsp::unsetenableSnapshot()
{
    enableSnapshotIsSet_ = false;
}

}
}
}
}
}


