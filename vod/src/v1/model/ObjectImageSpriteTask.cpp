

#include "huaweicloud/vod/v1/model/ObjectImageSpriteTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ObjectImageSpriteTask::ObjectImageSpriteTask()
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
    outputObjectName_ = "";
    outputObjectNameIsSet_ = false;
    webvttObjectName_ = "";
    webvttObjectNameIsSet_ = false;
    outputIsSet_ = false;
}

ObjectImageSpriteTask::~ObjectImageSpriteTask() = default;

void ObjectImageSpriteTask::validate()
{
}

web::json::value ObjectImageSpriteTask::toJson() const
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
    if(outputObjectNameIsSet_) {
        val[utility::conversions::to_string_t("output_object_name")] = ModelBase::toJson(outputObjectName_);
    }
    if(webvttObjectNameIsSet_) {
        val[utility::conversions::to_string_t("webvtt_object_name")] = ModelBase::toJson(webvttObjectName_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool ObjectImageSpriteTask::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("output_object_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_object_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputObjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webvtt_object_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webvtt_object_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebvttObjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    return ok;
}


std::string ObjectImageSpriteTask::getSampleType() const
{
    return sampleType_;
}

void ObjectImageSpriteTask::setSampleType(const std::string& value)
{
    sampleType_ = value;
    sampleTypeIsSet_ = true;
}

bool ObjectImageSpriteTask::sampleTypeIsSet() const
{
    return sampleTypeIsSet_;
}

void ObjectImageSpriteTask::unsetsampleType()
{
    sampleTypeIsSet_ = false;
}

int32_t ObjectImageSpriteTask::getSampleInterval() const
{
    return sampleInterval_;
}

void ObjectImageSpriteTask::setSampleInterval(int32_t value)
{
    sampleInterval_ = value;
    sampleIntervalIsSet_ = true;
}

bool ObjectImageSpriteTask::sampleIntervalIsSet() const
{
    return sampleIntervalIsSet_;
}

void ObjectImageSpriteTask::unsetsampleInterval()
{
    sampleIntervalIsSet_ = false;
}

int32_t ObjectImageSpriteTask::getRowCount() const
{
    return rowCount_;
}

void ObjectImageSpriteTask::setRowCount(int32_t value)
{
    rowCount_ = value;
    rowCountIsSet_ = true;
}

bool ObjectImageSpriteTask::rowCountIsSet() const
{
    return rowCountIsSet_;
}

void ObjectImageSpriteTask::unsetrowCount()
{
    rowCountIsSet_ = false;
}

int32_t ObjectImageSpriteTask::getColumnCount() const
{
    return columnCount_;
}

void ObjectImageSpriteTask::setColumnCount(int32_t value)
{
    columnCount_ = value;
    columnCountIsSet_ = true;
}

bool ObjectImageSpriteTask::columnCountIsSet() const
{
    return columnCountIsSet_;
}

void ObjectImageSpriteTask::unsetcolumnCount()
{
    columnCountIsSet_ = false;
}

int32_t ObjectImageSpriteTask::getWidth() const
{
    return width_;
}

void ObjectImageSpriteTask::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ObjectImageSpriteTask::widthIsSet() const
{
    return widthIsSet_;
}

void ObjectImageSpriteTask::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t ObjectImageSpriteTask::getHeight() const
{
    return height_;
}

void ObjectImageSpriteTask::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ObjectImageSpriteTask::heightIsSet() const
{
    return heightIsSet_;
}

void ObjectImageSpriteTask::unsetheight()
{
    heightIsSet_ = false;
}

std::string ObjectImageSpriteTask::getResolutionAdaptive() const
{
    return resolutionAdaptive_;
}

void ObjectImageSpriteTask::setResolutionAdaptive(const std::string& value)
{
    resolutionAdaptive_ = value;
    resolutionAdaptiveIsSet_ = true;
}

bool ObjectImageSpriteTask::resolutionAdaptiveIsSet() const
{
    return resolutionAdaptiveIsSet_;
}

void ObjectImageSpriteTask::unsetresolutionAdaptive()
{
    resolutionAdaptiveIsSet_ = false;
}

std::string ObjectImageSpriteTask::getFillType() const
{
    return fillType_;
}

void ObjectImageSpriteTask::setFillType(const std::string& value)
{
    fillType_ = value;
    fillTypeIsSet_ = true;
}

bool ObjectImageSpriteTask::fillTypeIsSet() const
{
    return fillTypeIsSet_;
}

void ObjectImageSpriteTask::unsetfillType()
{
    fillTypeIsSet_ = false;
}

std::string ObjectImageSpriteTask::getFormat() const
{
    return format_;
}

void ObjectImageSpriteTask::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool ObjectImageSpriteTask::formatIsSet() const
{
    return formatIsSet_;
}

void ObjectImageSpriteTask::unsetformat()
{
    formatIsSet_ = false;
}

std::string ObjectImageSpriteTask::getOutputObjectName() const
{
    return outputObjectName_;
}

void ObjectImageSpriteTask::setOutputObjectName(const std::string& value)
{
    outputObjectName_ = value;
    outputObjectNameIsSet_ = true;
}

bool ObjectImageSpriteTask::outputObjectNameIsSet() const
{
    return outputObjectNameIsSet_;
}

void ObjectImageSpriteTask::unsetoutputObjectName()
{
    outputObjectNameIsSet_ = false;
}

std::string ObjectImageSpriteTask::getWebvttObjectName() const
{
    return webvttObjectName_;
}

void ObjectImageSpriteTask::setWebvttObjectName(const std::string& value)
{
    webvttObjectName_ = value;
    webvttObjectNameIsSet_ = true;
}

bool ObjectImageSpriteTask::webvttObjectNameIsSet() const
{
    return webvttObjectNameIsSet_;
}

void ObjectImageSpriteTask::unsetwebvttObjectName()
{
    webvttObjectNameIsSet_ = false;
}

ObsInfo ObjectImageSpriteTask::getOutput() const
{
    return output_;
}

void ObjectImageSpriteTask::setOutput(const ObsInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ObjectImageSpriteTask::outputIsSet() const
{
    return outputIsSet_;
}

void ObjectImageSpriteTask::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


