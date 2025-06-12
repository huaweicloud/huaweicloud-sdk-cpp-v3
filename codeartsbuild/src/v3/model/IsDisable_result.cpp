

#include "huaweicloud/codeartsbuild/v3/model/IsDisable_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




IsDisable_result::IsDisable_result()
{
    forbiddener_ = "";
    forbiddenerIsSet_ = false;
    reson_ = "";
    resonIsSet_ = false;
    disabled_ = 0;
    disabledIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
    forbiddenTime_ = 0.0;
    forbiddenTimeIsSet_ = false;
}

IsDisable_result::~IsDisable_result() = default;

void IsDisable_result::validate()
{
}

web::json::value IsDisable_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(forbiddenerIsSet_) {
        val[utility::conversions::to_string_t("forbiddener")] = ModelBase::toJson(forbiddener_);
    }
    if(resonIsSet_) {
        val[utility::conversions::to_string_t("reson")] = ModelBase::toJson(reson_);
    }
    if(disabledIsSet_) {
        val[utility::conversions::to_string_t("disabled")] = ModelBase::toJson(disabled_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }
    if(forbiddenTimeIsSet_) {
        val[utility::conversions::to_string_t("forbidden_time")] = ModelBase::toJson(forbiddenTime_);
    }

    return val;
}
bool IsDisable_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("forbiddener"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbiddener"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddener(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reson"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reson"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReson(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disabled"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("forbidden_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("forbidden_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForbiddenTime(refVal);
        }
    }
    return ok;
}


std::string IsDisable_result::getForbiddener() const
{
    return forbiddener_;
}

void IsDisable_result::setForbiddener(const std::string& value)
{
    forbiddener_ = value;
    forbiddenerIsSet_ = true;
}

bool IsDisable_result::forbiddenerIsSet() const
{
    return forbiddenerIsSet_;
}

void IsDisable_result::unsetforbiddener()
{
    forbiddenerIsSet_ = false;
}

std::string IsDisable_result::getReson() const
{
    return reson_;
}

void IsDisable_result::setReson(const std::string& value)
{
    reson_ = value;
    resonIsSet_ = true;
}

bool IsDisable_result::resonIsSet() const
{
    return resonIsSet_;
}

void IsDisable_result::unsetreson()
{
    resonIsSet_ = false;
}

int32_t IsDisable_result::getDisabled() const
{
    return disabled_;
}

void IsDisable_result::setDisabled(int32_t value)
{
    disabled_ = value;
    disabledIsSet_ = true;
}

bool IsDisable_result::disabledIsSet() const
{
    return disabledIsSet_;
}

void IsDisable_result::unsetdisabled()
{
    disabledIsSet_ = false;
}

std::string IsDisable_result::getJobId() const
{
    return jobId_;
}

void IsDisable_result::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool IsDisable_result::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void IsDisable_result::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string IsDisable_result::getJobName() const
{
    return jobName_;
}

void IsDisable_result::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool IsDisable_result::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void IsDisable_result::unsetjobName()
{
    jobNameIsSet_ = false;
}

double IsDisable_result::getForbiddenTime() const
{
    return forbiddenTime_;
}

void IsDisable_result::setForbiddenTime(double value)
{
    forbiddenTime_ = value;
    forbiddenTimeIsSet_ = true;
}

bool IsDisable_result::forbiddenTimeIsSet() const
{
    return forbiddenTimeIsSet_;
}

void IsDisable_result::unsetforbiddenTime()
{
    forbiddenTimeIsSet_ = false;
}

}
}
}
}
}


