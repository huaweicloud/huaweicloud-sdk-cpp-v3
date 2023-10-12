

#include "huaweicloud/mpc/v1/model/OutputThumbnailPara.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




OutputThumbnailPara::OutputThumbnailPara()
{
    totalPictures_ = 0;
    totalPicturesIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    outputIsSet_ = false;
}

OutputThumbnailPara::~OutputThumbnailPara() = default;

void OutputThumbnailPara::validate()
{
}

web::json::value OutputThumbnailPara::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalPicturesIsSet_) {
        val[utility::conversions::to_string_t("total_pictures")] = ModelBase::toJson(totalPictures_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }

    return val;
}
bool OutputThumbnailPara::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_pictures"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_pictures"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalPictures(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
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


int32_t OutputThumbnailPara::getTotalPictures() const
{
    return totalPictures_;
}

void OutputThumbnailPara::setTotalPictures(int32_t value)
{
    totalPictures_ = value;
    totalPicturesIsSet_ = true;
}

bool OutputThumbnailPara::totalPicturesIsSet() const
{
    return totalPicturesIsSet_;
}

void OutputThumbnailPara::unsettotalPictures()
{
    totalPicturesIsSet_ = false;
}

int32_t OutputThumbnailPara::getWidth() const
{
    return width_;
}

void OutputThumbnailPara::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool OutputThumbnailPara::widthIsSet() const
{
    return widthIsSet_;
}

void OutputThumbnailPara::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t OutputThumbnailPara::getHeight() const
{
    return height_;
}

void OutputThumbnailPara::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool OutputThumbnailPara::heightIsSet() const
{
    return heightIsSet_;
}

void OutputThumbnailPara::unsetheight()
{
    heightIsSet_ = false;
}

std::string OutputThumbnailPara::getFileName() const
{
    return fileName_;
}

void OutputThumbnailPara::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool OutputThumbnailPara::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void OutputThumbnailPara::unsetfileName()
{
    fileNameIsSet_ = false;
}

ObsObjInfo OutputThumbnailPara::getOutput() const
{
    return output_;
}

void OutputThumbnailPara::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool OutputThumbnailPara::outputIsSet() const
{
    return outputIsSet_;
}

void OutputThumbnailPara::unsetoutput()
{
    outputIsSet_ = false;
}

}
}
}
}
}


