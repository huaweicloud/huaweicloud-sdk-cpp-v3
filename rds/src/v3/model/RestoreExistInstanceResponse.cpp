

#include "huaweicloud/rds/v3/model/RestoreExistInstanceResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreExistInstanceResponse::RestoreExistInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreExistInstanceResponse::~RestoreExistInstanceResponse() = default;

void RestoreExistInstanceResponse::validate()
{
}

web::json::value RestoreExistInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestoreExistInstanceResponse::fromJson(const web::json::value& val)
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


std::string RestoreExistInstanceResponse::getJobId() const
{
    return jobId_;
}

void RestoreExistInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreExistInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreExistInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


