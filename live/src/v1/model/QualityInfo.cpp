

#include "huaweicloud/live/v1/model/QualityInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




QualityInfo::QualityInfo()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    quality_ = "";
    qualityIsSet_ = false;
    pvc_ = "";
    pvcIsSet_ = false;
    hdlb_ = "";
    hdlbIsSet_ = false;
    codec_ = "";
    codecIsSet_ = false;
    width_ = 0;
    widthIsSet_ = false;
    height_ = 0;
    heightIsSet_ = false;
    bitrate_ = 0;
    bitrateIsSet_ = false;
    videoFrameRate_ = 0;
    videoFrameRateIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    iFrameInterval_ = 0;
    iFrameIntervalIsSet_ = false;
    gop_ = 0;
    gopIsSet_ = false;
    bitrateAdaptive_ = "";
    bitrateAdaptiveIsSet_ = false;
    iFramePolicy_ = "";
    iFramePolicyIsSet_ = false;
}

QualityInfo::~QualityInfo() = default;

void QualityInfo::validate()
{
}

web::json::value QualityInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("templateName")] = ModelBase::toJson(templateName_);
    }
    if(qualityIsSet_) {
        val[utility::conversions::to_string_t("quality")] = ModelBase::toJson(quality_);
    }
    if(pvcIsSet_) {
        val[utility::conversions::to_string_t("PVC")] = ModelBase::toJson(pvc_);
    }
    if(hdlbIsSet_) {
        val[utility::conversions::to_string_t("hdlb")] = ModelBase::toJson(hdlb_);
    }
    if(codecIsSet_) {
        val[utility::conversions::to_string_t("codec")] = ModelBase::toJson(codec_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(videoFrameRateIsSet_) {
        val[utility::conversions::to_string_t("video_frame_rate")] = ModelBase::toJson(videoFrameRate_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(iFrameIntervalIsSet_) {
        val[utility::conversions::to_string_t("iFrameInterval")] = ModelBase::toJson(iFrameInterval_);
    }
    if(gopIsSet_) {
        val[utility::conversions::to_string_t("gop")] = ModelBase::toJson(gop_);
    }
    if(bitrateAdaptiveIsSet_) {
        val[utility::conversions::to_string_t("bitrate_adaptive")] = ModelBase::toJson(bitrateAdaptive_);
    }
    if(iFramePolicyIsSet_) {
        val[utility::conversions::to_string_t("i_frame_policy")] = ModelBase::toJson(iFramePolicy_);
    }

    return val;
}
bool QualityInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("templateName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templateName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("PVC"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("PVC"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPvc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hdlb"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hdlb"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHdlb(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codec"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodec(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_frame_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_frame_rate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iFrameInterval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iFrameInterval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIFrameInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gop"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bitrate_adaptive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate_adaptive"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrateAdaptive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("i_frame_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("i_frame_policy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIFramePolicy(refVal);
        }
    }
    return ok;
}


std::string QualityInfo::getTemplateName() const
{
    return templateName_;
}

void QualityInfo::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool QualityInfo::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void QualityInfo::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string QualityInfo::getQuality() const
{
    return quality_;
}

void QualityInfo::setQuality(const std::string& value)
{
    quality_ = value;
    qualityIsSet_ = true;
}

bool QualityInfo::qualityIsSet() const
{
    return qualityIsSet_;
}

void QualityInfo::unsetquality()
{
    qualityIsSet_ = false;
}

std::string QualityInfo::getPvc() const
{
    return pvc_;
}

void QualityInfo::setPvc(const std::string& value)
{
    pvc_ = value;
    pvcIsSet_ = true;
}

bool QualityInfo::pvcIsSet() const
{
    return pvcIsSet_;
}

void QualityInfo::unsetpvc()
{
    pvcIsSet_ = false;
}

std::string QualityInfo::getHdlb() const
{
    return hdlb_;
}

void QualityInfo::setHdlb(const std::string& value)
{
    hdlb_ = value;
    hdlbIsSet_ = true;
}

bool QualityInfo::hdlbIsSet() const
{
    return hdlbIsSet_;
}

void QualityInfo::unsethdlb()
{
    hdlbIsSet_ = false;
}

std::string QualityInfo::getCodec() const
{
    return codec_;
}

void QualityInfo::setCodec(const std::string& value)
{
    codec_ = value;
    codecIsSet_ = true;
}

bool QualityInfo::codecIsSet() const
{
    return codecIsSet_;
}

void QualityInfo::unsetcodec()
{
    codecIsSet_ = false;
}

int32_t QualityInfo::getWidth() const
{
    return width_;
}

void QualityInfo::setWidth(int32_t value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool QualityInfo::widthIsSet() const
{
    return widthIsSet_;
}

void QualityInfo::unsetwidth()
{
    widthIsSet_ = false;
}

int32_t QualityInfo::getHeight() const
{
    return height_;
}

void QualityInfo::setHeight(int32_t value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool QualityInfo::heightIsSet() const
{
    return heightIsSet_;
}

void QualityInfo::unsetheight()
{
    heightIsSet_ = false;
}

int32_t QualityInfo::getBitrate() const
{
    return bitrate_;
}

void QualityInfo::setBitrate(int32_t value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool QualityInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void QualityInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

int32_t QualityInfo::getVideoFrameRate() const
{
    return videoFrameRate_;
}

void QualityInfo::setVideoFrameRate(int32_t value)
{
    videoFrameRate_ = value;
    videoFrameRateIsSet_ = true;
}

bool QualityInfo::videoFrameRateIsSet() const
{
    return videoFrameRateIsSet_;
}

void QualityInfo::unsetvideoFrameRate()
{
    videoFrameRateIsSet_ = false;
}

std::string QualityInfo::getProtocol() const
{
    return protocol_;
}

void QualityInfo::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool QualityInfo::protocolIsSet() const
{
    return protocolIsSet_;
}

void QualityInfo::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t QualityInfo::getIFrameInterval() const
{
    return iFrameInterval_;
}

void QualityInfo::setIFrameInterval(int32_t value)
{
    iFrameInterval_ = value;
    iFrameIntervalIsSet_ = true;
}

bool QualityInfo::iFrameIntervalIsSet() const
{
    return iFrameIntervalIsSet_;
}

void QualityInfo::unsetiFrameInterval()
{
    iFrameIntervalIsSet_ = false;
}

int32_t QualityInfo::getGop() const
{
    return gop_;
}

void QualityInfo::setGop(int32_t value)
{
    gop_ = value;
    gopIsSet_ = true;
}

bool QualityInfo::gopIsSet() const
{
    return gopIsSet_;
}

void QualityInfo::unsetgop()
{
    gopIsSet_ = false;
}

std::string QualityInfo::getBitrateAdaptive() const
{
    return bitrateAdaptive_;
}

void QualityInfo::setBitrateAdaptive(const std::string& value)
{
    bitrateAdaptive_ = value;
    bitrateAdaptiveIsSet_ = true;
}

bool QualityInfo::bitrateAdaptiveIsSet() const
{
    return bitrateAdaptiveIsSet_;
}

void QualityInfo::unsetbitrateAdaptive()
{
    bitrateAdaptiveIsSet_ = false;
}

std::string QualityInfo::getIFramePolicy() const
{
    return iFramePolicy_;
}

void QualityInfo::setIFramePolicy(const std::string& value)
{
    iFramePolicy_ = value;
    iFramePolicyIsSet_ = true;
}

bool QualityInfo::iFramePolicyIsSet() const
{
    return iFramePolicyIsSet_;
}

void QualityInfo::unsetiFramePolicy()
{
    iFramePolicyIsSet_ = false;
}

}
}
}
}
}


