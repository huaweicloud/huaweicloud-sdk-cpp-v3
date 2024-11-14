

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheMappingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDbCacheMappingResponse::CreateDbCacheMappingResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateDbCacheMappingResponse::~CreateDbCacheMappingResponse() = default;

void CreateDbCacheMappingResponse::validate()
{
}

web::json::value CreateDbCacheMappingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateDbCacheMappingResponse::fromJson(const web::json::value& val)
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


std::string CreateDbCacheMappingResponse::getJobId() const
{
    return jobId_;
}

void CreateDbCacheMappingResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDbCacheMappingResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDbCacheMappingResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


