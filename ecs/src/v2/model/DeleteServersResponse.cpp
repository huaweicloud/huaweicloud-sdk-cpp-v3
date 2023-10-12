

#include "huaweicloud/ecs/v2/model/DeleteServersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteServersResponse::DeleteServersResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteServersResponse::~DeleteServersResponse() = default;

void DeleteServersResponse::validate()
{
}

web::json::value DeleteServersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteServersResponse::fromJson(const web::json::value& val)
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


std::string DeleteServersResponse::getJobId() const
{
    return jobId_;
}

void DeleteServersResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteServersResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteServersResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


