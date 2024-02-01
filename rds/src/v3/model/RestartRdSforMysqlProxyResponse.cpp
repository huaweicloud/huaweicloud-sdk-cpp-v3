

#include "huaweicloud/rds/v3/model/RestartRdSforMysqlProxyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestartRdSforMysqlProxyResponse::RestartRdSforMysqlProxyResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestartRdSforMysqlProxyResponse::~RestartRdSforMysqlProxyResponse() = default;

void RestartRdSforMysqlProxyResponse::validate()
{
}

web::json::value RestartRdSforMysqlProxyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestartRdSforMysqlProxyResponse::fromJson(const web::json::value& val)
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


std::string RestartRdSforMysqlProxyResponse::getJobId() const
{
    return jobId_;
}

void RestartRdSforMysqlProxyResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestartRdSforMysqlProxyResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestartRdSforMysqlProxyResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


