

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteEnlargeFailNodeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteEnlargeFailNodeResponse::DeleteEnlargeFailNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteEnlargeFailNodeResponse::~DeleteEnlargeFailNodeResponse() = default;

void DeleteEnlargeFailNodeResponse::validate()
{
}

web::json::value DeleteEnlargeFailNodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteEnlargeFailNodeResponse::fromJson(const web::json::value& val)
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

std::string DeleteEnlargeFailNodeResponse::getJobId() const
{
    return jobId_;
}

void DeleteEnlargeFailNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteEnlargeFailNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteEnlargeFailNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


