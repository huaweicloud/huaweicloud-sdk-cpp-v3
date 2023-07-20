

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlDatabaseResponse::CreateGaussMySqlDatabaseResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateGaussMySqlDatabaseResponse::~CreateGaussMySqlDatabaseResponse() = default;

void CreateGaussMySqlDatabaseResponse::validate()
{
}

web::json::value CreateGaussMySqlDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool CreateGaussMySqlDatabaseResponse::fromJson(const web::json::value& val)
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

std::string CreateGaussMySqlDatabaseResponse::getJobId() const
{
    return jobId_;
}

void CreateGaussMySqlDatabaseResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateGaussMySqlDatabaseResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateGaussMySqlDatabaseResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


