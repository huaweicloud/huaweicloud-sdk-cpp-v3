

#include "huaweicloud/drs/v5/model/CreateReplicationJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateReplicationJobResponse::CreateReplicationJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateReplicationJobResponse::~CreateReplicationJobResponse() = default;

void CreateReplicationJobResponse::validate()
{
}

web::json::value CreateReplicationJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateReplicationJobResponse::fromJson(const web::json::value& val)
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


std::string CreateReplicationJobResponse::getJobId() const
{
    return jobId_;
}

void CreateReplicationJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateReplicationJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateReplicationJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


