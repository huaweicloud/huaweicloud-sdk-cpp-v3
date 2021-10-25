

#include "huaweicloud/sdrs/v1/model/CreateProtectedInstanceResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateProtectedInstanceResponse::CreateProtectedInstanceResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateProtectedInstanceResponse::~CreateProtectedInstanceResponse() = default;

void CreateProtectedInstanceResponse::validate()
{
}

web::json::value CreateProtectedInstanceResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateProtectedInstanceResponse::fromJson(const web::json::value& val)
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


std::string CreateProtectedInstanceResponse::getJobId() const
{
    return jobId_;
}

void CreateProtectedInstanceResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateProtectedInstanceResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateProtectedInstanceResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


