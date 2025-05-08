

#include "huaweicloud/vod/v1/model/ImageSpriteTaskOutPut.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ImageSpriteTaskOutPut::ImageSpriteTaskOutPut()
{
    obsInfoIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    spriteImageListIsSet_ = false;
}

ImageSpriteTaskOutPut::~ImageSpriteTaskOutPut() = default;

void ImageSpriteTaskOutPut::validate()
{
}

web::json::value ImageSpriteTaskOutPut::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsInfoIsSet_) {
        val[utility::conversions::to_string_t("obs_info")] = ModelBase::toJson(obsInfo_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(spriteImageListIsSet_) {
        val[utility::conversions::to_string_t("sprite_image_list")] = ModelBase::toJson(spriteImageList_);
    }

    return val;
}
bool ImageSpriteTaskOutPut::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_info"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sprite_image_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sprite_image_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpriteImageList(refVal);
        }
    }
    return ok;
}


ObsInfo ImageSpriteTaskOutPut::getObsInfo() const
{
    return obsInfo_;
}

void ImageSpriteTaskOutPut::setObsInfo(const ObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool ImageSpriteTaskOutPut::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void ImageSpriteTaskOutPut::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

int32_t ImageSpriteTaskOutPut::getHeight() const
{
    return height_;
}

void ImageSpriteTaskOutPut::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ImageSpriteTaskOutPut::heightIsSet() const
{
    return heightIsSet_;
}

void ImageSpriteTaskOutPut::unsetheight()
{
    heightIsSet_ = false;
}

int32_t ImageSpriteTaskOutPut::getWidth() const
{
    return width_;
}

void ImageSpriteTaskOutPut::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ImageSpriteTaskOutPut::widthIsSet() const
{
    return widthIsSet_;
}

void ImageSpriteTaskOutPut::unsetwidth()
{
    widthIsSet_ = false;
}

std::vector<std::string>& ImageSpriteTaskOutPut::getSpriteImageList()
{
    return spriteImageList_;
}

void ImageSpriteTaskOutPut::setSpriteImageList(const std::vector<std::string>& value)
{
    spriteImageList_ = value;
    spriteImageListIsSet_ = true;
}

bool ImageSpriteTaskOutPut::spriteImageListIsSet() const
{
    return spriteImageListIsSet_;
}

void ImageSpriteTaskOutPut::unsetspriteImageList()
{
    spriteImageListIsSet_ = false;
}

}
}
}
}
}


