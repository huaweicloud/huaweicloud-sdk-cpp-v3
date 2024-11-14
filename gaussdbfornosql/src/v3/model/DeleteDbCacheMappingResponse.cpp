

#include "huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheMappingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DeleteDbCacheMappingResponse::DeleteDbCacheMappingResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteDbCacheMappingResponse::~DeleteDbCacheMappingResponse() = default;

void DeleteDbCacheMappingResponse::validate()
{
}

web::json::value DeleteDbCacheMappingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteDbCacheMappingResponse::fromJson(const web::json::value& val)
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


std::string DeleteDbCacheMappingResponse::getJobId() const
{
    return jobId_;
}

void DeleteDbCacheMappingResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteDbCacheMappingResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteDbCacheMappingResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


