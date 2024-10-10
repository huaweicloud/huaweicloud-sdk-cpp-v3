

#include "huaweicloud/drs/v5/model/CleanAlarmsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CleanAlarmsRequest::CleanAlarmsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    alarmId_ = "";
    alarmIdIsSet_ = false;
}

CleanAlarmsRequest::~CleanAlarmsRequest() = default;

void CleanAlarmsRequest::validate()
{
}

web::json::value CleanAlarmsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(alarmIdIsSet_) {
        val[utility::conversions::to_string_t("alarm_id")] = ModelBase::toJson(alarmId_);
    }

    return val;
}
bool CleanAlarmsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmId(refVal);
        }
    }
    return ok;
}


std::string CleanAlarmsRequest::getXLanguage() const
{
    return xLanguage_;
}

void CleanAlarmsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool CleanAlarmsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void CleanAlarmsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string CleanAlarmsRequest::getJobId() const
{
    return jobId_;
}

void CleanAlarmsRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CleanAlarmsRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CleanAlarmsRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CleanAlarmsRequest::getAlarmId() const
{
    return alarmId_;
}

void CleanAlarmsRequest::setAlarmId(const std::string& value)
{
    alarmId_ = value;
    alarmIdIsSet_ = true;
}

bool CleanAlarmsRequest::alarmIdIsSet() const
{
    return alarmIdIsSet_;
}

void CleanAlarmsRequest::unsetalarmId()
{
    alarmIdIsSet_ = false;
}

}
}
}
}
}


