

#include "huaweicloud/mpc/v1/model/OutputVideoPara.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




OutputVideoPara::OutputVideoPara()
{
    templateId_ = 0;
    templateIdIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    pack_ = "";
    packIsSet_ = false;
    videoIsSet_ = false;
    audioIsSet_ = false;
    fileName_ = "";
    fileNameIsSet_ = false;
    manifestName_ = "";
    manifestNameIsSet_ = false;
    converDuration_ = 0.0;
    converDurationIsSet_ = false;
    errorIsSet_ = false;
}

OutputVideoPara::~OutputVideoPara() = default;

void OutputVideoPara::validate()
{
}

web::json::value OutputVideoPara::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(packIsSet_) {
        val[utility::conversions::to_string_t("pack")] = ModelBase::toJson(pack_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }
    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(manifestNameIsSet_) {
        val[utility::conversions::to_string_t("manifest_name")] = ModelBase::toJson(manifestName_);
    }
    if(converDurationIsSet_) {
        val[utility::conversions::to_string_t("conver_duration")] = ModelBase::toJson(converDuration_);
    }
    if(errorIsSet_) {
        val[utility::conversions::to_string_t("error")] = ModelBase::toJson(error_);
    }

    return val;
}
bool OutputVideoPara::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pack"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pack"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            VideoInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            AudioInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("manifest_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conver_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conver_duration"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConverDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error"));
        if(!fieldValue.is_null())
        {
            XCodeError refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setError(refVal);
        }
    }
    return ok;
}


int32_t OutputVideoPara::getTemplateId() const
{
    return templateId_;
}

void OutputVideoPara::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool OutputVideoPara::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void OutputVideoPara::unsettemplateId()
{
    templateIdIsSet_ = false;
}

int64_t OutputVideoPara::getSize() const
{
    return size_;
}

void OutputVideoPara::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool OutputVideoPara::sizeIsSet() const
{
    return sizeIsSet_;
}

void OutputVideoPara::unsetsize()
{
    sizeIsSet_ = false;
}

std::string OutputVideoPara::getPack() const
{
    return pack_;
}

void OutputVideoPara::setPack(const std::string& value)
{
    pack_ = value;
    packIsSet_ = true;
}

bool OutputVideoPara::packIsSet() const
{
    return packIsSet_;
}

void OutputVideoPara::unsetpack()
{
    packIsSet_ = false;
}

VideoInfo OutputVideoPara::getVideo() const
{
    return video_;
}

void OutputVideoPara::setVideo(const VideoInfo& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool OutputVideoPara::videoIsSet() const
{
    return videoIsSet_;
}

void OutputVideoPara::unsetvideo()
{
    videoIsSet_ = false;
}

AudioInfo OutputVideoPara::getAudio() const
{
    return audio_;
}

void OutputVideoPara::setAudio(const AudioInfo& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool OutputVideoPara::audioIsSet() const
{
    return audioIsSet_;
}

void OutputVideoPara::unsetaudio()
{
    audioIsSet_ = false;
}

std::string OutputVideoPara::getFileName() const
{
    return fileName_;
}

void OutputVideoPara::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool OutputVideoPara::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void OutputVideoPara::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string OutputVideoPara::getManifestName() const
{
    return manifestName_;
}

void OutputVideoPara::setManifestName(const std::string& value)
{
    manifestName_ = value;
    manifestNameIsSet_ = true;
}

bool OutputVideoPara::manifestNameIsSet() const
{
    return manifestNameIsSet_;
}

void OutputVideoPara::unsetmanifestName()
{
    manifestNameIsSet_ = false;
}

double OutputVideoPara::getConverDuration() const
{
    return converDuration_;
}

void OutputVideoPara::setConverDuration(double value)
{
    converDuration_ = value;
    converDurationIsSet_ = true;
}

bool OutputVideoPara::converDurationIsSet() const
{
    return converDurationIsSet_;
}

void OutputVideoPara::unsetconverDuration()
{
    converDurationIsSet_ = false;
}

XCodeError OutputVideoPara::getError() const
{
    return error_;
}

void OutputVideoPara::setError(const XCodeError& value)
{
    error_ = value;
    errorIsSet_ = true;
}

bool OutputVideoPara::errorIsSet() const
{
    return errorIsSet_;
}

void OutputVideoPara::unseterror()
{
    errorIsSet_ = false;
}

}
}
}
}
}


