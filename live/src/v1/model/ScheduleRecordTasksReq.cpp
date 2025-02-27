

#include "huaweicloud/live/v1/model/ScheduleRecordTasksReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ScheduleRecordTasksReq::ScheduleRecordTasksReq()
{
    domain_ = "";
    domainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    templateId_ = "";
    templateIdIsSet_ = false;
}

ScheduleRecordTasksReq::~ScheduleRecordTasksReq() = default;

void ScheduleRecordTasksReq::validate()
{
}

web::json::value ScheduleRecordTasksReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }

    return val;
}
bool ScheduleRecordTasksReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    return ok;
}


std::string ScheduleRecordTasksReq::getDomain() const
{
    return domain_;
}

void ScheduleRecordTasksReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ScheduleRecordTasksReq::domainIsSet() const
{
    return domainIsSet_;
}

void ScheduleRecordTasksReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ScheduleRecordTasksReq::getApp() const
{
    return app_;
}

void ScheduleRecordTasksReq::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool ScheduleRecordTasksReq::appIsSet() const
{
    return appIsSet_;
}

void ScheduleRecordTasksReq::unsetapp()
{
    appIsSet_ = false;
}

std::string ScheduleRecordTasksReq::getStream() const
{
    return stream_;
}

void ScheduleRecordTasksReq::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ScheduleRecordTasksReq::streamIsSet() const
{
    return streamIsSet_;
}

void ScheduleRecordTasksReq::unsetstream()
{
    streamIsSet_ = false;
}

int64_t ScheduleRecordTasksReq::getStartTime() const
{
    return startTime_;
}

void ScheduleRecordTasksReq::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ScheduleRecordTasksReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ScheduleRecordTasksReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ScheduleRecordTasksReq::getEndTime() const
{
    return endTime_;
}

void ScheduleRecordTasksReq::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ScheduleRecordTasksReq::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ScheduleRecordTasksReq::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ScheduleRecordTasksReq::getTemplateId() const
{
    return templateId_;
}

void ScheduleRecordTasksReq::setTemplateId(const std::string& value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ScheduleRecordTasksReq::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ScheduleRecordTasksReq::unsettemplateId()
{
    templateIdIsSet_ = false;
}

}
}
}
}
}


