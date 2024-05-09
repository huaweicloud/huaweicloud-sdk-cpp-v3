

#include "huaweicloud/ecs/v2/model/ChangeVpcResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeVpcResponse::ChangeVpcResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ChangeVpcResponse::~ChangeVpcResponse() = default;

void ChangeVpcResponse::validate()
{
}

web::json::value ChangeVpcResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ChangeVpcResponse::fromJson(const web::json::value& val)
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


std::string ChangeVpcResponse::getJobId() const
{
    return jobId_;
}

void ChangeVpcResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeVpcResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeVpcResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


