

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDbUserResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDbUserResponse::CreateDbUserResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateDbUserResponse::~CreateDbUserResponse() = default;

void CreateDbUserResponse::validate()
{
}

web::json::value CreateDbUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateDbUserResponse::fromJson(const web::json::value& val)
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

std::string CreateDbUserResponse::getJobId() const
{
    return jobId_;
}

void CreateDbUserResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDbUserResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDbUserResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


