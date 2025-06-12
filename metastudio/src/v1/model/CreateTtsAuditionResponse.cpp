

#include "huaweicloud/metastudio/v1/model/CreateTtsAuditionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTtsAuditionResponse::CreateTtsAuditionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateTtsAuditionResponse::~CreateTtsAuditionResponse() = default;

void CreateTtsAuditionResponse::validate()
{
}

web::json::value CreateTtsAuditionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateTtsAuditionResponse::fromJson(const web::json::value& val)
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


std::string CreateTtsAuditionResponse::getJobId() const
{
    return jobId_;
}

void CreateTtsAuditionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateTtsAuditionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateTtsAuditionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


