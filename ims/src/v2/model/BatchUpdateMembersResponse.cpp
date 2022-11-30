

#include "huaweicloud/ims/v2/model/BatchUpdateMembersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchUpdateMembersResponse::BatchUpdateMembersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchUpdateMembersResponse::~BatchUpdateMembersResponse() = default;

void BatchUpdateMembersResponse::validate()
{
}

web::json::value BatchUpdateMembersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool BatchUpdateMembersResponse::fromJson(const web::json::value& val)
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


std::string BatchUpdateMembersResponse::getJobId() const
{
    return jobId_;
}

void BatchUpdateMembersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchUpdateMembersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchUpdateMembersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


