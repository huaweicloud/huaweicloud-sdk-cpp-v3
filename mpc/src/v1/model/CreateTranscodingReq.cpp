

#include "huaweicloud/mpc/v1/model/CreateTranscodingReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateTranscodingReq::CreateTranscodingReq()
{
    inputIsSet_ = false;
    outputIsSet_ = false;
    transTemplateIdIsSet_ = false;
    avParametersIsSet_ = false;
    additionalManifestsIsSet_ = false;
    outputFilenamesIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    watermarksIsSet_ = false;
    thumbnailIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    subtitleIsSet_ = false;
    encryptionIsSet_ = false;
    cropIsSet_ = false;
    audioTrackIsSet_ = false;
    multiAudioIsSet_ = false;
    videoProcessIsSet_ = false;
    audioProcessIsSet_ = false;
    metadataIsSet_ = false;
}

CreateTranscodingReq::~CreateTranscodingReq() = default;

void CreateTranscodingReq::validate()
{
}

web::json::value CreateTranscodingReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(transTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("trans_template_id")] = ModelBase::toJson(transTemplateId_);
    }
    if(avParametersIsSet_) {
        val[utility::conversions::to_string_t("av_parameters")] = ModelBase::toJson(avParameters_);
    }
    if(additionalManifestsIsSet_) {
        val[utility::conversions::to_string_t("additional_manifests")] = ModelBase::toJson(additionalManifests_);
    }
    if(outputFilenamesIsSet_) {
        val[utility::conversions::to_string_t("output_filenames")] = ModelBase::toJson(outputFilenames_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(watermarksIsSet_) {
        val[utility::conversions::to_string_t("watermarks")] = ModelBase::toJson(watermarks_);
    }
    if(thumbnailIsSet_) {
        val[utility::conversions::to_string_t("thumbnail")] = ModelBase::toJson(thumbnail_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(subtitleIsSet_) {
        val[utility::conversions::to_string_t("subtitle")] = ModelBase::toJson(subtitle_);
    }
    if(encryptionIsSet_) {
        val[utility::conversions::to_string_t("encryption")] = ModelBase::toJson(encryption_);
    }
    if(cropIsSet_) {
        val[utility::conversions::to_string_t("crop")] = ModelBase::toJson(crop_);
    }
    if(audioTrackIsSet_) {
        val[utility::conversions::to_string_t("audio_track")] = ModelBase::toJson(audioTrack_);
    }
    if(multiAudioIsSet_) {
        val[utility::conversions::to_string_t("multi_audio")] = ModelBase::toJson(multiAudio_);
    }
    if(videoProcessIsSet_) {
        val[utility::conversions::to_string_t("video_process")] = ModelBase::toJson(videoProcess_);
    }
    if(audioProcessIsSet_) {
        val[utility::conversions::to_string_t("audio_process")] = ModelBase::toJson(audioProcess_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }

    return val;
}
bool CreateTranscodingReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trans_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_template_id"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransTemplateId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("additional_manifests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_manifests"));
        if(!fieldValue.is_null())
        {
            std::vector<AdditionalManifests> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalManifests(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_filenames"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_filenames"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFilenames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("watermarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watermarks"));
        if(!fieldValue.is_null())
        {
            std::vector<WatermarkRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatermarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail"));
        if(!fieldValue.is_null())
        {
            Thumbnail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtitle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtitle"));
        if(!fieldValue.is_null())
        {
            Subtitle refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption"));
        if(!fieldValue.is_null())
        {
            Encryption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("crop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("crop"));
        if(!fieldValue.is_null())
        {
            Crop refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCrop(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_track"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_track"));
        if(!fieldValue.is_null())
        {
            AudioTrack refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioTrack(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_audio"));
        if(!fieldValue.is_null())
        {
            MultiAudio refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiAudio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_process"));
        if(!fieldValue.is_null())
        {
            VideoProcess refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_process"));
        if(!fieldValue.is_null())
        {
            AudioProcess refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioProcess(refVal);
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


ObsObjInfo CreateTranscodingReq::getInput() const
{
    return input_;
}

void CreateTranscodingReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateTranscodingReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateTranscodingReq::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo CreateTranscodingReq::getOutput() const
{
    return output_;
}

void CreateTranscodingReq::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool CreateTranscodingReq::outputIsSet() const
{
    return outputIsSet_;
}

void CreateTranscodingReq::unsetoutput()
{
    outputIsSet_ = false;
}

std::vector<int32_t>& CreateTranscodingReq::getTransTemplateId()
{
    return transTemplateId_;
}

void CreateTranscodingReq::setTransTemplateId(std::vector<int32_t> value)
{
    transTemplateId_ = value;
    transTemplateIdIsSet_ = true;
}

bool CreateTranscodingReq::transTemplateIdIsSet() const
{
    return transTemplateIdIsSet_;
}

void CreateTranscodingReq::unsettransTemplateId()
{
    transTemplateIdIsSet_ = false;
}

std::vector<AvParameters>& CreateTranscodingReq::getAvParameters()
{
    return avParameters_;
}

void CreateTranscodingReq::setAvParameters(const std::vector<AvParameters>& value)
{
    avParameters_ = value;
    avParametersIsSet_ = true;
}

bool CreateTranscodingReq::avParametersIsSet() const
{
    return avParametersIsSet_;
}

void CreateTranscodingReq::unsetavParameters()
{
    avParametersIsSet_ = false;
}

std::vector<AdditionalManifests>& CreateTranscodingReq::getAdditionalManifests()
{
    return additionalManifests_;
}

void CreateTranscodingReq::setAdditionalManifests(const std::vector<AdditionalManifests>& value)
{
    additionalManifests_ = value;
    additionalManifestsIsSet_ = true;
}

bool CreateTranscodingReq::additionalManifestsIsSet() const
{
    return additionalManifestsIsSet_;
}

void CreateTranscodingReq::unsetadditionalManifests()
{
    additionalManifestsIsSet_ = false;
}

std::vector<std::string>& CreateTranscodingReq::getOutputFilenames()
{
    return outputFilenames_;
}

void CreateTranscodingReq::setOutputFilenames(const std::vector<std::string>& value)
{
    outputFilenames_ = value;
    outputFilenamesIsSet_ = true;
}

bool CreateTranscodingReq::outputFilenamesIsSet() const
{
    return outputFilenamesIsSet_;
}

void CreateTranscodingReq::unsetoutputFilenames()
{
    outputFilenamesIsSet_ = false;
}

std::string CreateTranscodingReq::getUserData() const
{
    return userData_;
}

void CreateTranscodingReq::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateTranscodingReq::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateTranscodingReq::unsetuserData()
{
    userDataIsSet_ = false;
}

std::vector<WatermarkRequest>& CreateTranscodingReq::getWatermarks()
{
    return watermarks_;
}

void CreateTranscodingReq::setWatermarks(const std::vector<WatermarkRequest>& value)
{
    watermarks_ = value;
    watermarksIsSet_ = true;
}

bool CreateTranscodingReq::watermarksIsSet() const
{
    return watermarksIsSet_;
}

void CreateTranscodingReq::unsetwatermarks()
{
    watermarksIsSet_ = false;
}

Thumbnail CreateTranscodingReq::getThumbnail() const
{
    return thumbnail_;
}

void CreateTranscodingReq::setThumbnail(const Thumbnail& value)
{
    thumbnail_ = value;
    thumbnailIsSet_ = true;
}

bool CreateTranscodingReq::thumbnailIsSet() const
{
    return thumbnailIsSet_;
}

void CreateTranscodingReq::unsetthumbnail()
{
    thumbnailIsSet_ = false;
}

int32_t CreateTranscodingReq::getPriority() const
{
    return priority_;
}

void CreateTranscodingReq::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool CreateTranscodingReq::priorityIsSet() const
{
    return priorityIsSet_;
}

void CreateTranscodingReq::unsetpriority()
{
    priorityIsSet_ = false;
}

Subtitle CreateTranscodingReq::getSubtitle() const
{
    return subtitle_;
}

void CreateTranscodingReq::setSubtitle(const Subtitle& value)
{
    subtitle_ = value;
    subtitleIsSet_ = true;
}

bool CreateTranscodingReq::subtitleIsSet() const
{
    return subtitleIsSet_;
}

void CreateTranscodingReq::unsetsubtitle()
{
    subtitleIsSet_ = false;
}

Encryption CreateTranscodingReq::getEncryption() const
{
    return encryption_;
}

void CreateTranscodingReq::setEncryption(const Encryption& value)
{
    encryption_ = value;
    encryptionIsSet_ = true;
}

bool CreateTranscodingReq::encryptionIsSet() const
{
    return encryptionIsSet_;
}

void CreateTranscodingReq::unsetencryption()
{
    encryptionIsSet_ = false;
}

Crop CreateTranscodingReq::getCrop() const
{
    return crop_;
}

void CreateTranscodingReq::setCrop(const Crop& value)
{
    crop_ = value;
    cropIsSet_ = true;
}

bool CreateTranscodingReq::cropIsSet() const
{
    return cropIsSet_;
}

void CreateTranscodingReq::unsetcrop()
{
    cropIsSet_ = false;
}

AudioTrack CreateTranscodingReq::getAudioTrack() const
{
    return audioTrack_;
}

void CreateTranscodingReq::setAudioTrack(const AudioTrack& value)
{
    audioTrack_ = value;
    audioTrackIsSet_ = true;
}

bool CreateTranscodingReq::audioTrackIsSet() const
{
    return audioTrackIsSet_;
}

void CreateTranscodingReq::unsetaudioTrack()
{
    audioTrackIsSet_ = false;
}

MultiAudio CreateTranscodingReq::getMultiAudio() const
{
    return multiAudio_;
}

void CreateTranscodingReq::setMultiAudio(const MultiAudio& value)
{
    multiAudio_ = value;
    multiAudioIsSet_ = true;
}

bool CreateTranscodingReq::multiAudioIsSet() const
{
    return multiAudioIsSet_;
}

void CreateTranscodingReq::unsetmultiAudio()
{
    multiAudioIsSet_ = false;
}

VideoProcess CreateTranscodingReq::getVideoProcess() const
{
    return videoProcess_;
}

void CreateTranscodingReq::setVideoProcess(const VideoProcess& value)
{
    videoProcess_ = value;
    videoProcessIsSet_ = true;
}

bool CreateTranscodingReq::videoProcessIsSet() const
{
    return videoProcessIsSet_;
}

void CreateTranscodingReq::unsetvideoProcess()
{
    videoProcessIsSet_ = false;
}

AudioProcess CreateTranscodingReq::getAudioProcess() const
{
    return audioProcess_;
}

void CreateTranscodingReq::setAudioProcess(const AudioProcess& value)
{
    audioProcess_ = value;
    audioProcessIsSet_ = true;
}

bool CreateTranscodingReq::audioProcessIsSet() const
{
    return audioProcessIsSet_;
}

void CreateTranscodingReq::unsetaudioProcess()
{
    audioProcessIsSet_ = false;
}

std::vector<FileMetaData>& CreateTranscodingReq::getMetadata()
{
    return metadata_;
}

void CreateTranscodingReq::setMetadata(const std::vector<FileMetaData>& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool CreateTranscodingReq::metadataIsSet() const
{
    return metadataIsSet_;
}

void CreateTranscodingReq::unsetmetadata()
{
    metadataIsSet_ = false;
}

}
}
}
}
}


