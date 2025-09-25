

#include "huaweicloud/gaussdbforopengauss/v3/model/CollectAspResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CollectAspResponse::CollectAspResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CollectAspResponse::~CollectAspResponse() = default;

void CollectAspResponse::validate()
{
}

web::json::value CollectAspResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CollectAspResponse::fromJson(const web::json::value& val)
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


std::string CollectAspResponse::getJobId() const
{
    return jobId_;
}

void CollectAspResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectAspResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectAspResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


