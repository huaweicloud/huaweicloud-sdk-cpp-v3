

#include "huaweicloud/gaussdb/v3/model/ShowGaussMySqlJobInfoResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowGaussMySqlJobInfoResponse::ShowGaussMySqlJobInfoResponse()
{
    jobIsSet_ = false;
}

ShowGaussMySqlJobInfoResponse::~ShowGaussMySqlJobInfoResponse() = default;

void ShowGaussMySqlJobInfoResponse::validate()
{
}

web::json::value ShowGaussMySqlJobInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}

bool ShowGaussMySqlJobInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            GetJobInfoDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}

GetJobInfoDetail ShowGaussMySqlJobInfoResponse::getJob() const
{
    return job_;
}

void ShowGaussMySqlJobInfoResponse::setJob(const GetJobInfoDetail& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool ShowGaussMySqlJobInfoResponse::jobIsSet() const
{
    return jobIsSet_;
}

void ShowGaussMySqlJobInfoResponse::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


