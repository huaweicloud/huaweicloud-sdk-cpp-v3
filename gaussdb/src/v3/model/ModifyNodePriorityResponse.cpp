

#include "huaweicloud/gaussdb/v3/model/ModifyNodePriorityResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ModifyNodePriorityResponse::ModifyNodePriorityResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ModifyNodePriorityResponse::~ModifyNodePriorityResponse() = default;

void ModifyNodePriorityResponse::validate()
{
}

web::json::value ModifyNodePriorityResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ModifyNodePriorityResponse::fromJson(const web::json::value& val)
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


std::string ModifyNodePriorityResponse::getJobId() const
{
    return jobId_;
}

void ModifyNodePriorityResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyNodePriorityResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyNodePriorityResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


