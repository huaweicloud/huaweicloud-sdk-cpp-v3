

#include "huaweicloud/modelarts/v1/model/BatchResetPoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




BatchResetPoolNodesResponse::BatchResetPoolNodesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchResetPoolNodesResponse::~BatchResetPoolNodesResponse() = default;

void BatchResetPoolNodesResponse::validate()
{
}

web::json::value BatchResetPoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool BatchResetPoolNodesResponse::fromJson(const web::json::value& val)
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


std::string BatchResetPoolNodesResponse::getJobId() const
{
    return jobId_;
}

void BatchResetPoolNodesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchResetPoolNodesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchResetPoolNodesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


