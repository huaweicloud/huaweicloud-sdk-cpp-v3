

#include "huaweicloud/live/v2/model/TranscodeDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




TranscodeDetailInfo::TranscodeDetailInfo()
{
    streamName_ = "";
    streamNameIsSet_ = false;
    template_ = "";
    templateIsSet_ = false;
    codeRateFormat_ = "";
    codeRateFormatIsSet_ = false;
    duration_ = 0L;
    durationIsSet_ = false;
}

TranscodeDetailInfo::~TranscodeDetailInfo() = default;

void TranscodeDetailInfo::validate()
{
}

web::json::value TranscodeDetailInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }
    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(codeRateFormatIsSet_) {
        val[utility::conversions::to_string_t("code_rate_format")] = ModelBase::toJson(codeRateFormat_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}
bool TranscodeDetailInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code_rate_format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code_rate_format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodeRateFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    return ok;
}


std::string TranscodeDetailInfo::getStreamName() const
{
    return streamName_;
}

void TranscodeDetailInfo::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool TranscodeDetailInfo::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void TranscodeDetailInfo::unsetstreamName()
{
    streamNameIsSet_ = false;
}

std::string TranscodeDetailInfo::getTemplate() const
{
    return template_;
}

void TranscodeDetailInfo::setTemplate(const std::string& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool TranscodeDetailInfo::templateIsSet() const
{
    return templateIsSet_;
}

void TranscodeDetailInfo::unsettemplate()
{
    templateIsSet_ = false;
}

std::string TranscodeDetailInfo::getCodeRateFormat() const
{
    return codeRateFormat_;
}

void TranscodeDetailInfo::setCodeRateFormat(const std::string& value)
{
    codeRateFormat_ = value;
    codeRateFormatIsSet_ = true;
}

bool TranscodeDetailInfo::codeRateFormatIsSet() const
{
    return codeRateFormatIsSet_;
}

void TranscodeDetailInfo::unsetcodeRateFormat()
{
    codeRateFormatIsSet_ = false;
}

int64_t TranscodeDetailInfo::getDuration() const
{
    return duration_;
}

void TranscodeDetailInfo::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool TranscodeDetailInfo::durationIsSet() const
{
    return durationIsSet_;
}

void TranscodeDetailInfo::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


