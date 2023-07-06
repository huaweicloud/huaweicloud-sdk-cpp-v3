

#include "huaweicloud/drs/v3/model/BatchReplaceDefinerReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchReplaceDefinerReq::BatchReplaceDefinerReq()
{
    jobsIsSet_ = false;
}

BatchReplaceDefinerReq::~BatchReplaceDefinerReq() = default;

void BatchReplaceDefinerReq::validate()
{
}

web::json::value BatchReplaceDefinerReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchReplaceDefinerReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplaceDefinerInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

std::vector<ReplaceDefinerInfo>& BatchReplaceDefinerReq::getJobs()
{
    return jobs_;
}

void BatchReplaceDefinerReq::setJobs(const std::vector<ReplaceDefinerInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchReplaceDefinerReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchReplaceDefinerReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


