

#include "huaweicloud/drs/v5/model/ExportJobsTemplateReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ExportJobsTemplateReq::ExportJobsTemplateReq()
{
    jobsIsSet_ = false;
}

ExportJobsTemplateReq::~ExportJobsTemplateReq() = default;

void ExportJobsTemplateReq::validate()
{
}

web::json::value ExportJobsTemplateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool ExportJobsTemplateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ExportJobsTemplateReq::getJobs()
{
    return jobs_;
}

void ExportJobsTemplateReq::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool ExportJobsTemplateReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void ExportJobsTemplateReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


