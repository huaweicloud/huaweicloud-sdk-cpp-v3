

#include "huaweicloud/gaussdb/v3/model/CancelScheduleTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CancelScheduleTask::CancelScheduleTask()
{
    jobIdsIsSet_ = false;
}

CancelScheduleTask::~CancelScheduleTask() = default;

void CancelScheduleTask::validate()
{
}

web::json::value CancelScheduleTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdsIsSet_) {
        val[utility::conversions::to_string_t("job_ids")] = ModelBase::toJson(jobIds_);
    }

    return val;
}
bool CancelScheduleTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CancelScheduleTask::getJobIds()
{
    return jobIds_;
}

void CancelScheduleTask::setJobIds(const std::vector<std::string>& value)
{
    jobIds_ = value;
    jobIdsIsSet_ = true;
}

bool CancelScheduleTask::jobIdsIsSet() const
{
    return jobIdsIsSet_;
}

void CancelScheduleTask::unsetjobIds()
{
    jobIdsIsSet_ = false;
}

}
}
}
}
}


