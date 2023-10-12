

#include "huaweicloud/sdrs/v1/model/CreateReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateReplicationResponse::CreateReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateReplicationResponse::~CreateReplicationResponse() = default;

void CreateReplicationResponse::validate()
{
}

web::json::value CreateReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateReplicationResponse::fromJson(const web::json::value& val)
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


std::string CreateReplicationResponse::getJobId() const
{
    return jobId_;
}

void CreateReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


