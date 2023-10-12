

#include "huaweicloud/gaussdb/v3/model/ResetGaussMySqlDatabasePasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResetGaussMySqlDatabasePasswordResponse::ResetGaussMySqlDatabasePasswordResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResetGaussMySqlDatabasePasswordResponse::~ResetGaussMySqlDatabasePasswordResponse() = default;

void ResetGaussMySqlDatabasePasswordResponse::validate()
{
}

web::json::value ResetGaussMySqlDatabasePasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ResetGaussMySqlDatabasePasswordResponse::fromJson(const web::json::value& val)
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


std::string ResetGaussMySqlDatabasePasswordResponse::getJobId() const
{
    return jobId_;
}

void ResetGaussMySqlDatabasePasswordResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResetGaussMySqlDatabasePasswordResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResetGaussMySqlDatabasePasswordResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


