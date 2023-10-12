

#include "huaweicloud/rds/v3/model/ListJobInfoDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListJobInfoDetailResponse::ListJobInfoDetailResponse()
{
    jobsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListJobInfoDetailResponse::~ListJobInfoDetailResponse() = default;

void ListJobInfoDetailResponse::validate()
{
}

web::json::value ListJobInfoDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListJobInfoDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            GetTaskDetailListRsp_jobs refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


GetTaskDetailListRsp_jobs ListJobInfoDetailResponse::getJobs() const
{
    return jobs_;
}

void ListJobInfoDetailResponse::setJobs(const GetTaskDetailListRsp_jobs& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ListJobInfoDetailResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void ListJobInfoDetailResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

int32_t ListJobInfoDetailResponse::getCount() const
{
    return count_;
}

void ListJobInfoDetailResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListJobInfoDetailResponse::countIsSet() const
{
    return countIsSet_;
}

void ListJobInfoDetailResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


