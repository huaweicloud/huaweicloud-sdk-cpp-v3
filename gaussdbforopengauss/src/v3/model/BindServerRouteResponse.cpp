

#include "huaweicloud/gaussdbforopengauss/v3/model/BindServerRouteResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BindServerRouteResponse::BindServerRouteResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BindServerRouteResponse::~BindServerRouteResponse() = default;

void BindServerRouteResponse::validate()
{
}

web::json::value BindServerRouteResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BindServerRouteResponse::fromJson(const web::json::value& val)
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


std::string BindServerRouteResponse::getJobId() const
{
    return jobId_;
}

void BindServerRouteResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BindServerRouteResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BindServerRouteResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


