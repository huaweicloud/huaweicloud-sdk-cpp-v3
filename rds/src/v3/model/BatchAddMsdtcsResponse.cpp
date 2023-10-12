

#include "huaweicloud/rds/v3/model/BatchAddMsdtcsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchAddMsdtcsResponse::BatchAddMsdtcsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchAddMsdtcsResponse::~BatchAddMsdtcsResponse() = default;

void BatchAddMsdtcsResponse::validate()
{
}

web::json::value BatchAddMsdtcsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchAddMsdtcsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string BatchAddMsdtcsResponse::getJobId() const
{
    return jobId_;
}

void BatchAddMsdtcsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchAddMsdtcsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchAddMsdtcsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


