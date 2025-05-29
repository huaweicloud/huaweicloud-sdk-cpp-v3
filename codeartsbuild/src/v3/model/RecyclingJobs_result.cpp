

#include "huaweicloud/codeartsbuild/v3/model/RecyclingJobs_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




RecyclingJobs_result::RecyclingJobs_result()
{
    keepTime_ = 0;
    keepTimeIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    jobListIsSet_ = false;
}

RecyclingJobs_result::~RecyclingJobs_result() = default;

void RecyclingJobs_result::validate()
{
}

web::json::value RecyclingJobs_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keepTimeIsSet_) {
        val[utility::conversions::to_string_t("keep_time")] = ModelBase::toJson(keepTime_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(jobListIsSet_) {
        val[utility::conversions::to_string_t("job_list")] = ModelBase::toJson(jobList_);
    }

    return val;
}
bool RecyclingJobs_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keep_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RecyclingJob> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobList(refVal);
        }
    }
    return ok;
}


int32_t RecyclingJobs_result::getKeepTime() const
{
    return keepTime_;
}

void RecyclingJobs_result::setKeepTime(int32_t value)
{
    keepTime_ = value;
    keepTimeIsSet_ = true;
}

bool RecyclingJobs_result::keepTimeIsSet() const
{
    return keepTimeIsSet_;
}

void RecyclingJobs_result::unsetkeepTime()
{
    keepTimeIsSet_ = false;
}

int32_t RecyclingJobs_result::getTotal() const
{
    return total_;
}

void RecyclingJobs_result::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool RecyclingJobs_result::totalIsSet() const
{
    return totalIsSet_;
}

void RecyclingJobs_result::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<RecyclingJob>& RecyclingJobs_result::getJobList()
{
    return jobList_;
}

void RecyclingJobs_result::setJobList(const std::vector<RecyclingJob>& value)
{
    jobList_ = value;
    jobListIsSet_ = true;
}

bool RecyclingJobs_result::jobListIsSet() const
{
    return jobListIsSet_;
}

void RecyclingJobs_result::unsetjobList()
{
    jobListIsSet_ = false;
}

}
}
}
}
}


