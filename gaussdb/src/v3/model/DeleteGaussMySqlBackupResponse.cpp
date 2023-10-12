

#include "huaweicloud/gaussdb/v3/model/DeleteGaussMySqlBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteGaussMySqlBackupResponse::DeleteGaussMySqlBackupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteGaussMySqlBackupResponse::~DeleteGaussMySqlBackupResponse() = default;

void DeleteGaussMySqlBackupResponse::validate()
{
}

web::json::value DeleteGaussMySqlBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteGaussMySqlBackupResponse::fromJson(const web::json::value& val)
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


std::string DeleteGaussMySqlBackupResponse::getJobId() const
{
    return jobId_;
}

void DeleteGaussMySqlBackupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteGaussMySqlBackupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteGaussMySqlBackupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


