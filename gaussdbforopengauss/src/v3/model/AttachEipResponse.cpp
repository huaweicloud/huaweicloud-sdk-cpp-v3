

#include "huaweicloud/gaussdbforopengauss/v3/model/AttachEipResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AttachEipResponse::AttachEipResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

AttachEipResponse::~AttachEipResponse() = default;

void AttachEipResponse::validate()
{
}

web::json::value AttachEipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool AttachEipResponse::fromJson(const web::json::value& val)
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

std::string AttachEipResponse::getJobId() const
{
    return jobId_;
}

void AttachEipResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool AttachEipResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void AttachEipResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


