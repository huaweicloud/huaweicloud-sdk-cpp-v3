

#include "huaweicloud/codeartsbuild/v3/model/JobUpdateRecordListVo_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




JobUpdateRecordListVo_result::JobUpdateRecordListVo_result()
{
    jobUpdateRecordsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

JobUpdateRecordListVo_result::~JobUpdateRecordListVo_result() = default;

void JobUpdateRecordListVo_result::validate()
{
}

web::json::value JobUpdateRecordListVo_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobUpdateRecordsIsSet_) {
        val[utility::conversions::to_string_t("job_update_records")] = ModelBase::toJson(jobUpdateRecords_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool JobUpdateRecordListVo_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_update_records"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_update_records"));
        if(!fieldValue.is_null())
        {
            std::vector<JobUpdateRecordListVo_result_job_update_records> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobUpdateRecords(refVal);
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
    return ok;
}


std::vector<JobUpdateRecordListVo_result_job_update_records>& JobUpdateRecordListVo_result::getJobUpdateRecords()
{
    return jobUpdateRecords_;
}

void JobUpdateRecordListVo_result::setJobUpdateRecords(const std::vector<JobUpdateRecordListVo_result_job_update_records>& value)
{
    jobUpdateRecords_ = value;
    jobUpdateRecordsIsSet_ = true;
}

bool JobUpdateRecordListVo_result::jobUpdateRecordsIsSet() const
{
    return jobUpdateRecordsIsSet_;
}

void JobUpdateRecordListVo_result::unsetjobUpdateRecords()
{
    jobUpdateRecordsIsSet_ = false;
}

int32_t JobUpdateRecordListVo_result::getTotal() const
{
    return total_;
}

void JobUpdateRecordListVo_result::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool JobUpdateRecordListVo_result::totalIsSet() const
{
    return totalIsSet_;
}

void JobUpdateRecordListVo_result::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


