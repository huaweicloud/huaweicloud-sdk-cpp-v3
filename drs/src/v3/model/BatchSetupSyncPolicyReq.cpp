

#include "huaweicloud/drs/v3/model/BatchSetupSyncPolicyReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetupSyncPolicyReq::BatchSetupSyncPolicyReq()
{
    jobsIsSet_ = false;
}

BatchSetupSyncPolicyReq::~BatchSetupSyncPolicyReq() = default;

void BatchSetupSyncPolicyReq::validate()
{
}

web::json::value BatchSetupSyncPolicyReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchSetupSyncPolicyReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<SyncPolicyReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<SyncPolicyReq>& BatchSetupSyncPolicyReq::getJobs()
{
    return jobs_;
}

void BatchSetupSyncPolicyReq::setJobs(const std::vector<SyncPolicyReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchSetupSyncPolicyReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchSetupSyncPolicyReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


