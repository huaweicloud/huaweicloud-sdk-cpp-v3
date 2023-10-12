

#include "huaweicloud/gaussdb/v3/model/DeleteSqlFilterRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteSqlFilterRuleResponse::DeleteSqlFilterRuleResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteSqlFilterRuleResponse::~DeleteSqlFilterRuleResponse() = default;

void DeleteSqlFilterRuleResponse::validate()
{
}

web::json::value DeleteSqlFilterRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteSqlFilterRuleResponse::fromJson(const web::json::value& val)
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


std::string DeleteSqlFilterRuleResponse::getJobId() const
{
    return jobId_;
}

void DeleteSqlFilterRuleResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteSqlFilterRuleResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteSqlFilterRuleResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


