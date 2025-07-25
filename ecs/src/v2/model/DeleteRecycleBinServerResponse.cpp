

#include "huaweicloud/ecs/v2/model/DeleteRecycleBinServerResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteRecycleBinServerResponse::DeleteRecycleBinServerResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteRecycleBinServerResponse::~DeleteRecycleBinServerResponse() = default;

void DeleteRecycleBinServerResponse::validate()
{
}

web::json::value DeleteRecycleBinServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteRecycleBinServerResponse::fromJson(const web::json::value& val)
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


std::string DeleteRecycleBinServerResponse::getJobId() const
{
    return jobId_;
}

void DeleteRecycleBinServerResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteRecycleBinServerResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteRecycleBinServerResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


