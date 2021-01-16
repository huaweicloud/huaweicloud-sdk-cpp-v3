

#include "huaweicloud/ecs/v2/model/ResizePostPaidServerResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizePostPaidServerResponse::ResizePostPaidServerResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResizePostPaidServerResponse::~ResizePostPaidServerResponse() = default;

void ResizePostPaidServerResponse::validate()
{
}

web::json::value ResizePostPaidServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ResizePostPaidServerResponse::fromJson(const web::json::value& val)
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


std::string ResizePostPaidServerResponse::getJobId() const
{
    return jobId_;
}

void ResizePostPaidServerResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizePostPaidServerResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizePostPaidServerResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


