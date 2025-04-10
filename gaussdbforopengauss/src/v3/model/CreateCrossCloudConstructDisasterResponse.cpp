

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateCrossCloudConstructDisasterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateCrossCloudConstructDisasterResponse::CreateCrossCloudConstructDisasterResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateCrossCloudConstructDisasterResponse::~CreateCrossCloudConstructDisasterResponse() = default;

void CreateCrossCloudConstructDisasterResponse::validate()
{
}

web::json::value CreateCrossCloudConstructDisasterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateCrossCloudConstructDisasterResponse::fromJson(const web::json::value& val)
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


std::string CreateCrossCloudConstructDisasterResponse::getJobId() const
{
    return jobId_;
}

void CreateCrossCloudConstructDisasterResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateCrossCloudConstructDisasterResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateCrossCloudConstructDisasterResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


