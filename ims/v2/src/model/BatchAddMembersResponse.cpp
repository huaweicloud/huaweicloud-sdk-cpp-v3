

#include "huaweicloud/ims/model/BatchAddMembersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchAddMembersResponse::BatchAddMembersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchAddMembersResponse::~BatchAddMembersResponse() = default;

void BatchAddMembersResponse::validate()
{
}

web::json::value BatchAddMembersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool BatchAddMembersResponse::fromJson(const web::json::value& val)
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


std::string BatchAddMembersResponse::getJobId() const
{
    return jobId_;
}

void BatchAddMembersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchAddMembersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchAddMembersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


