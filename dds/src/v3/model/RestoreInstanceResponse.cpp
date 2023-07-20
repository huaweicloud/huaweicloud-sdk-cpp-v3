

#include "huaweicloud/dds/v3/model/RestoreInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




RestoreInstanceResponse::RestoreInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreInstanceResponse::~RestoreInstanceResponse() = default;

void RestoreInstanceResponse::validate()
{
}

web::json::value RestoreInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool RestoreInstanceResponse::fromJson(const web::json::value& val)
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

std::string RestoreInstanceResponse::getJobId() const
{
    return jobId_;
}

void RestoreInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


