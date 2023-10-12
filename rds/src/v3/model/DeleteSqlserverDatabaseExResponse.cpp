

#include "huaweicloud/rds/v3/model/DeleteSqlserverDatabaseExResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteSqlserverDatabaseExResponse::DeleteSqlserverDatabaseExResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteSqlserverDatabaseExResponse::~DeleteSqlserverDatabaseExResponse() = default;

void DeleteSqlserverDatabaseExResponse::validate()
{
}

web::json::value DeleteSqlserverDatabaseExResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteSqlserverDatabaseExResponse::fromJson(const web::json::value& val)
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


std::string DeleteSqlserverDatabaseExResponse::getJobId() const
{
    return jobId_;
}

void DeleteSqlserverDatabaseExResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteSqlserverDatabaseExResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteSqlserverDatabaseExResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


