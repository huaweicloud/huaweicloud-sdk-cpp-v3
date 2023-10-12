

#include "huaweicloud/ims/v2/model/CreateImageResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateImageResponse::CreateImageResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateImageResponse::~CreateImageResponse() = default;

void CreateImageResponse::validate()
{
}

web::json::value CreateImageResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateImageResponse::fromJson(const web::json::value& val)
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


std::string CreateImageResponse::getJobId() const
{
    return jobId_;
}

void CreateImageResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateImageResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateImageResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


