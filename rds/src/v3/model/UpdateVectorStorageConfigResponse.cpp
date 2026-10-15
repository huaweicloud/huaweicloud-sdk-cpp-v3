

#include "huaweicloud/rds/v3/model/UpdateVectorStorageConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateVectorStorageConfigResponse::UpdateVectorStorageConfigResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateVectorStorageConfigResponse::~UpdateVectorStorageConfigResponse() = default;

void UpdateVectorStorageConfigResponse::validate()
{
}

web::json::value UpdateVectorStorageConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateVectorStorageConfigResponse::fromJson(const web::json::value& val)
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


std::string UpdateVectorStorageConfigResponse::getJobId() const
{
    return jobId_;
}

void UpdateVectorStorageConfigResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateVectorStorageConfigResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateVectorStorageConfigResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


