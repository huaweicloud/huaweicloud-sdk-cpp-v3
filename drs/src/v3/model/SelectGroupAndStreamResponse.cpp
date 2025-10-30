

#include "huaweicloud/drs/v3/model/SelectGroupAndStreamResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




SelectGroupAndStreamResponse::SelectGroupAndStreamResponse()
{
    jobIsSet_ = false;
}

SelectGroupAndStreamResponse::~SelectGroupAndStreamResponse() = default;

void SelectGroupAndStreamResponse::validate()
{
}

web::json::value SelectGroupAndStreamResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}
bool SelectGroupAndStreamResponse::fromJson(const web::json::value& val)
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


LtsInfo_job SelectGroupAndStreamResponse::getJob() const
{
    return job_;
}

void SelectGroupAndStreamResponse::setJob(const LtsInfo_job& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool SelectGroupAndStreamResponse::jobIsSet() const
{
    return jobIsSet_;
}

void SelectGroupAndStreamResponse::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


