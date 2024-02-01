

#include "huaweicloud/rds/v3/model/CreateRdSforMySqlProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateRdSforMySqlProxyResponse::CreateRdSforMySqlProxyResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CreateRdSforMySqlProxyResponse::~CreateRdSforMySqlProxyResponse() = default;

void CreateRdSforMySqlProxyResponse::validate()
{
}

web::json::value CreateRdSforMySqlProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CreateRdSforMySqlProxyResponse::fromJson(const web::json::value& val)
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


std::string CreateRdSforMySqlProxyResponse::getJobId() const
{
    return jobId_;
}

void CreateRdSforMySqlProxyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CreateRdSforMySqlProxyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CreateRdSforMySqlProxyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


