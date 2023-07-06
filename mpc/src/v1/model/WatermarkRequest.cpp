

#include "huaweicloud/mpc/v1/model/WatermarkRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




WatermarkRequest::WatermarkRequest()
{
    inputIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
    textContext_ = "";
    textContextIsSet_ = false;
    imageWatermarkIsSet_ = false;
    textWatermarkIsSet_ = false;
}

WatermarkRequest::~WatermarkRequest() = default;

void WatermarkRequest::validate()
{
}

web::json::value WatermarkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(textContextIsSet_) {
        val[utility::conversions::to_string_t("text_context")] = ModelBase::toJson(textContext_);
    }
    if(imageWatermarkIsSet_) {
        val[utility::conversions::to_string_t("image_watermark")] = ModelBase::toJson(imageWatermark_);
    }
    if(textWatermarkIsSet_) {
        val[utility::conversions::to_string_t("text_watermark")] = ModelBase::toJson(textWatermark_);
    }

    return val;
}

bool WatermarkRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextContext(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_watermark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_watermark"));
        if(!fieldValue.is_null())
        {
            ImageWatermark refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageWatermark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_watermark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_watermark"));
        if(!fieldValue.is_null())
        {
            TextWatermark refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextWatermark(refVal);
        }
    }
    return ok;
}

ObsObjInfo WatermarkRequest::getInput() const
{
    return input_;
}

void WatermarkRequest::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool WatermarkRequest::inputIsSet() const
{
    return inputIsSet_;
}

void WatermarkRequest::unsetinput()
{
    inputIsSet_ = false;
}

std::string WatermarkRequest::getTemplateId() const
{
    return templateId_;
}

void WatermarkRequest::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool WatermarkRequest::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void WatermarkRequest::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string WatermarkRequest::getTextContext() const
{
    return textContext_;
}

void WatermarkRequest::setTextContext(const std::string& value)
{
    textContext_ = value;
    textContextIsSet_ = true;
}

bool WatermarkRequest::textContextIsSet() const
{
    return textContextIsSet_;
}

void WatermarkRequest::unsettextContext()
{
    textContextIsSet_ = false;
}

ImageWatermark WatermarkRequest::getImageWatermark() const
{
    return imageWatermark_;
}

void WatermarkRequest::setImageWatermark(const ImageWatermark& value)
{
    imageWatermark_ = value;
    imageWatermarkIsSet_ = true;
}

bool WatermarkRequest::imageWatermarkIsSet() const
{
    return imageWatermarkIsSet_;
}

void WatermarkRequest::unsetimageWatermark()
{
    imageWatermarkIsSet_ = false;
}

TextWatermark WatermarkRequest::getTextWatermark() const
{
    return textWatermark_;
}

void WatermarkRequest::setTextWatermark(const TextWatermark& value)
{
    textWatermark_ = value;
    textWatermarkIsSet_ = true;
}

bool WatermarkRequest::textWatermarkIsSet() const
{
    return textWatermarkIsSet_;
}

void WatermarkRequest::unsettextWatermark()
{
    textWatermarkIsSet_ = false;
}

}
}
}
}
}


