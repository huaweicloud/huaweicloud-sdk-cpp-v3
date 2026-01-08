

#include "huaweicloud/mpc/v1/model/ImageSpriteInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ImageSpriteInfo::ImageSpriteInfo()
{
    rowCount_ = 0;
    rowCountIsSet_ = false;
    columnCount_ = 0;
    columnCountIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    outputImageNameIsSet_ = false;
    outputWebvttName_ = "";
    outputWebvttNameIsSet_ = false;
    outputIsSet_ = false;
}

ImageSpriteInfo::~ImageSpriteInfo() = default;

void ImageSpriteInfo::validate()
{
}

web::json::value ImageSpriteInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rowCountIsSet_) {
        val[utility::conversions::to_string_t("row_count")] = ModelBase::toJson(rowCount_);
    }
    if(columnCountIsSet_) {
        val[utility::conversions::to_string_t("column_count")] = ModelBase::toJson(columnCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(outputImageNameIsSet_) {
        val[utility::conversions::to_string_t("output_image_name")] = ModelBase::toJson(outputImageName_);
    }
    if(outputWebvttNameIsSet_) {
        val[utility::conversions::to_string_t("output_webvtt_name")] = ModelBase::toJson(outputWebvttName_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool ImageSpriteInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("row_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("row_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output_image_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_image_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputImageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_webvtt_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_webvtt_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputWebvttName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


int32_t ImageSpriteInfo::getRowCount() const
{
    return rowCount_;
}

void ImageSpriteInfo::setRowCount(int32_t value)
{
    rowCount_ = value;
    rowCountIsSet_ = true;
}

bool ImageSpriteInfo::rowCountIsSet() const
{
    return rowCountIsSet_;
}

void ImageSpriteInfo::unsetrowCount()
{
    rowCountIsSet_ = false;
}

int32_t ImageSpriteInfo::getColumnCount() const
{
    return columnCount_;
}

void ImageSpriteInfo::setColumnCount(int32_t value)
{
    columnCount_ = value;
    columnCountIsSet_ = true;
}

bool ImageSpriteInfo::columnCountIsSet() const
{
    return columnCountIsSet_;
}

void ImageSpriteInfo::unsetcolumnCount()
{
    columnCountIsSet_ = false;
}

int32_t ImageSpriteInfo::getTotalCount() const
{
    return totalCount_;
}

void ImageSpriteInfo::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ImageSpriteInfo::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ImageSpriteInfo::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ImageSpriteInfo::getWidth() const
{
    return width_;
}

void ImageSpriteInfo::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ImageSpriteInfo::widthIsSet() const
{
    return widthIsSet_;
}

void ImageSpriteInfo::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t ImageSpriteInfo::getHeight() const
{
    return height_;
}

void ImageSpriteInfo::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ImageSpriteInfo::heightIsSet() const
{
    return heightIsSet_;
}

void ImageSpriteInfo::unsetheight()
{
    heightIsSet_ = false;
}

std::vector<std::string>& ImageSpriteInfo::getOutputImageName()
{
    return outputImageName_;
}

void ImageSpriteInfo::setOutputImageName(const std::vector<std::string>& value)
{
    outputImageName_ = value;
    outputImageNameIsSet_ = true;
}

bool ImageSpriteInfo::outputImageNameIsSet() const
{
    return outputImageNameIsSet_;
}

void ImageSpriteInfo::unsetoutputImageName()
{
    outputImageNameIsSet_ = false;
}

std::string ImageSpriteInfo::getOutputWebvttName() const
{
    return outputWebvttName_;
}

void ImageSpriteInfo::setOutputWebvttName(const std::string& value)
{
    outputWebvttName_ = value;
    outputWebvttNameIsSet_ = true;
}

bool ImageSpriteInfo::outputWebvttNameIsSet() const
{
    return outputWebvttNameIsSet_;
}

void ImageSpriteInfo::unsetoutputWebvttName()
{
    outputWebvttNameIsSet_ = false;
}

ObsObjInfo ImageSpriteInfo::getOutput() const
{
    return output_;
}

void ImageSpriteInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ImageSpriteInfo::outputIsSet() const
{
    return outputIsSet_;
}

void ImageSpriteInfo::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


