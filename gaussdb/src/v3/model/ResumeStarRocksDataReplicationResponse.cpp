

#include "huaweicloud/gaussdb/v3/model/ResumeStarRocksDataReplicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResumeStarRocksDataReplicationResponse::ResumeStarRocksDataReplicationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResumeStarRocksDataReplicationResponse::~ResumeStarRocksDataReplicationResponse() = default;

void ResumeStarRocksDataReplicationResponse::validate()
{
}

web::json::value ResumeStarRocksDataReplicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ResumeStarRocksDataReplicationResponse::fromJson(const web::json::value& val)
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


std::string ResumeStarRocksDataReplicationResponse::getJobId() const
{
    return jobId_;
}

void ResumeStarRocksDataReplicationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResumeStarRocksDataReplicationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResumeStarRocksDataReplicationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


