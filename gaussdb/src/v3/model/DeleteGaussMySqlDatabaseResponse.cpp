

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlDatabaseResponse::DeleteGaussMySqlDatabaseResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteGaussMySqlDatabaseResponse::~DeleteGaussMySqlDatabaseResponse() = default;

void DeleteGaussMySqlDatabaseResponse::validate()
{
}

web::json::value DeleteGaussMySqlDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteGaussMySqlDatabaseResponse::fromJson(const web::json::value& val)
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


std::string DeleteGaussMySqlDatabaseResponse::getJobId() const
{
    return jobId_;
}

void DeleteGaussMySqlDatabaseResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteGaussMySqlDatabaseResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


