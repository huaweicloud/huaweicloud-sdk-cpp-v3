

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlDatabaseUserResponse::DeleteGaussMySqlDatabaseUserResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteGaussMySqlDatabaseUserResponse::~DeleteGaussMySqlDatabaseUserResponse() = default;

void DeleteGaussMySqlDatabaseUserResponse::validate()
{
}

web::json::value DeleteGaussMySqlDatabaseUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteGaussMySqlDatabaseUserResponse::fromJson(const web::json::value& val)
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


std::string DeleteGaussMySqlDatabaseUserResponse::getJobId() const
{
    return jobId_;
}

void DeleteGaussMySqlDatabaseUserResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteGaussMySqlDatabaseUserResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteGaussMySqlDatabaseUserResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


