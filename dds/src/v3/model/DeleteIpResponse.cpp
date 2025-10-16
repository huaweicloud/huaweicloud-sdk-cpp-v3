

#include "huaweicloud/dds/v3/model/DeleteIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteIpResponse::DeleteIpResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteIpResponse::~DeleteIpResponse() = default;

void DeleteIpResponse::validate()
{
}

web::json::value DeleteIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteIpResponse::fromJson(const web::json::value& val)
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


std::string DeleteIpResponse::getJobId() const
{
    return jobId_;
}

void DeleteIpResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteIpResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteIpResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


