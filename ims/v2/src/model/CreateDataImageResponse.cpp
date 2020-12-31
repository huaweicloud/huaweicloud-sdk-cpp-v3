

#include "huaweicloud/ims/model/CreateDataImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateDataImageResponse::CreateDataImageResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateDataImageResponse::~CreateDataImageResponse() = default;

void CreateDataImageResponse::validate()
{
}

web::json::value CreateDataImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateDataImageResponse::fromJson(const web::json::value& val)
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


std::string CreateDataImageResponse::getJobId() const
{
    return jobId_;
}

void CreateDataImageResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDataImageResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDataImageResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


