

#include "huaweicloud/gaussdb/v3/model/UpgradeGaussMySqlInstanceDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpgradeGaussMySqlInstanceDatabaseResponse::UpgradeGaussMySqlInstanceDatabaseResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpgradeGaussMySqlInstanceDatabaseResponse::~UpgradeGaussMySqlInstanceDatabaseResponse() = default;

void UpgradeGaussMySqlInstanceDatabaseResponse::validate()
{
}

web::json::value UpgradeGaussMySqlInstanceDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpgradeGaussMySqlInstanceDatabaseResponse::fromJson(const web::json::value& val)
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


std::string UpgradeGaussMySqlInstanceDatabaseResponse::getJobId() const
{
    return jobId_;
}

void UpgradeGaussMySqlInstanceDatabaseResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpgradeGaussMySqlInstanceDatabaseResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpgradeGaussMySqlInstanceDatabaseResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


