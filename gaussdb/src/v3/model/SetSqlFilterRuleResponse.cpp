

#include "huaweicloud/gaussdb/v3/model/SetSqlFilterRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetSqlFilterRuleResponse::SetSqlFilterRuleResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

SetSqlFilterRuleResponse::~SetSqlFilterRuleResponse() = default;

void SetSqlFilterRuleResponse::validate()
{
}

web::json::value SetSqlFilterRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool SetSqlFilterRuleResponse::fromJson(const web::json::value& val)
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


std::string SetSqlFilterRuleResponse::getJobId() const
{
    return jobId_;
}

void SetSqlFilterRuleResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SetSqlFilterRuleResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SetSqlFilterRuleResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


