

#include "huaweicloud/ims/v2/model/BatchDeleteMembersResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




BatchDeleteMembersResponse::BatchDeleteMembersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

BatchDeleteMembersResponse::~BatchDeleteMembersResponse() = default;

void BatchDeleteMembersResponse::validate()
{
}

web::json::value BatchDeleteMembersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool BatchDeleteMembersResponse::fromJson(const web::json::value& val)
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


std::string BatchDeleteMembersResponse::getJobId() const
{
    return jobId_;
}

void BatchDeleteMembersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchDeleteMembersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchDeleteMembersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


