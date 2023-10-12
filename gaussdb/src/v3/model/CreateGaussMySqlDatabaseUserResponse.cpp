

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlDatabaseUserResponse::CreateGaussMySqlDatabaseUserResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateGaussMySqlDatabaseUserResponse::~CreateGaussMySqlDatabaseUserResponse() = default;

void CreateGaussMySqlDatabaseUserResponse::validate()
{
}

web::json::value CreateGaussMySqlDatabaseUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateGaussMySqlDatabaseUserResponse::fromJson(const web::json::value& val)
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


std::string CreateGaussMySqlDatabaseUserResponse::getJobId() const
{
    return jobId_;
}

void CreateGaussMySqlDatabaseUserResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGaussMySqlDatabaseUserResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGaussMySqlDatabaseUserResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


