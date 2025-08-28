

#include "huaweicloud/metastudio/v1/model/TtsJobDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtsJobDetail::TtsJobDetail()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    websocketJobId_ = "";
    websocketJobIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    ttsServiceEnum_ = "";
    ttsServiceEnumIsSet_ = false;
    textLength_ = 0;
    textLengthIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    audioFormat_ = "";
    audioFormatIsSet_ = false;
    needTimestamp_ = false;
    needTimestampIsSet_ = false;
    genSrt_ = false;
    genSrtIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    jobState_ = "";
    jobStateIsSet_ = false;
    failMsg_ = "";
    failMsgIsSet_ = false;
    filesIsSet_ = false;
}

TtsJobDetail::~TtsJobDetail() = default;

void TtsJobDetail::validate()
{
}

web::json::value TtsJobDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(websocketJobIdIsSet_) {
        val[utility::conversions::to_string_t("websocket_job_id")] = ModelBase::toJson(websocketJobId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(ttsServiceEnumIsSet_) {
        val[utility::conversions::to_string_t("tts_service_enum")] = ModelBase::toJson(ttsServiceEnum_);
    }
    if(textLengthIsSet_) {
        val[utility::conversions::to_string_t("text_length")] = ModelBase::toJson(textLength_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(audioFormatIsSet_) {
        val[utility::conversions::to_string_t("audio_format")] = ModelBase::toJson(audioFormat_);
    }
    if(needTimestampIsSet_) {
        val[utility::conversions::to_string_t("need_timestamp")] = ModelBase::toJson(needTimestamp_);
    }
    if(genSrtIsSet_) {
        val[utility::conversions::to_string_t("gen_srt")] = ModelBase::toJson(genSrt_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(jobStateIsSet_) {
        val[utility::conversions::to_string_t("job_state")] = ModelBase::toJson(jobState_);
    }
    if(failMsgIsSet_) {
        val[utility::conversions::to_string_t("fail_msg")] = ModelBase::toJson(failMsg_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}
bool TtsJobDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("websocket_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("websocket_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebsocketJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tts_service_enum"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tts_service_enum"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtsServiceEnum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_length"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_length"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_timestamp"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gen_srt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gen_srt"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenSrt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<TtsJobFile> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}


std::string TtsJobDetail::getJobId() const
{
    return jobId_;
}

void TtsJobDetail::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TtsJobDetail::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TtsJobDetail::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TtsJobDetail::getWebsocketJobId() const
{
    return websocketJobId_;
}

void TtsJobDetail::setWebsocketJobId(const std::string& value)
{
    websocketJobId_ = value;
    websocketJobIdIsSet_ = true;
}

bool TtsJobDetail::websocketJobIdIsSet() const
{
    return websocketJobIdIsSet_;
}

void TtsJobDetail::unsetwebsocketJobId()
{
    websocketJobIdIsSet_ = false;
}

std::string TtsJobDetail::getAssetId() const
{
    return assetId_;
}

void TtsJobDetail::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool TtsJobDetail::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void TtsJobDetail::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string TtsJobDetail::getTtsServiceEnum() const
{
    return ttsServiceEnum_;
}

void TtsJobDetail::setTtsServiceEnum(const std::string& value)
{
    ttsServiceEnum_ = value;
    ttsServiceEnumIsSet_ = true;
}

bool TtsJobDetail::ttsServiceEnumIsSet() const
{
    return ttsServiceEnumIsSet_;
}

void TtsJobDetail::unsetttsServiceEnum()
{
    ttsServiceEnumIsSet_ = false;
}

int32_t TtsJobDetail::getTextLength() const
{
    return textLength_;
}

void TtsJobDetail::setTextLength(int32_t value)
{
    textLength_ = value;
    textLengthIsSet_ = true;
}

bool TtsJobDetail::textLengthIsSet() const
{
    return textLengthIsSet_;
}

void TtsJobDetail::unsettextLength()
{
    textLengthIsSet_ = false;
}

std::string TtsJobDetail::getCreateTime() const
{
    return createTime_;
}

void TtsJobDetail::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TtsJobDetail::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TtsJobDetail::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string TtsJobDetail::getAudioFormat() const
{
    return audioFormat_;
}

void TtsJobDetail::setAudioFormat(const std::string& value)
{
    audioFormat_ = value;
    audioFormatIsSet_ = true;
}

bool TtsJobDetail::audioFormatIsSet() const
{
    return audioFormatIsSet_;
}

void TtsJobDetail::unsetaudioFormat()
{
    audioFormatIsSet_ = false;
}

bool TtsJobDetail::isNeedTimestamp() const
{
    return needTimestamp_;
}

void TtsJobDetail::setNeedTimestamp(bool value)
{
    needTimestamp_ = value;
    needTimestampIsSet_ = true;
}

bool TtsJobDetail::needTimestampIsSet() const
{
    return needTimestampIsSet_;
}

void TtsJobDetail::unsetneedTimestamp()
{
    needTimestampIsSet_ = false;
}

bool TtsJobDetail::isGenSrt() const
{
    return genSrt_;
}

void TtsJobDetail::setGenSrt(bool value)
{
    genSrt_ = value;
    genSrtIsSet_ = true;
}

bool TtsJobDetail::genSrtIsSet() const
{
    return genSrtIsSet_;
}

void TtsJobDetail::unsetgenSrt()
{
    genSrtIsSet_ = false;
}

std::string TtsJobDetail::getJobType() const
{
    return jobType_;
}

void TtsJobDetail::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool TtsJobDetail::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void TtsJobDetail::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string TtsJobDetail::getJobState() const
{
    return jobState_;
}

void TtsJobDetail::setJobState(const std::string& value)
{
    jobState_ = value;
    jobStateIsSet_ = true;
}

bool TtsJobDetail::jobStateIsSet() const
{
    return jobStateIsSet_;
}

void TtsJobDetail::unsetjobState()
{
    jobStateIsSet_ = false;
}

std::string TtsJobDetail::getFailMsg() const
{
    return failMsg_;
}

void TtsJobDetail::setFailMsg(const std::string& value)
{
    failMsg_ = value;
    failMsgIsSet_ = true;
}

bool TtsJobDetail::failMsgIsSet() const
{
    return failMsgIsSet_;
}

void TtsJobDetail::unsetfailMsg()
{
    failMsgIsSet_ = false;
}

std::vector<TtsJobFile>& TtsJobDetail::getFiles()
{
    return files_;
}

void TtsJobDetail::setFiles(const std::vector<TtsJobFile>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool TtsJobDetail::filesIsSet() const
{
    return filesIsSet_;
}

void TtsJobDetail::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


