

#include "huaweicloud/mpc/v1/model/ImageSpritePara.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ImageSpritePara::ImageSpritePara()
{
    sampleType_ = "";
    sampleTypeIsSet_ = false;
    sampleInterval_ = 0;
    sampleIntervalIsSet_ = false;
    rowCount_ = 0;
    rowCountIsSet_ = false;
    columnCount_ = 0;
    columnCountIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    resolutionAdaptive_ = "";
    resolutionAdaptiveIsSet_ = false;
    fillType_ = "";
    fillTypeIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
}

ImageSpritePara::~ImageSpritePara() = default;

void ImageSpritePara::validate()
{
}

web::json::value ImageSpritePara::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sampleTypeIsSet_) {
        val[utility::conversions::to_string_t("sample_type")] = ModelBase::toJson(sampleType_);
    }
    if(sampleIntervalIsSet_) {
        val[utility::conversions::to_string_t("sample_interval")] = ModelBase::toJson(sampleInterval_);
    }
    if(rowCountIsSet_) {
        val[utility::conversions::to_string_t("row_count")] = ModelBase::toJson(rowCount_);
    }
    if(columnCountIsSet_) {
        val[utility::conversions::to_string_t("column_count")] = ModelBase::toJson(columnCount_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(resolutionAdaptiveIsSet_) {
        val[utility::conversions::to_string_t("resolution_adaptive")] = ModelBase::toJson(resolutionAdaptive_);
    }
    if(fillTypeIsSet_) {
        val[utility::conversions::to_string_t("fill_type")] = ModelBase::toJson(fillType_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }

    return val;
}
bool ImageSpritePara::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sample_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sample_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleInterval(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("resolution_adaptive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution_adaptive"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolutionAdaptive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fill_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fill_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFillType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    return ok;
}


std::string ImageSpritePara::getSampleType() const
{
    return sampleType_;
}

void ImageSpritePara::setSampleType(const std::string& value)
{
    sampleType_ = value;
    sampleTypeIsSet_ = true;
}

bool ImageSpritePara::sampleTypeIsSet() const
{
    return sampleTypeIsSet_;
}

void ImageSpritePara::unsetsampleType()
{
    sampleTypeIsSet_ = false;
}

int32_t ImageSpritePara::getSampleInterval() const
{
    return sampleInterval_;
}

void ImageSpritePara::setSampleInterval(int32_t value)
{
    sampleInterval_ = value;
    sampleIntervalIsSet_ = true;
}

bool ImageSpritePara::sampleIntervalIsSet() const
{
    return sampleIntervalIsSet_;
}

void ImageSpritePara::unsetsampleInterval()
{
    sampleIntervalIsSet_ = false;
}

int32_t ImageSpritePara::getRowCount() const
{
    return rowCount_;
}

void ImageSpritePara::setRowCount(int32_t value)
{
    rowCount_ = value;
    rowCountIsSet_ = true;
}

bool ImageSpritePara::rowCountIsSet() const
{
    return rowCountIsSet_;
}

void ImageSpritePara::unsetrowCount()
{
    rowCountIsSet_ = false;
}

int32_t ImageSpritePara::getColumnCount() const
{
    return columnCount_;
}

void ImageSpritePara::setColumnCount(int32_t value)
{
    columnCount_ = value;
    columnCountIsSet_ = true;
}

bool ImageSpritePara::columnCountIsSet() const
{
    return columnCountIsSet_;
}

void ImageSpritePara::unsetcolumnCount()
{
    columnCountIsSet_ = false;
}

int32_t ImageSpritePara::getWidth() const
{
    return width_;
}

void ImageSpritePara::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ImageSpritePara::widthIsSet() const
{
    return widthIsSet_;
}

void ImageSpritePara::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t ImageSpritePara::getHeight() const
{
    return height_;
}

void ImageSpritePara::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ImageSpritePara::heightIsSet() const
{
    return heightIsSet_;
}

void ImageSpritePara::unsetheight()
{
    heightIsSet_ = false;
}

std::string ImageSpritePara::getResolutionAdaptive() const
{
    return resolutionAdaptive_;
}

void ImageSpritePara::setResolutionAdaptive(const std::string& value)
{
    resolutionAdaptive_ = value;
    resolutionAdaptiveIsSet_ = true;
}

bool ImageSpritePara::resolutionAdaptiveIsSet() const
{
    return resolutionAdaptiveIsSet_;
}

void ImageSpritePara::unsetresolutionAdaptive()
{
    resolutionAdaptiveIsSet_ = false;
}

std::string ImageSpritePara::getFillType() const
{
    return fillType_;
}

void ImageSpritePara::setFillType(const std::string& value)
{
    fillType_ = value;
    fillTypeIsSet_ = true;
}

bool ImageSpritePara::fillTypeIsSet() const
{
    return fillTypeIsSet_;
}

void ImageSpritePara::unsetfillType()
{
    fillTypeIsSet_ = false;
}

std::string ImageSpritePara::getFormat() const
{
    return format_;
}

void ImageSpritePara::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ImageSpritePara::formatIsSet() const
{
    return formatIsSet_;
}

void ImageSpritePara::unsetformat()
{
    formatIsSet_ = false;
}

}
}
}
}
}


