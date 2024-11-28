

#include "huaweicloud/rds/v3/model/DeleteMsdtcLocalHostResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteMsdtcLocalHostResponse::DeleteMsdtcLocalHostResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteMsdtcLocalHostResponse::~DeleteMsdtcLocalHostResponse() = default;

void DeleteMsdtcLocalHostResponse::validate()
{
}

web::json::value DeleteMsdtcLocalHostResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteMsdtcLocalHostResponse::fromJson(const web::json::value& val)
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


std::string DeleteMsdtcLocalHostResponse::getJobId() const
{
    return jobId_;
}

void DeleteMsdtcLocalHostResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteMsdtcLocalHostResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteMsdtcLocalHostResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


