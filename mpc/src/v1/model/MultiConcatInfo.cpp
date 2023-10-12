

#include "huaweicloud/mpc/v1/model/MultiConcatInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MultiConcatInfo::MultiConcatInfo()
{
    inputsIsSet_ = false;
    transTemplateIdsIsSet_ = false;
    avParametersIsSet_ = false;
    outputIsSet_ = false;
    imageWatermarkSettingsIsSet_ = false;
}

MultiConcatInfo::~MultiConcatInfo() = default;

void MultiConcatInfo::validate()
{
}

web::json::value MultiConcatInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(transTemplateIdsIsSet_) {
        val[utility::conversions::to_string_t("trans_template_ids")] = ModelBase::toJson(transTemplateIds_);
    }
    if(avParametersIsSet_) {
        val[utility::conversions::to_string_t("av_parameters")] = ModelBase::toJson(avParameters_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(imageWatermarkSettingsIsSet_) {
        val[utility::conversions::to_string_t("image_watermark_settings")] = ModelBase::toJson(imageWatermarkSettings_);
    }

    return val;
}
bool MultiConcatInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<ObsObjInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trans_template_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_template_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransTemplateIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("av_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("av_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<AvParameters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvParameters(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("image_watermark_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_watermark_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageWatermarkSetting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageWatermarkSettings(refVal);
        }
    }
    return ok;
}


std::vector<ObsObjInfo>& MultiConcatInfo::getInputs()
{
    return inputs_;
}

void MultiConcatInfo::setInputs(const std::vector<ObsObjInfo>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool MultiConcatInfo::inputsIsSet() const
{
    return inputsIsSet_;
}

void MultiConcatInfo::unsetinputs()
{
    inputsIsSet_ = false;
}

std::vector<int32_t>& MultiConcatInfo::getTransTemplateIds()
{
    return transTemplateIds_;
}

void MultiConcatInfo::setTransTemplateIds(std::vector<int32_t> value)
{
    transTemplateIds_ = value;
    transTemplateIdsIsSet_ = true;
}

bool MultiConcatInfo::transTemplateIdsIsSet() const
{
    return transTemplateIdsIsSet_;
}

void MultiConcatInfo::unsettransTemplateIds()
{
    transTemplateIdsIsSet_ = false;
}

std::vector<AvParameters>& MultiConcatInfo::getAvParameters()
{
    return avParameters_;
}

void MultiConcatInfo::setAvParameters(const std::vector<AvParameters>& value)
{
    avParameters_ = value;
    avParametersIsSet_ = true;
}

bool MultiConcatInfo::avParametersIsSet() const
{
    return avParametersIsSet_;
}

void MultiConcatInfo::unsetavParameters()
{
    avParametersIsSet_ = false;
}

ObsObjInfo MultiConcatInfo::getOutput() const
{
    return output_;
}

void MultiConcatInfo::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool MultiConcatInfo::outputIsSet() const
{
    return outputIsSet_;
}

void MultiConcatInfo::unsetoutput()
{
    outputIsSet_ = false;
}

std::vector<ImageWatermarkSetting>& MultiConcatInfo::getImageWatermarkSettings()
{
    return imageWatermarkSettings_;
}

void MultiConcatInfo::setImageWatermarkSettings(const std::vector<ImageWatermarkSetting>& value)
{
    imageWatermarkSettings_ = value;
    imageWatermarkSettingsIsSet_ = true;
}

bool MultiConcatInfo::imageWatermarkSettingsIsSet() const
{
    return imageWatermarkSettingsIsSet_;
}

void MultiConcatInfo::unsetimageWatermarkSettings()
{
    imageWatermarkSettingsIsSet_ = false;
}

}
}
}
}
}


