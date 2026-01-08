

#include "huaweicloud/mpc/v1/model/ImageSprite.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ImageSprite::ImageSprite()
{
    paramsIsSet_ = false;
    outputIsSet_ = false;
    outputObjectName_ = "";
    outputObjectNameIsSet_ = false;
    webvttObjectName_ = "";
    webvttObjectNameIsSet_ = false;
}

ImageSprite::~ImageSprite() = default;

void ImageSprite::validate()
{
}

web::json::value ImageSprite::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputObjectNameIsSet_) {
        val[utility::conversions::to_string_t("output_object_name")] = ModelBase::toJson(outputObjectName_);
    }
    if(webvttObjectNameIsSet_) {
        val[utility::conversions::to_string_t("webvtt_object_name")] = ModelBase::toJson(webvttObjectName_);
    }

    return val;
}
bool ImageSprite::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            ImageSpritePara refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
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
    return ok;
}


ImageSpritePara ImageSprite::getParams() const
{
    return params_;
}

void ImageSprite::setParams(const ImageSpritePara& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool ImageSprite::paramsIsSet() const
{
    return paramsIsSet_;
}

void ImageSprite::unsetparams()
{
    paramsIsSet_ = false;
}

ObsObjInfo ImageSprite::getOutput() const
{
    return output_;
}

void ImageSprite::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool ImageSprite::outputIsSet() const
{
    return outputIsSet_;
}

void ImageSprite::unsetoutput()
{
    outputIsSet_ = false;
}

std::string ImageSprite::getOutputObjectName() const
{
    return outputObjectName_;
}

void ImageSprite::setOutputObjectName(const std::string& value)
{
    outputObjectName_ = value;
    outputObjectNameIsSet_ = true;
}

bool ImageSprite::outputObjectNameIsSet() const
{
    return outputObjectNameIsSet_;
}

void ImageSprite::unsetoutputObjectName()
{
    outputObjectNameIsSet_ = false;
}

std::string ImageSprite::getWebvttObjectName() const
{
    return webvttObjectName_;
}

void ImageSprite::setWebvttObjectName(const std::string& value)
{
    webvttObjectName_ = value;
    webvttObjectNameIsSet_ = true;
}

bool ImageSprite::webvttObjectNameIsSet() const
{
    return webvttObjectNameIsSet_;
}

void ImageSprite::unsetwebvttObjectName()
{
    webvttObjectNameIsSet_ = false;
}

}
}
}
}
}


