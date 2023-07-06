

#include "huaweicloud/drs/v3/model/ShowJobListResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ShowJobListResponse::ShowJobListResponse()
{
    totalRecord_ = 0;
    totalRecordIsSet_ = false;
    jobsIsSet_ = false;
}

ShowJobListResponse::~ShowJobListResponse() = default;

void ShowJobListResponse::validate()
{
}

web::json::value ShowJobListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalRecordIsSet_) {
        val[utility::conversions::to_string_t("total_record")] = ModelBase::toJson(totalRecord_);
    }
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool ShowJobListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_record"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<JobInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

int32_t ShowJobListResponse::getTotalRecord() const
{
    return totalRecord_;
}

void ShowJobListResponse::setTotalRecord(int32_t value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool ShowJobListResponse::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void ShowJobListResponse::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

std::vector<JobInfo>& ShowJobListResponse::getJobs()
{
    return jobs_;
}

void ShowJobListResponse::setJobs(const std::vector<JobInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ShowJobListResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ShowJobListResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


