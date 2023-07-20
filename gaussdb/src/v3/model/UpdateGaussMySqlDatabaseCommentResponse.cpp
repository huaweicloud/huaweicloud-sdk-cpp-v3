

#include "huaweicloud/gaussdb/v3/model/UpdateGaussMySqlDatabaseCommentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateGaussMySqlDatabaseCommentResponse::UpdateGaussMySqlDatabaseCommentResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateGaussMySqlDatabaseCommentResponse::~UpdateGaussMySqlDatabaseCommentResponse() = default;

void UpdateGaussMySqlDatabaseCommentResponse::validate()
{
}

web::json::value UpdateGaussMySqlDatabaseCommentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool UpdateGaussMySqlDatabaseCommentResponse::fromJson(const web::json::value& val)
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

std::string UpdateGaussMySqlDatabaseCommentResponse::getJobId() const
{
    return jobId_;
}

void UpdateGaussMySqlDatabaseCommentResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateGaussMySqlDatabaseCommentResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateGaussMySqlDatabaseCommentResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


