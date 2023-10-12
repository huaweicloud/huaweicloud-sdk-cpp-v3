

#include "huaweicloud/drs/v3/model/BatchUpdateDatabaseObjectReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchUpdateDatabaseObjectReq::BatchUpdateDatabaseObjectReq()
{
    jobsIsSet_ = false;
}

BatchUpdateDatabaseObjectReq::~BatchUpdateDatabaseObjectReq() = default;

void BatchUpdateDatabaseObjectReq::validate()
{
}

web::json::value BatchUpdateDatabaseObjectReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchUpdateDatabaseObjectReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateDatabaseObjectReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<UpdateDatabaseObjectReq>& BatchUpdateDatabaseObjectReq::getJobs()
{
    return jobs_;
}

void BatchUpdateDatabaseObjectReq::setJobs(const std::vector<UpdateDatabaseObjectReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchUpdateDatabaseObjectReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchUpdateDatabaseObjectReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


