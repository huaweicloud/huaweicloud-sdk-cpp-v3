

#include "huaweicloud/rds/v3/model/CreateDnsNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateDnsNameResponse::CreateDnsNameResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateDnsNameResponse::~CreateDnsNameResponse() = default;

void CreateDnsNameResponse::validate()
{
}

web::json::value CreateDnsNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateDnsNameResponse::fromJson(const web::json::value& val)
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


std::string CreateDnsNameResponse::getJobId() const
{
    return jobId_;
}

void CreateDnsNameResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDnsNameResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDnsNameResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


