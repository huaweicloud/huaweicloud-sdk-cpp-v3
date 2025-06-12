

#include "huaweicloud/ecs/v2/model/RevertRecycleBinServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




RevertRecycleBinServerResponse::RevertRecycleBinServerResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RevertRecycleBinServerResponse::~RevertRecycleBinServerResponse() = default;

void RevertRecycleBinServerResponse::validate()
{
}

web::json::value RevertRecycleBinServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RevertRecycleBinServerResponse::fromJson(const web::json::value& val)
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


std::string RevertRecycleBinServerResponse::getJobId() const
{
    return jobId_;
}

void RevertRecycleBinServerResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RevertRecycleBinServerResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RevertRecycleBinServerResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


