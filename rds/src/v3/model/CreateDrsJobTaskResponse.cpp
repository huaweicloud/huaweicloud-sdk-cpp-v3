

#include "huaweicloud/rds/v3/model/CreateDrsJobTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDrsJobTaskResponse::CreateDrsJobTaskResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateDrsJobTaskResponse::~CreateDrsJobTaskResponse() = default;

void CreateDrsJobTaskResponse::validate()
{
}

web::json::value CreateDrsJobTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateDrsJobTaskResponse::fromJson(const web::json::value& val)
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


std::string CreateDrsJobTaskResponse::getJobId() const
{
    return jobId_;
}

void CreateDrsJobTaskResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDrsJobTaskResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDrsJobTaskResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


