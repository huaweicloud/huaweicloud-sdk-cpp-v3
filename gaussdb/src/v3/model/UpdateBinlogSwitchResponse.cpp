

#include "huaweicloud/gaussdb/v3/model/UpdateBinlogSwitchResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateBinlogSwitchResponse::UpdateBinlogSwitchResponse()
{
    result_ = "";
    resultIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateBinlogSwitchResponse::~UpdateBinlogSwitchResponse() = default;

void UpdateBinlogSwitchResponse::validate()
{
}

web::json::value UpdateBinlogSwitchResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateBinlogSwitchResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
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


std::string UpdateBinlogSwitchResponse::getResult() const
{
    return result_;
}

void UpdateBinlogSwitchResponse::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool UpdateBinlogSwitchResponse::resultIsSet() const
{
    return resultIsSet_;
}

void UpdateBinlogSwitchResponse::unsetresult()
{
    resultIsSet_ = false;
}

std::string UpdateBinlogSwitchResponse::getJobId() const
{
    return jobId_;
}

void UpdateBinlogSwitchResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateBinlogSwitchResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateBinlogSwitchResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


