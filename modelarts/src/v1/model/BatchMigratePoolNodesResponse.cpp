

#include "huaweicloud/modelarts/v1/model/BatchMigratePoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchMigratePoolNodesResponse::BatchMigratePoolNodesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchMigratePoolNodesResponse::~BatchMigratePoolNodesResponse() = default;

void BatchMigratePoolNodesResponse::validate()
{
}

web::json::value BatchMigratePoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchMigratePoolNodesResponse::fromJson(const web::json::value& val)
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


std::string BatchMigratePoolNodesResponse::getJobId() const
{
    return jobId_;
}

void BatchMigratePoolNodesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchMigratePoolNodesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchMigratePoolNodesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


