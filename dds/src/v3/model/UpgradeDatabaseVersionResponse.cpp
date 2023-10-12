

#include "huaweicloud/dds/v3/model/UpgradeDatabaseVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpgradeDatabaseVersionResponse::UpgradeDatabaseVersionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpgradeDatabaseVersionResponse::~UpgradeDatabaseVersionResponse() = default;

void UpgradeDatabaseVersionResponse::validate()
{
}

web::json::value UpgradeDatabaseVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpgradeDatabaseVersionResponse::fromJson(const web::json::value& val)
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


std::string UpgradeDatabaseVersionResponse::getJobId() const
{
    return jobId_;
}

void UpgradeDatabaseVersionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeDatabaseVersionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeDatabaseVersionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


