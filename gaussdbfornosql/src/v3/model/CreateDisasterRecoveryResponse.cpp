

#include "huaweicloud/gaussdbfornosql/v3/model/CreateDisasterRecoveryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateDisasterRecoveryResponse::CreateDisasterRecoveryResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    disasterRecoveryId_ = "";
    disasterRecoveryIdIsSet_ = false;
}

CreateDisasterRecoveryResponse::~CreateDisasterRecoveryResponse() = default;

void CreateDisasterRecoveryResponse::validate()
{
}

web::json::value CreateDisasterRecoveryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(disasterRecoveryIdIsSet_) {
        val[utility::conversions::to_string_t("disaster_recovery_id")] = ModelBase::toJson(disasterRecoveryId_);
    }

    return val;
}
bool CreateDisasterRecoveryResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("disaster_recovery_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_recovery_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterRecoveryId(refVal);
        }
    }
    return ok;
}


std::string CreateDisasterRecoveryResponse::getJobId() const
{
    return jobId_;
}

void CreateDisasterRecoveryResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateDisasterRecoveryResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateDisasterRecoveryResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CreateDisasterRecoveryResponse::getDisasterRecoveryId() const
{
    return disasterRecoveryId_;
}

void CreateDisasterRecoveryResponse::setDisasterRecoveryId(const std::string& value)
{
    disasterRecoveryId_ = value;
    disasterRecoveryIdIsSet_ = true;
}

bool CreateDisasterRecoveryResponse::disasterRecoveryIdIsSet() const
{
    return disasterRecoveryIdIsSet_;
}

void CreateDisasterRecoveryResponse::unsetdisasterRecoveryId()
{
    disasterRecoveryIdIsSet_ = false;
}

}
}
}
}
}


