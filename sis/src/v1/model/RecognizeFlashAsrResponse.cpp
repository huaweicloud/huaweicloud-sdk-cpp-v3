

#include "huaweicloud/sis/v1/model/RecognizeFlashAsrResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RecognizeFlashAsrResponse::RecognizeFlashAsrResponse()
{
    traceId_ = "";
    traceIdIsSet_ = false;
    audioDuration_ = 0;
    audioDurationIsSet_ = false;
    flashResultIsSet_ = false;
}

RecognizeFlashAsrResponse::~RecognizeFlashAsrResponse() = default;

void RecognizeFlashAsrResponse::validate()
{
}

web::json::value RecognizeFlashAsrResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(audioDurationIsSet_) {
        val[utility::conversions::to_string_t("audio_duration")] = ModelBase::toJson(audioDuration_);
    }
    if(flashResultIsSet_) {
        val[utility::conversions::to_string_t("flash_result")] = ModelBase::toJson(flashResult_);
    }

    return val;
}

bool RecognizeFlashAsrResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flash_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flash_result"));
        if(!fieldValue.is_null())
        {
            std::vector<FlashResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlashResult(refVal);
        }
    }
    return ok;
}

std::string RecognizeFlashAsrResponse::getTraceId() const
{
    return traceId_;
}

void RecognizeFlashAsrResponse::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool RecognizeFlashAsrResponse::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void RecognizeFlashAsrResponse::unsettraceId()
{
    traceIdIsSet_ = false;
}

int32_t RecognizeFlashAsrResponse::getAudioDuration() const
{
    return audioDuration_;
}

void RecognizeFlashAsrResponse::setAudioDuration(int32_t value)
{
    audioDuration_ = value;
    audioDurationIsSet_ = true;
}

bool RecognizeFlashAsrResponse::audioDurationIsSet() const
{
    return audioDurationIsSet_;
}

void RecognizeFlashAsrResponse::unsetaudioDuration()
{
    audioDurationIsSet_ = false;
}

std::vector<FlashResult>& RecognizeFlashAsrResponse::getFlashResult()
{
    return flashResult_;
}

void RecognizeFlashAsrResponse::setFlashResult(const std::vector<FlashResult>& value)
{
    flashResult_ = value;
    flashResultIsSet_ = true;
}

bool RecognizeFlashAsrResponse::flashResultIsSet() const
{
    return flashResultIsSet_;
}

void RecognizeFlashAsrResponse::unsetflashResult()
{
    flashResultIsSet_ = false;
}

}
}
}
}
}


