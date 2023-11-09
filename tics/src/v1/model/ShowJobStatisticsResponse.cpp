

#include "huaweicloud/tics/v1/model/ShowJobStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ShowJobStatisticsResponse::ShowJobStatisticsResponse()
{
    jobCnt_ = 0L;
    jobCntIsSet_ = false;
    jobInsCnt_ = 0L;
    jobInsCntIsSet_ = false;
    jobInsFailCnt_ = 0L;
    jobInsFailCntIsSet_ = false;
    jobInsInterceptCnt_ = 0L;
    jobInsInterceptCntIsSet_ = false;
    jobInsSuccessCnt_ = 0L;
    jobInsSuccessCntIsSet_ = false;
}

ShowJobStatisticsResponse::~ShowJobStatisticsResponse() = default;

void ShowJobStatisticsResponse::validate()
{
}

web::json::value ShowJobStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobCntIsSet_) {
        val[utility::conversions::to_string_t("job_cnt")] = ModelBase::toJson(jobCnt_);
    }
    if(jobInsCntIsSet_) {
        val[utility::conversions::to_string_t("job_ins_cnt")] = ModelBase::toJson(jobInsCnt_);
    }
    if(jobInsFailCntIsSet_) {
        val[utility::conversions::to_string_t("job_ins_fail_cnt")] = ModelBase::toJson(jobInsFailCnt_);
    }
    if(jobInsInterceptCntIsSet_) {
        val[utility::conversions::to_string_t("job_ins_intercept_cnt")] = ModelBase::toJson(jobInsInterceptCnt_);
    }
    if(jobInsSuccessCntIsSet_) {
        val[utility::conversions::to_string_t("job_ins_success_cnt")] = ModelBase::toJson(jobInsSuccessCnt_);
    }

    return val;
}
bool ShowJobStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_ins_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ins_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobInsCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_ins_fail_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ins_fail_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobInsFailCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_ins_intercept_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ins_intercept_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobInsInterceptCnt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_ins_success_cnt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ins_success_cnt"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobInsSuccessCnt(refVal);
        }
    }
    return ok;
}


int64_t ShowJobStatisticsResponse::getJobCnt() const
{
    return jobCnt_;
}

void ShowJobStatisticsResponse::setJobCnt(int64_t value)
{
    jobCnt_ = value;
    jobCntIsSet_ = true;
}

bool ShowJobStatisticsResponse::jobCntIsSet() const
{
    return jobCntIsSet_;
}

void ShowJobStatisticsResponse::unsetjobCnt()
{
    jobCntIsSet_ = false;
}

int64_t ShowJobStatisticsResponse::getJobInsCnt() const
{
    return jobInsCnt_;
}

void ShowJobStatisticsResponse::setJobInsCnt(int64_t value)
{
    jobInsCnt_ = value;
    jobInsCntIsSet_ = true;
}

bool ShowJobStatisticsResponse::jobInsCntIsSet() const
{
    return jobInsCntIsSet_;
}

void ShowJobStatisticsResponse::unsetjobInsCnt()
{
    jobInsCntIsSet_ = false;
}

int64_t ShowJobStatisticsResponse::getJobInsFailCnt() const
{
    return jobInsFailCnt_;
}

void ShowJobStatisticsResponse::setJobInsFailCnt(int64_t value)
{
    jobInsFailCnt_ = value;
    jobInsFailCntIsSet_ = true;
}

bool ShowJobStatisticsResponse::jobInsFailCntIsSet() const
{
    return jobInsFailCntIsSet_;
}

void ShowJobStatisticsResponse::unsetjobInsFailCnt()
{
    jobInsFailCntIsSet_ = false;
}

int64_t ShowJobStatisticsResponse::getJobInsInterceptCnt() const
{
    return jobInsInterceptCnt_;
}

void ShowJobStatisticsResponse::setJobInsInterceptCnt(int64_t value)
{
    jobInsInterceptCnt_ = value;
    jobInsInterceptCntIsSet_ = true;
}

bool ShowJobStatisticsResponse::jobInsInterceptCntIsSet() const
{
    return jobInsInterceptCntIsSet_;
}

void ShowJobStatisticsResponse::unsetjobInsInterceptCnt()
{
    jobInsInterceptCntIsSet_ = false;
}

int64_t ShowJobStatisticsResponse::getJobInsSuccessCnt() const
{
    return jobInsSuccessCnt_;
}

void ShowJobStatisticsResponse::setJobInsSuccessCnt(int64_t value)
{
    jobInsSuccessCnt_ = value;
    jobInsSuccessCntIsSet_ = true;
}

bool ShowJobStatisticsResponse::jobInsSuccessCntIsSet() const
{
    return jobInsSuccessCntIsSet_;
}

void ShowJobStatisticsResponse::unsetjobInsSuccessCnt()
{
    jobInsSuccessCntIsSet_ = false;
}

}
}
}
}
}


