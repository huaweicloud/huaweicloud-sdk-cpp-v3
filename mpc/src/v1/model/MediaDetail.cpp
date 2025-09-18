

#include "huaweicloud/mpc/v1/model/MediaDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




MediaDetail::MediaDetail()
{
    featuresIsSet_ = false;
    originParaIsSet_ = false;
    outputVideoParasIsSet_ = false;
    replaceSubIndexIsSet_ = false;
    outputThumbnailParaIsSet_ = false;
    outputWatermarkParasIsSet_ = false;
    metadataIsSet_ = false;
}

MediaDetail::~MediaDetail() = default;

void MediaDetail::validate()
{
}

web::json::value MediaDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(featuresIsSet_) {
        val[utility::conversions::to_string_t("features")] = ModelBase::toJson(features_);
    }
    if(originParaIsSet_) {
        val[utility::conversions::to_string_t("origin_para")] = ModelBase::toJson(originPara_);
    }
    if(outputVideoParasIsSet_) {
        val[utility::conversions::to_string_t("output_video_paras")] = ModelBase::toJson(outputVideoParas_);
    }
    if(replaceSubIndexIsSet_) {
        val[utility::conversions::to_string_t("replace_sub_index")] = ModelBase::toJson(replaceSubIndex_);
    }
    if(outputThumbnailParaIsSet_) {
        val[utility::conversions::to_string_t("output_thumbnail_para")] = ModelBase::toJson(outputThumbnailPara_);
    }
    if(outputWatermarkParasIsSet_) {
        val[utility::conversions::to_string_t("output_watermark_paras")] = ModelBase::toJson(outputWatermarkParas_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool MediaDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("features"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("features"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatures(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_para"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_para"));
        if(!fieldValue.is_null())
        {
            OriginPara refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginPara(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_video_paras"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_video_paras"));
        if(!fieldValue.is_null())
        {
            std::vector<OutputVideoPara> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputVideoParas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replace_sub_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replace_sub_index"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplaceSubIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_thumbnail_para"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_thumbnail_para"));
        if(!fieldValue.is_null())
        {
            OutputThumbnailPara refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputThumbnailPara(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_watermark_paras"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_watermark_paras"));
        if(!fieldValue.is_null())
        {
            OutputWatermarkPara refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputWatermarkParas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            std::vector<FileMetaData> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& MediaDetail::getFeatures()
{
    return features_;
}

void MediaDetail::setFeatures(const std::vector<std::string>& value)
{
    features_ = value;
    featuresIsSet_ = true;
}

bool MediaDetail::featuresIsSet() const
{
    return featuresIsSet_;
}

void MediaDetail::unsetfeatures()
{
    featuresIsSet_ = false;
}

OriginPara MediaDetail::getOriginPara() const
{
    return originPara_;
}

void MediaDetail::setOriginPara(const OriginPara& value)
{
    originPara_ = value;
    originParaIsSet_ = true;
}

bool MediaDetail::originParaIsSet() const
{
    return originParaIsSet_;
}

void MediaDetail::unsetoriginPara()
{
    originParaIsSet_ = false;
}

std::vector<OutputVideoPara>& MediaDetail::getOutputVideoParas()
{
    return outputVideoParas_;
}

void MediaDetail::setOutputVideoParas(const std::vector<OutputVideoPara>& value)
{
    outputVideoParas_ = value;
    outputVideoParasIsSet_ = true;
}

bool MediaDetail::outputVideoParasIsSet() const
{
    return outputVideoParasIsSet_;
}

void MediaDetail::unsetoutputVideoParas()
{
    outputVideoParasIsSet_ = false;
}

std::vector<std::string>& MediaDetail::getReplaceSubIndex()
{
    return replaceSubIndex_;
}

void MediaDetail::setReplaceSubIndex(const std::vector<std::string>& value)
{
    replaceSubIndex_ = value;
    replaceSubIndexIsSet_ = true;
}

bool MediaDetail::replaceSubIndexIsSet() const
{
    return replaceSubIndexIsSet_;
}

void MediaDetail::unsetreplaceSubIndex()
{
    replaceSubIndexIsSet_ = false;
}

OutputThumbnailPara MediaDetail::getOutputThumbnailPara() const
{
    return outputThumbnailPara_;
}

void MediaDetail::setOutputThumbnailPara(const OutputThumbnailPara& value)
{
    outputThumbnailPara_ = value;
    outputThumbnailParaIsSet_ = true;
}

bool MediaDetail::outputThumbnailParaIsSet() const
{
    return outputThumbnailParaIsSet_;
}

void MediaDetail::unsetoutputThumbnailPara()
{
    outputThumbnailParaIsSet_ = false;
}

OutputWatermarkPara MediaDetail::getOutputWatermarkParas() const
{
    return outputWatermarkParas_;
}

void MediaDetail::setOutputWatermarkParas(const OutputWatermarkPara& value)
{
    outputWatermarkParas_ = value;
    outputWatermarkParasIsSet_ = true;
}

bool MediaDetail::outputWatermarkParasIsSet() const
{
    return outputWatermarkParasIsSet_;
}

void MediaDetail::unsetoutputWatermarkParas()
{
    outputWatermarkParasIsSet_ = false;
}

std::vector<FileMetaData>& MediaDetail::getMetadata()
{
    return metadata_;
}

void MediaDetail::setMetadata(const std::vector<FileMetaData>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool MediaDetail::metadataIsSet() const
{
    return metadataIsSet_;
}

void MediaDetail::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


