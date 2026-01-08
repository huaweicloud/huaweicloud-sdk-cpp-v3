

#include "huaweicloud/vod/v1/model/TranscodeInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




TranscodeInfoResult::TranscodeInfoResult()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    waitingTime_ = 0;
    waitingTimeIsSet_ = false;
    processTime_ = 0;
    processTimeIsSet_ = false;
}

TranscodeInfoResult::~TranscodeInfoResult() = default;

void TranscodeInfoResult::validate()
{
}

web::json::value TranscodeInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(waitingTimeIsSet_) {
        val[utility::conversions::to_string_t("waiting_time")] = ModelBase::toJson(waitingTime_);
    }
    if(processTimeIsSet_) {
        val[utility::conversions::to_string_t("process_time")] = ModelBase::toJson(processTime_);
    }

    return val;
}
bool TranscodeInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waiting_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waiting_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessTime(refVal);
        }
    }
    return ok;
}


std::string TranscodeInfoResult::getTemplateName() const
{
    return templateName_;
}

void TranscodeInfoResult::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool TranscodeInfoResult::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void TranscodeInfoResult::unsettemplateName()
{
    templateNameIsSet_ = false;
}

int32_t TranscodeInfoResult::getProgress() const
{
    return progress_;
}

void TranscodeInfoResult::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool TranscodeInfoResult::progressIsSet() const
{
    return progressIsSet_;
}

void TranscodeInfoResult::unsetprogress()
{
    progressIsSet_ = false;
}

std::string TranscodeInfoResult::getStartTime() const
{
    return startTime_;
}

void TranscodeInfoResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TranscodeInfoResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TranscodeInfoResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t TranscodeInfoResult::getWaitingTime() const
{
    return waitingTime_;
}

void TranscodeInfoResult::setWaitingTime(int32_t value)
{
    waitingTime_ = value;
    waitingTimeIsSet_ = true;
}

bool TranscodeInfoResult::waitingTimeIsSet() const
{
    return waitingTimeIsSet_;
}

void TranscodeInfoResult::unsetwaitingTime()
{
    waitingTimeIsSet_ = false;
}

int32_t TranscodeInfoResult::getProcessTime() const
{
    return processTime_;
}

void TranscodeInfoResult::setProcessTime(int32_t value)
{
    processTime_ = value;
    processTimeIsSet_ = true;
}

bool TranscodeInfoResult::processTimeIsSet() const
{
    return processTimeIsSet_;
}

void TranscodeInfoResult::unsetprocessTime()
{
    processTimeIsSet_ = false;
}

}
}
}
}
}


