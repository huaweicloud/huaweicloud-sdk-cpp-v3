

#include "huaweicloud/drs/v3/model/LtsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




LtsInfo::LtsInfo()
{
    jobIsSet_ = false;
}

LtsInfo::~LtsInfo() = default;

void LtsInfo::validate()
{
}

web::json::value LtsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}
bool LtsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            LtsInfo_job refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}


LtsInfo_job LtsInfo::getJob() const
{
    return job_;
}

void LtsInfo::setJob(const LtsInfo_job& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool LtsInfo::jobIsSet() const
{
    return jobIsSet_;
}

void LtsInfo::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


