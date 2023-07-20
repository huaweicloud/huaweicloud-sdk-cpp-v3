

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDbUserResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDbUserResponse::DeleteDbUserResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteDbUserResponse::~DeleteDbUserResponse() = default;

void DeleteDbUserResponse::validate()
{
}

web::json::value DeleteDbUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool DeleteDbUserResponse::fromJson(const web::json::value& val)
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

std::string DeleteDbUserResponse::getJobId() const
{
    return jobId_;
}

void DeleteDbUserResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDbUserResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDbUserResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


