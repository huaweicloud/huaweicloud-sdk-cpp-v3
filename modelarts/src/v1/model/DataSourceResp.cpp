

#include "huaweicloud/modelarts/v1/model/DataSourceResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DataSourceResp::DataSourceResp()
{
    jobIsSet_ = false;
}

DataSourceResp::~DataSourceResp() = default;

void DataSourceResp::validate()
{
}

web::json::value DataSourceResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}
bool DataSourceResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            JobSummaryResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}


JobSummaryResp DataSourceResp::getJob() const
{
    return job_;
}

void DataSourceResp::setJob(const JobSummaryResp& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool DataSourceResp::jobIsSet() const
{
    return jobIsSet_;
}

void DataSourceResp::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


