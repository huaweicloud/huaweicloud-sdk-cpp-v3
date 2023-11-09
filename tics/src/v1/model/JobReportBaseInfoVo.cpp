

#include "huaweicloud/tics/v1/model/JobReportBaseInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




JobReportBaseInfoVo::JobReportBaseInfoVo()
{
    exeTime_ = utility::datetime();
    exeTimeIsSet_ = false;
    executor_ = "";
    executorIsSet_ = false;
    hflType_ = "";
    hflTypeIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

JobReportBaseInfoVo::~JobReportBaseInfoVo() = default;

void JobReportBaseInfoVo::validate()
{
}

web::json::value JobReportBaseInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(exeTimeIsSet_) {
        val[utility::conversions::to_string_t("exe_time")] = ModelBase::toJson(exeTime_);
    }
    if(executorIsSet_) {
        val[utility::conversions::to_string_t("executor")] = ModelBase::toJson(executor_);
    }
    if(hflTypeIsSet_) {
        val[utility::conversions::to_string_t("hfl_type")] = ModelBase::toJson(hflType_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool JobReportBaseInfoVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("exe_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exe_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hfl_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hfl_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHflType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


utility::datetime JobReportBaseInfoVo::getExeTime() const
{
    return exeTime_;
}

void JobReportBaseInfoVo::setExeTime(const utility::datetime& value)
{
    exeTime_ = value;
    exeTimeIsSet_ = true;
}

bool JobReportBaseInfoVo::exeTimeIsSet() const
{
    return exeTimeIsSet_;
}

void JobReportBaseInfoVo::unsetexeTime()
{
    exeTimeIsSet_ = false;
}

std::string JobReportBaseInfoVo::getExecutor() const
{
    return executor_;
}

void JobReportBaseInfoVo::setExecutor(const std::string& value)
{
    executor_ = value;
    executorIsSet_ = true;
}

bool JobReportBaseInfoVo::executorIsSet() const
{
    return executorIsSet_;
}

void JobReportBaseInfoVo::unsetexecutor()
{
    executorIsSet_ = false;
}

std::string JobReportBaseInfoVo::getHflType() const
{
    return hflType_;
}

void JobReportBaseInfoVo::setHflType(const std::string& value)
{
    hflType_ = value;
    hflTypeIsSet_ = true;
}

bool JobReportBaseInfoVo::hflTypeIsSet() const
{
    return hflTypeIsSet_;
}

void JobReportBaseInfoVo::unsethflType()
{
    hflTypeIsSet_ = false;
}

std::string JobReportBaseInfoVo::getJobName() const
{
    return jobName_;
}

void JobReportBaseInfoVo::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool JobReportBaseInfoVo::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void JobReportBaseInfoVo::unsetjobName()
{
    jobNameIsSet_ = false;
}

std::string JobReportBaseInfoVo::getJobType() const
{
    return jobType_;
}

void JobReportBaseInfoVo::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool JobReportBaseInfoVo::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void JobReportBaseInfoVo::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string JobReportBaseInfoVo::getStatus() const
{
    return status_;
}

void JobReportBaseInfoVo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool JobReportBaseInfoVo::statusIsSet() const
{
    return statusIsSet_;
}

void JobReportBaseInfoVo::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


