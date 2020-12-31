

#include "huaweicloud/ims/model/CreateWholeImageResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateWholeImageResponse::CreateWholeImageResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateWholeImageResponse::~CreateWholeImageResponse() = default;

void CreateWholeImageResponse::validate()
{
}

web::json::value CreateWholeImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateWholeImageResponse::fromJson(const web::json::value& val)
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


std::string CreateWholeImageResponse::getJobId() const
{
    return jobId_;
}

void CreateWholeImageResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateWholeImageResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateWholeImageResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


